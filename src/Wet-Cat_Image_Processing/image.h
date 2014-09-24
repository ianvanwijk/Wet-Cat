#ifndef IMAGE_H
#define IMAGE_H

#include <opencv2/opencv.hpp>
#include "Blob.h"

using namespace cv;

class Image
{
public:
    Image();
    ~Image();
    Mat getFrame();
    Mat getImage();
    bool setFrame(Mat Frame);
    bool setImage(Mat Image);
    Vector<Blob*> getBlobs();
    bool setBlobs(Vector<Blob*> Blobs);
    bool addBlob(Blob* Blob);
    Blob* getBlob(int i);
    bool clearBlobs();

private:
    Mat frame;
    Mat image;
    Vector<Blob*> blobs;
};

#endif // IMAGE_H
