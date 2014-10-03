#ifndef SIMPLESEGMENTER_H
#define SIMPLESEGMENTER_H

#include "../IExecutable.h"
#include "Segmenters/DummySegmenter.h"
#include "Segmenters/DetectBlobSegmenter.h"
#include <QStringList>
#include <QString>
#include <QFile>

class SimpleSegmenter : IExecutable
{
public:
    SimpleSegmenter();
    virtual ~SimpleSegmenter();
    virtual bool execute(Image* image);
    virtual bool configure();
    virtual bool configure(QString configurationFile);
    virtual bool isConfigured();
    bool setConfiguration(int minArea, int maxArea);
private:
    bool configured;
    std::vector<ISegmenter*> segmenters;
};

#endif // SIMPLESEGMENTER_H
