#include "DetectBlobSegmenter.h"
#include "Defines.h"

DetectBlobSegmenter::DetectBlobSegmenter()
{
    SimpleBlobDetector::Params params;
    params.minDistBetweenBlobs = 50.0f;
    params.filterByInertia = false;
    params.filterByConvexity = false;
    params.filterByColor = false;
    params.filterByCircularity = false;
    params.filterByArea = true;
    blobDetector = new SimpleBlobDetector(params);
}

bool DetectBlobSegmenter::segment(Image *image)
{
    std::vector<KeyPoint> keypoints;
    this->blobDetector->detect(image->getFrame(), keypoints);
    unsigned i;
    unsigned j;
    for(i = 0; i < keypoints.size(); i++)
    {
        Blob* blob = new Blob();
        blob->setImage(image->getFrame());
        for(j = 0; j < image->getOldBlobs().size(); j ++)
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
