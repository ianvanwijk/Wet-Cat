#ifndef DETECTBLOBSEGMENTER_H
#define DETECTBLOBSEGMENTER_H

#include "../ISegmenter.h"

class DetectBlobSegmenter : public ISegmenter
{
public:
    DetectBlobSegmenter();
    virtual bool segment(Image *image);
private:
    int minArea;
    int maxArea;
    SimpleBlobDetector* blobDetector;
};

#endif // DETECTBLOBSEGMENTER_H
