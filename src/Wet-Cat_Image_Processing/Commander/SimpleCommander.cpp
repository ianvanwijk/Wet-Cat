#include "SimpleCommander.h"
#include "Defines.h"

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
            if(image->getBlob(i)->getStatus() == SEEN)
            {
                image->getBlob(i)->setStatus(ACTION_READY);
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
