#include "DetectBlobSegmenter.h"

DetectBlobSegmenter::DetectBlobSegmenter()
{
}

bool DetectBlobSegmenter::segment(Image *image)
{
    SimpleBlobDetector::Params params;
    params.minArea = 4000;
    params.maxArea = 1000000;
    SimpleBlobDetector* blobDetector = new SimpleBlobDetector(params);
    std::vector<KeyPoint> keypoints;
    blobDetector->detect(image->getFrame(), keypoints);
    Mat keypointImage;
    Scalar color(255, 0, 0);
    drawKeypoints(image->getFrame(), keypoints, keypointImage, color);

    int i = 0;
    for(i = 0; i < keypoints.size(); i++)
    {
        Point p1;
        p1.x = keypoints[i].pt.x - keypoints[i].size;
        p1.y = keypoints[i].pt.y - keypoints[i].size;
        Point p2;
        p2.x = keypoints[i].pt.x + keypoints[i].size;
        p2.y = keypoints[i].pt.y + keypoints[i].size;
        rectangle(keypointImage, p1, p2, color);
        std::cout << "Blob: " << i << " - " << std::endl;
        std::cout << keypoints[i].size << std::endl;
        std::cout << keypoints[i].pt.x << std::endl;
        std::cout << keypoints[i].pt.y << std::endl;
    }
    image->setFrame(keypointImage);
    return true;
}
