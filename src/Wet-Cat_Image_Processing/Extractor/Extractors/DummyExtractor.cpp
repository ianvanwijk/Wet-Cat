#include "DummyExtractor.h"

DummyExtractor::DummyExtractor()
{
}

bool DummyExtractor::extract(Image *image)
{
    Scalar color(255, 0, 0);
    Mat keypointImage = image->getImage();

    unsigned i;

    for(i = 0; i < image->getBlobs().size(); i++)
    {
        Point p1;
        p1.x = image->getBlob(i)->getPosX() - image->getBlob(i)->getSize();
        p1.y = image->getBlob(i)->getPosY() - image->getBlob(i)->getSize();
        Point p2;
        p2.x = image->getBlob(i)->getPosX() + image->getBlob(i)->getSize();
        p2.y = image->getBlob(i)->getPosY() + image->getBlob(i)->getSize();
        rectangle(keypointImage, p1, p2, color);
        std::cout << "Blob: " << i << " - " << std::endl;
        std::cout << image->getBlob(i)->getSize() << std::endl;
        std::cout << image->getBlob(i)->getPosX() << std::endl;
        std::cout << image->getBlob(i)->getPosY() << std::endl;
    }
    image->setImage(keypointImage);

    return true;
}
