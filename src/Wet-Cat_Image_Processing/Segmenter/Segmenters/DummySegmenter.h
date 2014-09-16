#ifndef DUMMYSEGMENTER_H
#define DUMMYSEGMENTER_H

#include "../ISegmenter.h"

using namespace cv;

class DummySegmenter : public ISegmenter
{
public:
    DummySegmenter(int Threshold, int Max);
    virtual bool segment(Image *image);
private:
    int threshold;
    int max;
};

#endif // DUMMYSEGMENTER_H
