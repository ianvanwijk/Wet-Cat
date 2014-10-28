#include "SimpleCommunicator.h"
#include "Defines.h"

void* checkExecuting(void *communicator);

SimpleCommunicator::SimpleCommunicator()
{
    this->configured = false;
    this->executing = false;
    this->serialPort = new QSerialPort();
    this->stopThread = false;
    //start thread and use checkExecuting for function
}

SimpleCommunicator::~SimpleCommunicator()
{
    this->stopThread = true;
    std::cout << "ending thread" << std::endl;
    pthread_join(this->thread, NULL);
    std::cout << "thread ended" << std::endl;
}

bool SimpleCommunicator::execute(Image *image)
{
    Mat keypointImage = image->getImage();
    if(image->getBlobs().size() == 0)
    {
        this->executing = false;
    }
    else
    {
        bool Action = false;
        unsigned i= 0;
        for(i = 0; i < image->getBlobs().size(); i++)
        {
            if(image->getBlob(i)->getStatus() == ACTION_READY || image->getBlob(i)->getStatus() == ACTION_EXECUTE)
            {
                Action = true;
                if(image->getBlob(i)->getStatus() == ACTION_READY)
                {
                    this->executing = true;
                    QString commando;
                    commando = QString::number(image->getBlob(i)->getType()) + "," + QString::number( (int) image->getBlob(i)->getPosX()) + "," + QString::number( (int) image->getBlob(i)->getPosY()) + ";";
                    //send command to turret, cat found!
                    this->serialPort->write(commando.toStdString().c_str());
                    image->getBlob(i)->setStatus(ACTION_EXECUTE);
                }
                //check if turret is done
                if(!this->executing)
                {
                    image->getBlob(i)->setStatus(ACTION_DONE);
                }
            }
            if(!Action && image->getBlob(i)->getStatus() != ACTION_DONE)
            {
                QString commando = "stop;";
                this->serialPort->write(commando.toStdString().c_str());
                this->stopExecuting();
                //send stop command to turret, target is gone or moved!
            }
            this->draw(image->getBlob(i)->getStatus(), &keypointImage, image->getBlob(i));
        }
    }
    image->setImage(keypointImage);
    return true;
}

bool SimpleCommunicator::draw(int status, Mat* image, Blob* blob)
{
    Mat frame = *image;
    Scalar red(0, 0, 255); //red
    Scalar green(0, 255, 0); //green
    Scalar blue(255, 0, 0); //blue

    Point p1;
    p1.x = blob->getPosX() - blob->getSize();
    p1.y = blob->getPosY() - blob->getSize();
    Point p2;
    p2.x = blob->getPosX() + blob->getSize();
    p2.y = blob->getPosY() + blob->getSize();
    int number = blob->getNrOfHoles();

    if(status == ACTION_EXECUTE)
    {
        blob->getMarker().draw(frame, red, 2, false);
    }
    else if(status == ACTION_DONE)
    {
        blob->getMarker().draw(frame, blue, 2, false);
    }
    else
    {
        blob->getMarker().draw(frame, green, 2, false);
    }
    *image = frame;
    putText(*image, QString::number(number).toStdString(), p1, FONT_HERSHEY_SCRIPT_SIMPLEX, 2, Scalar::all(255));
    return true;
}


void* checkExecuting(void* communicator)
{
    SimpleCommunicator* simpleCommunicator = (SimpleCommunicator*) communicator;
    char data[6];
    data[5] = '\0';
    while(!simpleCommunicator->stopThread)
    {
        std::cout << "thread tick" << std::endl;
        while(true && !simpleCommunicator->stopThread);// !simpleCommunicator->isExecuting() && !simpleCommunicator->stopThread);
        if(simpleCommunicator->isExecuting())
        {
            std::cout << "thread is executing" << std::endl;
            while(simpleCommunicator->serialPort->peek(data, 5) != 5 && !simpleCommunicator->stopThread);
            if(simpleCommunicator->serialPort->peek(data, 5) >= 5)
            {
                simpleCommunicator->serialPort->read(data, 5);
                std::cout << "Received: " << data << std::endl;
                if(data[0] == 'd' && data[1] == 'o' && data[2] == 'n' && data[3] == 'e' && data[4] == ';')
                {
                    std::cout << "same" << std::endl;
                    simpleCommunicator->stopExecuting();
                }
            }
        }
    }
    return NULL;
}

bool SimpleCommunicator::configure()
{
    this->serialPort->setPortName(COMPORT);
    this->serialPort->setBaudRate(BAUDRATE);
    this->serialPort->open(QIODevice::ReadWrite);
    pthread_create(&this->thread, NULL, checkExecuting, (void*) this);
    this->configured = true;
    return true;
}

bool SimpleCommunicator::configure(QString configurationFile)
{
    return this->configure();
    QFile file("Configuration/" + configurationFile);
    if(!file.open(QIODevice::ReadWrite))
    {
        std::cout << "failed configuring communicator" << std::endl;
        return configure();
    }
    QString string = file.readLine();
    this->serialPort->setPortName(string.split("=").back());
    string = file.readLine();
    this->serialPort->setBaudRate(string.split("=").back().toInt());
    this->serialPort->open(QIODevice::ReadWrite);
    pthread_create(&this->thread, NULL, checkExecuting, (void*) this);
    this->configured = true;
    return true;
}

bool SimpleCommunicator::isConfigured()
{
    return this->configured;
}

bool SimpleCommunicator::isExecuting()
{
    return this->executing;
}

bool SimpleCommunicator::stopExecuting()
{
    this->executing = false;
    return true;
}
