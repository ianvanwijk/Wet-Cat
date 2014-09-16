#ifndef DUMMYEXTRACTOR_H
#define DUMMYEXTRACTOR_H

#include "../IExtractor.h"

using namespace cv;

class DummyExtractor : public IExtractor
{
public:
    DummyExtractor();
    virtual bool extract(Image *image);
};

#endif // DUMMYEXTRACTOR_H
