#ifndef GRAYSCALEENHANCER_H
#define GRAYSCALEENHANCER_H

#include "../IEnhancer.h"

using namespace cv;

class GrayScaleEnhancer : public IEnhancer
{
public:
    GrayScaleEnhancer();
    bool enhance(Image *image);
};

#endif // GRAYSCALEENHANCER_H
