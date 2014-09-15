#ifndef SIMPLEENHANCER_H
#define SIMPLEENHANCER_H

#include "../iexecutable.h"
#include "enhancement.h"

class simpleEnhancer : IExecutable
{
public:
    simpleEnhancer();
    virtual bool execute(Image* image);
    virtual bool configure();
    virtual bool isConfigured();
private:
    bool configured;
};

#endif // SIMPLEENHANCER_H
