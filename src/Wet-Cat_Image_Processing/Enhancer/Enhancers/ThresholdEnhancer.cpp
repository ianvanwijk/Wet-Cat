#include "ThresholdEnhancer.h"

ThresholdEnhancer::ThresholdEnhancer(int Threshold, int Max)
{
    this->threshold = Threshold;
    this->max = Max;
}

bool ThresholdEnhancer::enhance(Image *image)
{
    try
    {
        Mat thresholdImage;
        cv::threshold(image->getFrame(), thresholdImage, this->threshold, this->max, THRESH_BINARY);
        image->setFrame(thresholdImage);
        return true;
    }
    catch(Exception e)
    {
        return false;
    }
}
