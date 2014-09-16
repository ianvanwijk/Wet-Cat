#include "SimpleExtractor.h"

SimpleExtractor::SimpleExtractor()
{
    this->configured = false;
}

bool SimpleExtractor::execute(Image* image)
{
    unsigned i = 0;
    for(i = 0; i < this->extractors.size(); i++)
    {
        extractors[i]->extract(image);
    }
    return true;
}

bool SimpleExtractor::configure()
{
    this->extractors.push_back(new DummyExtractor());
    this->configured = true;
    return true;
}

bool SimpleExtractor::isConfigured()
{
    return this->configured;
}
