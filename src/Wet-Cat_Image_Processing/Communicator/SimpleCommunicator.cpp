#include "SimpleCommunicator.h"

SimpleCommunicator::SimpleCommunicator()
{
    this->configured = false;
    this->executing = false;
}

bool SimpleCommunicator::execute(Image *image)
{
    Mat keypointImage = image->getImage();
    unsigned i= 0;
    Scalar color1(0, 0, 255);
    Scalar color2(0, 255, 0);
    Scalar color3(255, 0, 0);
    if(image->getBlobs().size() == 0)
    {
        this->executing = false;
    }
    for(i = 0; i < image->getBlobs().size(); i++)
    {
        Point p1;
        p1.x = image->getBlob(i)->getPosX() - image->getBlob(i)->getSize();
        p1.y = image->getBlob(i)->getPosY() - image->getBlob(i)->getSize();
        Point p2;
        p2.x = image->getBlob(i)->getPosX() + image->getBlob(i)->getSize();
        p2.y = image->getBlob(i)->getPosY() + image->getBlob(i)->getSize();
        if(image->getBlob(i)->getStatus() > 10 && image->getBlob(i)->getStatus() < 20)
        {
            this->executing = true;
            image->getBlob(i)->addStatus(1);
            if(image->getBlob(i)->getStatus() == 20)
            {
                rectangle(keypointImage, p1, p2, color1);
                this->executing = false;
            }
            else
            {
                rectangle(keypointImage, p1, p2, color2);
            }
        }
        else
        {
            if(image->getBlob(i)->getStatus() == 20)
            {
                rectangle(keypointImage, p1, p2, color1);
            }
            else
            {
                rectangle(keypointImage, p1, p2, color3);
            }
        }
        std::cout << "Blob: " << i << " - " << std::endl;
        std::cout << image->getBlob(i)->getStatus() << std::endl;
    }
    image->setImage(keypointImage);
    return true;
}

void* checkExecuting(void* communicator)
{
    SimpleCommunicator* simpleCommunicator = (SimpleCommunicator*) communicator;
    while(true)
    {
        if(simpleCommunicator->isExecuting())
        {
            //wait for feedback from turret
            simpleCommunicator->stopExecuting();
        }
    }
    return NULL;
}

bool SimpleCommunicator::configure()
{
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
