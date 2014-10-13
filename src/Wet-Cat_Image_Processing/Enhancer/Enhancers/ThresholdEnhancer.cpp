#include "ThresholdEnhancer.h"

ThresholdEnhancer::ThresholdEnhancer()
{
}

bool ThresholdEnhancer::enhance(Image *image)
{
    try
    {
        Mat thresholdImage, edges;
        GaussianBlur(image->getFrame(), thresholdImage, Size(7, 7), 1.5, 1.5);
        Canny(thresholdImage, edges, 0, 30, 3);
        image->setFrame(edges);
        return true;
    }
    catch(Exception e)
    {
        return false;
    }
}
