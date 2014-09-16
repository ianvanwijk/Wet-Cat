#include "DummySegmenter.h"

DummySegmenter::DummySegmenter(int Threshold, int Max)
{
    this->threshold = Threshold;
    this->max = Max;
}

bool DummySegmenter::segment(Image *image)
{
    Mat thres;
    cv::threshold(image->getFrame(), thres, this->threshold, this->max, CV_THRESH_BINARY);
    image->setFrame(thres);
    return true;
}
