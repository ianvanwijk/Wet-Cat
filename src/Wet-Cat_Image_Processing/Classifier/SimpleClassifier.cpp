#include "SimpleClassifier.h"

SimpleClassifier::SimpleClassifier()
{
    this->configured = false;
}

bool SimpleClassifier::execute(Image *image)
{
    unsigned i = 0;
    for(i = 0; i < image->getBlobs().size(); i++)
    {
        if(image->getBlob(i)->getStatus() < 10)
        {
            image->getBlob(i)->addStatus(1);
        }
    }
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
