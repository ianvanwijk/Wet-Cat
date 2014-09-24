#ifndef SIMPLEENHANCER_H
#define SIMPLEENHANCER_H

#include "../IExecutable.h"
#include "Enhancers/DummyEnhancer.h"
#include "Enhancers/GrayScaleEnhancer.h"
#include "Enhancers/ThresholdEnhancer.h"

class SimpleEnhancer : IExecutable
{
public:
    SimpleEnhancer();
    virtual bool execute(Image* image);
    virtual bool configure();
    virtual bool isConfigured();
    bool setConfiguration(int threshold);
private:
    bool configured;
    std::vector<IEnhancer*> enhancers;
};

#endif // SIMPLEENHANCER_H
