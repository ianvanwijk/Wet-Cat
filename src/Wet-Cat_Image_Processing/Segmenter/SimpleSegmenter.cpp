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
    this->segmenters.push_back(new DummySegmenter(100, 255));
    this->configured = true;
    return true;
}

bool SimpleSegmenter::isConfigured()
{
    return this->configured;
}
