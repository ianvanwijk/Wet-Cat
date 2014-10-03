#include "DummyExtractor.h"

DummyExtractor::DummyExtractor()
{
}

bool DummyExtractor::extract(Image *image)
{
    unsigned i;
    for(i = 0; i < image->getBlobs().size(); i++)
    {
        Mat RegionOfInterest = getROI(image->getFrame(), image->getBlob(i));
        vector< vector< Point > > contours;
        vector< Vec4i > hierarchy;
        findContours(RegionOfInterest, contours, hierarchy, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, Point(0, 0));
        int amountOfHoles = 0;
        unsigned c;
        for( c = 0; c < contours.size(); c++ )
        {
            if(hierarchy[c][3] > 0 && hierarchy[c][2] < 0)
            {
                amountOfHoles++;
            }
        }
        image->getBlob(i)->setNrOfHoles(amountOfHoles);
    }
    return true;
}

Mat DummyExtractor::getROI(Mat frame, Blob *blob)
{
    int posX = blob->getPosX();
    int posY = blob->getPosY();
    int size = blob->getSize();
    Rect regionOfInterest(posX - size, posY - size, size * 2, size * 2);
    Mat frameCrop(frame, regionOfInterest);
    Mat frameRegion;
    frameCrop.copyTo(frameRegion);
    return frameRegion;
}
