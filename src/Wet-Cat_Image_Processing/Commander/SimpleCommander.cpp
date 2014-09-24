#include "SimpleCommander.h"

SimpleCommander::SimpleCommander(SimpleCommunicator* simpleCommunicator)
{
    this->simpleCommunicator = simpleCommunicator;
    this->configured = false;
}

bool SimpleCommander::execute(Image *image)
{
    if(!this->simpleCommunicator->isExecuting())
    {
        unsigned i = 0;
        for(i = 0; i < image->getBlobs().size(); i++)
        {
            std::cout << image->getBlob(i)->getStatus() << std::endl;
            if(image->getBlob(i)->getStatus() >= 10 && image->getBlob(i)->getStatus() < 20)
            {
                image->getBlob(i)->setStatus(11);
                break;
            }
        }
    }
    return true;
}

bool SimpleCommander::configure()
{
    this->configured = true;
    return true;
}

bool SimpleCommander::isConfigured()
{
    return this->configured;
}
