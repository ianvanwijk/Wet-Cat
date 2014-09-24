#include "SimpleCommunicator.h"
#include "Defines.h"

SimpleCommunicator::SimpleCommunicator()
{
    this->configured = false;
    this->executing = false;
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
                //test if all colors work
                if(image->getBlob(i)->getStatus() == ACTION_EXECUTE)
                {
                    image->getBlob(i)->setStatus(ACTION_DONE);
                }
                //
                Action = true;
                this->executing = true;
                if(image->getBlob(i)->getStatus() == ACTION_READY)
                {
                    //send action to turret (type and location)
                    image->getBlob(i)->setStatus(ACTION_EXECUTE);
                }
                //check if turret is done
                /*
                 * if turret is done
                 * image->getBlob(i)->setStatus(ACTION_DONE);
                 */
            }
            if(!Action)
            {
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
    Scalar red(0, 0, 255); //red
    Scalar green(0, 255, 0); //green
    Scalar blue(255, 0, 0); //blue

    Point p1;
    p1.x = blob->getPosX() - blob->getSize();
    p1.y = blob->getPosY() - blob->getSize();
    Point p2;
    p2.x = blob->getPosX() + blob->getSize();
    p2.y = blob->getPosY() + blob->getSize();

    if(status == ACTION_EXECUTE)
    {
        rectangle(*image, p1, p2, red);
    }
    else if(status == ACTION_DONE)
    {
        rectangle(*image, p1, p2, blue);
    }
    else
    {
        rectangle(*image, p1, p2, green);
    }
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
