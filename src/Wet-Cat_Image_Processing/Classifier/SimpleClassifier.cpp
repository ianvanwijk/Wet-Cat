#include "SimpleClassifier.h"
#include "Defines.h"
#include "../CVBlob/include/cvblob.h"

SimpleClassifier::SimpleClassifier()
{
    this->configured = false;
}

SimpleClassifier::~SimpleClassifier()
{

}

bool SimpleClassifier::execute(Image *image)
{
    unsigned i = 0;
    for(i = 0; i < image->getBlobs().size(); i++)
    {
        switch(image->getBlob(i)->getNrOfHoles())
        {
        case 1:
            image->getBlob(i)->setType(CAT1);
            break;
        case 2:
            image->getBlob(i)->setType(CAT2);
            break;
        case 3:
            image->getBlob(i)->setType(CAT3);
            break;
        case 4:
            image->getBlob(i)->setType(DANGER1);
            break;
        case 5:
            image->getBlob(i)->setType(DANGER2);
            break;
        case 6:
            image->getBlob(i)->setType(DANGER3);
            break;
        case 7:
            image->getBlob(i)->setType(DANGER4);
            break;
        case 8:
            image->getBlob(i)->setType(REMOVE);
            break;
        default:
            image->getBlob(i)->setType(NONE);
            break;
        }

        if(image->getBlob(i)->getStatus() == FIRST_SEEN)
        {
            image->getBlob(i)->setStatus(SEEN);
        }
        if(image->getBlob(i)->getStatus() < FIRST_SEEN)
        {
            image->getBlob(i)->setStatus(FIRST_SEEN);
        }
    }
    return true;
}

bool SimpleClassifier::configure()
{
    this->configured = true;
    return true;
}

bool SimpleClassifier::configure(QString configurationFile)
{
    return configure();
}

bool SimpleClassifier::isConfigured()
{
    return this->configured;
}
