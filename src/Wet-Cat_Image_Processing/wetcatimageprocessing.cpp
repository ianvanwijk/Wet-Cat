#include "WetCatImageProcessing.h"
#include "ui_wetcatimageprocessing.h"
#include "Defines.h"

WetCatImageProcessing::WetCatImageProcessing(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WetCatImageProcessing)
{
    ui->setupUi(this);
    this->corner = LEFTTOP;
    this->acquirer = new SimpleAcquirer();
    this->enhancer = new SimpleEnhancer();
    this->segmenter = new SimpleSegmenter();
    this->extractor = new SimpleExtractor();
    this->classifier = new SimpleClassifier();
    this->communicator = new SimpleCommunicator();
    this->commander = new SimpleCommander(this->communicator);
    this->image = new Image();
    this->timer = new QTimer(this);
    this->elapsedTimer = new QElapsedTimer();
    connect(this->timer, SIGNAL(timeout()), this, SLOT(updateTimer()));
    connect(this->ui->OpenCVViewer, SIGNAL(mouseClickEvent()), this, SLOT(On_Image_Clicked()));
}

WetCatImageProcessing::~WetCatImageProcessing()
{
    if(this->acquirer->isConfigured())
        delete this->acquirer;
    if(this->enhancer->isConfigured())
        delete this->enhancer;
    if(this->segmenter->isConfigured())
        delete this->segmenter;
    if(this->extractor->isConfigured())
        delete this->extractor;
    if(this->classifier->isConfigured())
        delete this->classifier;
    if(this->commander->isConfigured())
        delete this->commander;
    if(this->communicator->isConfigured())
        delete this->communicator;
    delete this->image;
    delete this->timer;
    delete this->elapsedTimer;
    delete ui;
}

void WetCatImageProcessing::On_Image_Clicked()
{
    if(corner < DONE && communicator->isConfigured())
    {
        QString send;
        send = QString::number(corner) + "," + QString::number(this->ui->OpenCVViewer->m_lastPoint.x()) + "," + QString::number(this->ui->OpenCVViewer->m_lastPoint.y()) + ";";
        std::cout << send.toStdString() << std::endl;
        corner++;
        communicator->serialPort->write(send.toStdString().c_str());
    }
}

void WetCatImageProcessing::updateTimer()
{
    this->image->setOldBlobs(this->image->getBlobs());
    this->image->clearBlobs();
    uint secs = this->elapsedTimer->nsecsElapsed();
    if(this->acquirer->isConfigured() && this->enhancer->isConfigured() && this->segmenter->isConfigured() && this->extractor->isConfigured() && this->classifier->isConfigured() && this->commander->isConfigured() && this->communicator->isConfigured())
    {
        if(!this->acquirer->execute(this->image))
        {
            info.append(QString("error acquirering from acquirer!"));
            ui->statusBar->showMessage(info);
        }
        if(!this->enhancer->execute(this->image))
        {
            info.append(QString("error enhancing image!"));
            ui->statusBar->showMessage(info);
        }
        if(!this->segmenter->execute(this->image))
        {
            info.append(QString("error segmenting image!"));
            ui->statusBar->showMessage(info);
        }
        if(!this->extractor->execute(this->image))
        {
            info.append(QString("error extracting image!"));
            ui->statusBar->showMessage(info);
        }
        if(!this->classifier->execute(this->image))
        {
            info.append(QString("error classifying image!"));
            ui->statusBar->showMessage(info);
        }
        if(!this->commander->execute(this->image))
        {
            info.append(QString("error commanding image!"));
            ui->statusBar->showMessage(info);
        }
        if(!this->communicator->execute(this->image))
        {
            info.append(QString("error communicating image!"));
            ui->statusBar->showMessage(info);
        }
        this->ui->OpenCVViewer->showImage(this->image->getImage());
        //imshow("Debug", this->image->getFrame());
        //updateWindow("Debug");
    }
    else
    {
        info.append(QString("not configured"));
        ui->statusBar->showMessage(info);
    }
    secs = this->elapsedTimer->nsecsElapsed() - secs;
    std::cout << secs/1000000 << std::endl;
}

