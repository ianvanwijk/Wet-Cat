#include "SimpleEnhancer.h"
#include "../Defines.h"

SimpleEnhancer::SimpleEnhancer()
{
    this->configured = false;
}

SimpleEnhancer::~SimpleEnhancer()
{
    while(this->enhancers.size() != 0)
    {
        this->enhancers.pop_back();
    }
}

bool SimpleEnhancer::execute(Image* image)
{
    unsigned i = 0;
    for(i = 0; i < this->enhancers.size(); i++)
    {
        enhancers[i]->enhance(image);
    }
    return true;
}

bool SimpleEnhancer::configure()
{
    this->enhancers.push_back(new GrayScaleEnhancer());
    this->enhancers.push_back(new ThresholdEnhancer(START_THRESHOLD, MAX_THRESHOLD));

    this->configured = true;
    return true;
}

bool SimpleEnhancer::isConfigured()
{
    return this->configured;
}

bool SimpleEnhancer::setConfiguration(int threshold)
{
    while(this->enhancers.size() != 0)
    {
        this->enhancers.pop_back();
    }
    this->enhancers.push_back(new GrayScaleEnhancer);
    this->enhancers.push_back(new ThresholdEnhancer(threshold, MAX_THRESHOLD));
    return true;
}
