#include "GrayScaleEnhancer.h"

GrayScaleEnhancer::GrayScaleEnhancer()
{
}

bool GrayScaleEnhancer::enhance(Image *image)
{
    try
    {
        Mat gray;
        cvtColor(image->getFrame(), gray, CV_RGB2GRAY);
        image->setFrame(gray);
        return true;
    }
    catch(Exception e)
    {
        return false;
    }
}
