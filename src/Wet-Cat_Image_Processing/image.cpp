#include "image.h"

Image::Image()
{
    this->blobs = new Vector<Mat>();
}

Mat Image::getFrame()
{
    return this->frame;
}

bool Image::setFrame(Mat Frame)
{
    this->frame = Frame;
    return true;
}

Vector<Mat>* Image::getBlobs()
{
    return this->blobs;
}

bool Image::setBlobs(Vector<Mat>* Blobs)
{
    this->blobs = Blobs;
    return true;
}

bool Image::addBlob(Mat Blob)
{
    this->blobs->push_back(Blob);
    return true;
}

bool Image::clearBlobs()
{
    this->blobs = new Vector<Mat>();
    return true;
}
