#include "DummyEnhancer.h"

DummyEnhancer::DummyEnhancer()
{
}

bool DummyEnhancer::enhance(Image *image)
{
    Mat gray;
    cvtColor(image->getFrame(), gray, CV_RGB2GRAY);
    image->setFrame(gray);
    return true;
}
