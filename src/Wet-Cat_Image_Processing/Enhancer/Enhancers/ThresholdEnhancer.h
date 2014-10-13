#ifndef THRESHOLDENHANCER_H
#define THRESHOLDENHANCER_H

#include "../IEnhancer.h"
#include <aruco/aruco.h>

using namespace cv;

class ThresholdEnhancer : public IEnhancer
{
public:
    ThresholdEnhancer();
    bool enhance(Image *image);
private:
};

#endif // THRESHOLDENHANCER_H
