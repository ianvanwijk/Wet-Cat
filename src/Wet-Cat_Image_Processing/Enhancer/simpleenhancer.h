#ifndef SIMPLEENHANCER_H
#define SIMPLEENHANCER_H

#include "../IExecutable.h"
#include "Enhancers/DummyEnhancer.h"
#include "Enhancers/GrayScaleEnhancer.h"
#include "Enhancers/ThresholdEnhancer.h"
#include "Enhancers/ResizeEnhancer.h"
#include <QStringList>
#include <QString>
#include <QFile>

class SimpleEnhancer : IExecutable
{
public:
    SimpleEnhancer();
    virtual ~SimpleEnhancer();
    virtual bool execute(Image* image);
    virtual bool configure();
    virtual bool configure(QString configurationFile);
    virtual bool isConfigured();
private:
    bool configured;
    std::vector<IEnhancer*> enhancers;
};

#endif // SIMPLEENHANCER_H
