#include "DummyExtractor.h"

DummyExtractor::DummyExtractor()
{
}

bool DummyExtractor::extract(Image *image)
{
    unsigned i;
    for(i = 0; i < image->getBlobs().size(); i++)
    {
        //std::cout << image->getBlob(i)->getMarker() << std::endl;
    }
    return true;
}
