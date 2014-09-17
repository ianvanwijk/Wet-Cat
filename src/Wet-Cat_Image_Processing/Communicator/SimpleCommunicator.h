#ifndef SIMPLECOMMUNICATOR_H
#define SIMPLECOMMUNICATOR_H

#include "../IExecutable.h"

class SimpleCommunicator : IExecutable
{
public:
    SimpleCommunicator();
    bool execute(Image *image);
    bool configure();
    bool isConfigured();
    bool isExecuting();
    bool stopExecuting();
private:
    bool executing;
    bool configured;
};

#endif // SIMPLECOMMUNICATOR_H
