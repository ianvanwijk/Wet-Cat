#include "SimpleSegmenter.h"
#include "../Defines.h"

SimpleSegmenter::SimpleSegmenter()
{
    this->configured = false;
}

SimpleSegmenter::~SimpleSegmenter()
{
    while(this->segmenters.size() != 0)
    {
        this->segmenters.pop_back();
    }
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
    this->segmenters.push_back(new DetectBlobSegmenter(START_MIN_AREA, START_MAX_AREA));
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
    return true;
}
