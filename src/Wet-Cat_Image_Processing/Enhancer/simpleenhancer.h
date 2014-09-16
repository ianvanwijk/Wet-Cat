#ifndef SIMPLEENHANCER_H
#define SIMPLEENHANCER_H

#include "../IExecutable.h"
#include "Enhancers/DummyEnhancer.h"

class SimpleEnhancer : IExecutable
{
public:
    SimpleEnhancer();
    virtual bool execute(Image* image);
    virtual bool configure();
    virtual bool isConfigured();
private:
    bool configured;
    std::vector<IEnhancer*> enhancers;
};

#endif // SIMPLEENHANCER_H
