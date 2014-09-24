#include "SimpleSegmenter.h"

SimpleSegmenter::SimpleSegmenter()
{
    this->configured = false;
}

bool SimpleSegmenter::execute(Image* image)
{
    unsigned i = 0;
    for(i = 0; i < this->segmenters.size(); i++)
    {
        segmenters[i]->segment(image);
    }
    return true;
}

bool SimpleSegmenter::configure()
{
    this->segmenters.push_back(new DetectBlobSegmenter(6000, 10000));
    this->configured = true;
    return true;
}

bool SimpleSegmenter::isConfigured()
{
    return this->configured;
}

bool SimpleSegmenter::setConfiguration(int minArea, int maxArea)
{
    while(this->segmenters.size() != 0)
    {
        this->segmenters.pop_back();
    }
    this->segmenters.push_back(new DetectBlobSegmenter(minArea, maxArea));
}
