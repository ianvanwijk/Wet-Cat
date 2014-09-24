#include "DetectBlobSegmenter.h"

DetectBlobSegmenter::DetectBlobSegmenter(int MinArea, int MaxArea)
{
    this->minArea = MinArea;
    this->maxArea = MaxArea;
}

bool DetectBlobSegmenter::segment(Image *image)
{
    SimpleBlobDetector::Params params;
    params.filterByArea = true;
    params.minArea = this->minArea;
    params.maxArea = this->maxArea;
    SimpleBlobDetector* blobDetector = new SimpleBlobDetector(params);
    std::vector<KeyPoint> keypoints;
    blobDetector->detect(image->getFrame(), keypoints);

    unsigned i = 0;
    unsigned j = 0;
    for(i = 0; i < keypoints.size(); i++)
    {
        Blob* blob = new Blob();
        blob->setImage(image->getFrame());
        blob->setPosX(keypoints[i].pt.x);
        blob->setPosY(keypoints[i].pt.y);
        blob->setSize(keypoints[i].size);
        for(j = 0; j < image->getOldBlobs().size(); j ++)
        {
            if(blob->getPosX() < image->getOldBlob(j)->getPosX() + 1 &&
               blob->getPosX() > image->getOldBlob(j)->getPosX() - 1 &&
               blob->getPosY() < image->getOldBlob(j)->getPosY() + 1 &&
               blob->getPosY() > image->getOldBlob(j)->getPosY() - 1)
            {
                delete blob;
                blob = image->getOldBlob(j);
                break;
            }
        }
        image->addBlob(blob);
    }

    return true;
}
