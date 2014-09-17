#include "SimpleCommunicator.h"

SimpleCommunicator::SimpleCommunicator()
{
    this->configured = false;
    this->executing = false;
}

bool SimpleCommunicator::execute(Image *image)
{
    this->executing = true;
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
