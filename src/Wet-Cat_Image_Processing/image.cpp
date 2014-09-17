#include "Image.h"

Image::Image()
{
    this->blobs = new Vector<Blob>();
}

Mat Image::getFrame()
{
    return this->frame;
}

Mat Image::getImage()
{
    return this->image;
}

bool Image::setFrame(Mat Frame)
{
    this->frame = Frame;
    return true;
}

bool Image::setImage(Mat Image)
{
    this->image = Image;
    return true;
}

Vector<Blob>* Image::getBlobs()
{
    return this->blobs;
}

bool Image::setBlobs(Vector<Blob>* Blobs)
{
    this->blobs = Blobs;
    return true;
}

bool Image::addBlob(Blob Blob)
{
    this->blobs->push_back(Blob);
    return true;
}

bool Image::clearBlobs()
{
    delete this->blobs;
    this->blobs = new Vector<Blob>();
    return true;
}
