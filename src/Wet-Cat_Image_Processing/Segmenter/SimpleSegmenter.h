#ifndef SIMPLESEGMENTER_H
#define SIMPLESEGMENTER_H

#include "../IExecutable.h"
#include "Segmenters/DummySegmenter.h"

class SimpleSegmenter : IExecutable
{
public:
    SimpleSegmenter();
    virtual bool execute(Image* image);
    virtual bool configure();
    virtual bool isConfigured();
private:
    bool configured;
    std::vector<ISegmenter*> segmenters;
};

#endif // SIMPLESEGMENTER_H
