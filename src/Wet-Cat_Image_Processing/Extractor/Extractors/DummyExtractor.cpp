#include "DummyExtractor.h"

DummyExtractor::DummyExtractor()
{
}

bool DummyExtractor::extract(Image *image)
{
    unsigned i;
    for(i = 0; i < image->getBlobs().size(); i++)
    {
        std::cout << image->getBlob(i)->getMarker() << std::endl;
        //Mat frame = image->getImage();
        //image->getBlob(i)->getMarker().draw(frame, Scalar(0, 0, 255), 2);
        //image->setImage(frame);
    }
    return true;
}
