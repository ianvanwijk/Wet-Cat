#include "SimpleClassifier.h"
#include "Defines.h"

SimpleClassifier::SimpleClassifier()
{
    this->configured = false;
}

bool SimpleClassifier::execute(Image *image)
{
    unsigned i = 0;
    for(i = 0; i < image->getBlobs().size(); i++)
    {
        if(image->getBlob(i)->getStatus() == FIRST_SEEN)
        {
            image->getBlob(i)->setStatus(SEEN);
        }
        if(image->getBlob(i)->getStatus() < FIRST_SEEN)
        {
            image->getBlob(i)->setStatus(FIRST_SEEN);
        }
        /*
         * if blob has 1 hole, set type to cat
         * etc...
         */
    }
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
