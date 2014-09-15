#include "enhancement.h"

enhancement::enhancement()
{
}

bool enhancement::setEnhancer(IEnhancer Enhancer)
{
    this->enhancer = Enhancer;
}

IEnhancer enhancement::getEnhancer()
{
    return this->enhancer;
}

bool enhancement::setParameters(Vector<int> Parameters)
{
    this->parameters = Parameters;
}

Vector<int> enhancement::getParameters()
{
    return this->parameters;
}
