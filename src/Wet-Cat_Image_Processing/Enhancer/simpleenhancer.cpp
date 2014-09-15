#include "simpleenhancer.h"

simpleEnhancer::simpleEnhancer()
{
    this->configured = false;
}

bool simpleEnhancer::execute(Image* image)
{
    return false;
}

bool simpleEnhancer::configure()
{
    this->configured = true;
    return true;
}

bool simpleEnhancer::isConfigured()
{
    return this->configured;
}
