#include "DummyExtractor.h"


DummyExtractor::DummyExtractor()
{
}

bool DummyExtractor::extract(Image *image)
{
    try
    {
        unsigned i;
        for(i = 0; i < image->getBlobs().size(); i++)
        {
            Mat RegionOfInterest = getROI(image->getFrame(), image->getBlob(i));
            vector< vector< Point > > contours;
            vector< Vec4i > hierarchy;
            findContours(RegionOfInterest, contours, hierarchy, CV_RETR_CCOMP, CV_CHAIN_APPROX_SIMPLE, Point(0, 0));
            int amountOfHoles = 0;
            unsigned c;
            for( c = 0; c < contours.size(); c++ )
            {
                if((hierarchy[c][0] != -1 || hierarchy[c][1] != -1) && hierarchy[c][2] == -1 && hierarchy[c][3] == -1)
                {
                    amountOfHoles++;
                }
                if(amountOfHoles == 0)
                {
                    if((hierarchy[c][0] != -1 || hierarchy[c][1] != -1) && hierarchy[c][2] == -1)
                    {
                        amountOfHoles++;
                    }
                }
            }
            image->getBlob(i)->setNrOfHoles(amountOfHoles);
        }
        return true;
    }
    catch(Exception e)
    {
        std::cout << e.msg << std::endl;
        return false;
    }
}

Mat DummyExtractor::getROI(Mat frame, Blob *blob)
{
    try
    {
        Mat frameRegion;
        int posX = blob->getPosX();
        int posY = blob->getPosY();
        int size = blob->getSize() + 2;
        if(posX - size < 0 || posY - size < 0 || posX + size > frame.rows || posY + size > frame.cols)
        {
            size -= 2;
        }
        Rect regionOfInterest(posX - size, posY - size, size * 2, size * 2);
        Mat frameCrop(frame, regionOfInterest);
        frameCrop.copyTo(frameRegion);
        std::cout << "ROI!" << std::endl;
        return frameRegion;
    }
    catch(Exception e)
    {
        std::cout << e.msg << std::endl;
        return frame;
    }
}
