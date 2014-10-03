#ifndef SIMPLECOMMANDER_H
#define SIMPLECOMMANDER_H

#include "../IExecutable.h"
#include "../Communicator/SimpleCommunicator.h"

class SimpleCommander : IExecutable
{
public:
    SimpleCommander(SimpleCommunicator* simpleCommunicator);
    virtual ~SimpleCommander();
    virtual bool execute(Image *image);
    virtual bool configure();
    virtual bool configure(QString configurationFile);
    virtual bool isConfigured();
private:
    bool configured;
    SimpleCommunicator* simpleCommunicator;
};

#endif // SIMPLECOMMANDER_H
