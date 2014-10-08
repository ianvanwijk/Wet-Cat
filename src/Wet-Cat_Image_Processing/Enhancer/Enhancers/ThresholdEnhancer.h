#ifndef THRESHOLDENHANCER_H
#define THRESHOLDENHANCER_H

#include "../IEnhancer.h"

using namespace cv;

class ThresholdEnhancer : public IEnhancer
{
public:
    ThresholdEnhancer(int Threshold, int Max);
    bool enhance(Image *image);
    int threshold;
    int max;
private:
};

#endif // THRESHOLDENHANCER_H