void WetCatImageProcessing::on_BT_Configure_clicked()
{
    if(!this->acquirer->isConfigured())
    {
        if(!this->acquirer->configure("acquirer.dat"))
        {
            info.append(QString("error configuring acquirer!"));
            ui->statusBar->showMessage(info);
        }
    }
    if(!this->enhancer->isConfigured())
    {
        if(!this->enhancer->configure("enhancer.dat"))
        {
            info.append(QString("error configuring enhancer!"));
            ui->statusBar->showMessage(info);
        }
    }
    if(!this->segmenter->isConfigured())
    {
        if(!this->segmenter->configure("segmenter.dat"))
        {
            info.append(QString("error configuring segmenter!"));
            ui->statusBar->showMessage(info);
        }
    }
    if(!this->extractor->isConfigured())
    {
        if(!this->extractor->configure("extractor.dat"))
        {
            info.append(QString("error configuring extractor!"));
            ui->statusBar->showMessage(info);
        }
    }
    if(!this->classifier->isConfigured())
    {
        if(!this->classifier->configure())
        {
            info.append(QString("error configuring classifier!"));
            ui->statusBar->showMessage(info);
        }
    }
    if(!this->commander->isConfigured())
    {
        if(!this->commander->configure())
        {
            info.append(QString("error configuring commander!"));
            ui->statusBar->showMessage(info);
        }
    }
    if(!this->communicator->isConfigured())
    {
        if(!this->communicator->configure("communicator.dat"))
        {
            info.append(QString("error configuring communicator!"));
            ui->statusBar->showMessage(info);
        }
    }
    this->ui->BT_Configure->setEnabled(false);
    this->ui->BT_Show->setEnabled(true);
    this->ui->BT_Up->setEnabled(true);
    this->ui->BT_Down->setEnabled(true);
    this->ui->BT_Left->setEnabled(true);
    this->ui->BT_Right->setEnabled(true);
}

void WetCatImageProcessing::on_BT_Show_clicked()
{
    if(this->acquirer->isConfigured() && this->enhancer->isConfigured() && this->segmenter->isConfigured() && this->extractor->isConfigured() && this->classifier->isConfigured() && this->commander->isConfigured() && this->communicator->isConfigured())
    {
        this->timer->start(1000/FPS);
        this->elapsedTimer->start();
        this->ui->BT_Show->setEnabled(false);
        this->ui->BT_Add_Danger->setEnabled(true);
        this->ui->BT_Remove_Danger->setEnabled(true);
    }
}

void WetCatImageProcessing::on_BT_Add_Danger_clicked()
{
    this->commander->addDangerZone();
}

void WetCatImageProcessing::on_BT_Remove_Danger_clicked()
{
    this->commander->removeDangerZone();
}

//up
void WetCatImageProcessing::on_BT_Up_clicked()
{
    char send = 65;
    this->communicator->serialPort->write(&send);
}

//down
void WetCatImageProcessing::on_BT_Down_clicked()
{
    char send = 66;
    this->communicator->serialPort->write(&send);
}

//left
void WetCatImageProcessing::on_BT_Left_clicked()
{
    char send = 68;
    this->communicator->serialPort->write(&send);
}

//right
void WetCatImageProcessing::on_BT_Right_clicked()
{
    char send = 67;
    this->communicator->serialPort->write(&send);
}

void WetCatImageProcessing::keyPressEvent(QKeyEvent *e)
{
    switch(e->key())
    {
    case(Qt::Key_Up):
        on_BT_Up_clicked();
        break;
    case(Qt::Key_Down):
        on_BT_Down_clicked();
        break;
    case(Qt::Key_Left):
        on_BT_Left_clicked();
        break;
    case(Qt::Key_Right):
        on_BT_Right_clicked();
        break;
    }
}
