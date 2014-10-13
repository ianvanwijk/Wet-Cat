#include "ArucoSegmenter.h"

ArucoSegmenter::ArucoSegmenter()
{
    this->MDetector = new aruco::MarkerDetector();
}

bool ArucoSegmenter::segment(Image *image)
{
    imshow("Debug", image->getFrame());
    this->MDetector->detect(image->getFrame(), this->Markers);
    std::cout << this->Markers.size() << std::endl;
    unsigned i;
    unsigned j;
    for(i = 0; i < this->Markers.size(); i++)
    {
        Blob* blob = new Blob();
        blob->setmarker(this->Markers[i]);
        for(j = 0; j < image->getOldBlobs().size(); j++)
        {
            if(blob->getPosX() < image->getOldBlob(j)->getPosX() + MAX_MOVEMENT &&
               blob->getPosX() > image->getOldBlob(j)->getPosX() - MAX_MOVEMENT &&
               blob->getPosY() < image->getOldBlob(j)->getPosY() + MAX_MOVEMENT &&
               blob->getPosY() > image->getOldBlob(j)->getPosY() - MAX_MOVEMENT)
            {
                blob->setStatus(image->getOldBlob(j)->getStatus());
                break;
            }
        }
        image->addBlob(blob);
    }
    return true;
}
