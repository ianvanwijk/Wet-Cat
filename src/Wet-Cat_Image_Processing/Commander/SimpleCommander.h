#ifndef SIMPLECOMMANDER_H
#define SIMPLECOMMANDER_H

#include "../IExecutable.h"
#include "../Communicator/SimpleCommunicator.h"

class SimpleCommander : IExecutable
{
public:
    SimpleCommander(SimpleCommunicator* simpleCommunicator);
    virtual ~SimpleCommander();
    bool execute(Image *image);
    bool configure();
    bool isConfigured();
private:
    bool configured;
    SimpleCommunicator* simpleCommunicator;
};

#endif // SIMPLECOMMANDER_H
