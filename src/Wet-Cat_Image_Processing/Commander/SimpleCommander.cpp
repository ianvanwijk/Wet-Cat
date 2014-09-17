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
        //set next command
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
