#include "ArucoSegmenter.h"

ArucoSegmenter::ArucoSegmenter()
{
    this->MDetector = new aruco::MarkerDetector();
}

bool ArucoSegmenter::segment(Image *image)
{
    vector<Marker> markers;
    Mat frame = image->getImage();
    this->MDetector->detect(frame, markers);
    unsigned i;
    unsigned j;
    for(i = 0; i < markers.size(); i++)
    {
        Blob* blob = new Blob();
        blob->setmarker(markers[i]);
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
