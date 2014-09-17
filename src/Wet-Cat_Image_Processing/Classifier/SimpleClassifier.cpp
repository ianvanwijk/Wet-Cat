#include "SimpleClassifier.h"

SimpleClassifier::SimpleClassifier()
{
    this->configured = false;
}

bool SimpleClassifier::execute(Image *image)
{
    return true;
}

bool SimpleClassifier::configure()
{
    this->configured = true;
    return true;
}

bool SimpleClassifier::isConfigured()
{
    return this->configured;
}
