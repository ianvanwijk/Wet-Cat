#include "SimpleClassifier.h"
#include "Defines.h"
#include "../CVBlob/include/cvblob.h"

SimpleClassifier::SimpleClassifier()
{
    this->configured = false;
}

SimpleClassifier::~SimpleClassifier()
{

}

bool SimpleClassifier::execute(Image *image)
{
    unsigned i = 0;
    for(i = 0; i < image->getBlobs().size(); i++)
    {
        if(image->getBlob(i)->getStatus() == FIRST_SEEN)
        {
            image->getBlob(i)->setStatus(SEEN);
        }
        if(image->getBlob(i)->getStatus() < FIRST_SEEN)
        {
            image->getBlob(i)->setStatus(FIRST_SEEN);
        }
    }
    if(image->getBlobs().size() > 0)
    {
        Blob* blob = image->getBlob(0);
        int posX = blob->getPosX();
        int posY = blob->getPosY();
        int size = blob->getSize();
        Rect ROI(posX - size, posY - size, size * 2, size * 2);
        Mat frameCrop(image->getFrame(), ROI);
        Mat frameRegion;
        frameCrop.copyTo(frameRegion);
        Mat imageCrop(image->getImage(), ROI);
        Mat imageRegion;
        imageCrop.copyTo(imageRegion);
        vector< vector< Point > > contours;
        vector< Vec4i > hierarchy;
        findContours(frameRegion, contours, hierarchy, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, Point(0, 0));
        for( int i = 0; i< contours.size(); i++ )
             {
                Scalar color;
                if(hierarchy[i][3] > 0)
                {
                    color = Scalar( 255, 0, 0);
                }
                else if(hierarchy[i][2] > 0)
                {
                    color = Scalar( 0, 0, 255);
                }
                else
                {
                    color = Scalar(0, 255, 0);
                }
                std::cout << i << ": " << hierarchy[i][3] << std::endl;
                drawContours( imageRegion, contours, i, color, 2, 8, hierarchy, 0, Point() );
             }
        imshow("Debug", imageRegion);
    }
    return true;
}

bool SimpleClassifier::load(Image *image)
{
    this->contours.push_back(image->getFrame());
    imshow("Debug", image->getFrame());
    return true;
}

bool SimpleClassifier::configure()
{
    this->configured = true;
    return true;
}

bool SimpleClassifier::isConfigured()
{
    return this->configured;
}
