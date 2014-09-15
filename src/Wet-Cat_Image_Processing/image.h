#ifndef IMAGE_H
#define IMAGE_H

#include <opencv2/opencv.hpp>

using namespace cv;

class Image
{
public:
    Image();
    Mat getFrame();
    bool setFrame(Mat Frame);
    Vector<Mat>* getBlobs();
    bool setBlobs(Vector<Mat>* Blobs);
    bool addBlob(Mat Blob);
    bool clearBlobs();

private:
    Mat frame;
    Vector<Mat>* blobs;
};

#endif // IMAGE_H
