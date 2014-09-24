#include "Image.h"

Image::Image()
{
}

Image::~Image()
{
    this->clearBlobs();
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

Vector<Blob*> Image::getBlobs()
{
    return this->blobs;
}

bool Image::setBlobs(Vector<Blob*> Blobs)
{
    this->blobs = Blobs;
    return true;
}

bool Image::addBlob(Blob* Blob)
{
    this->blobs.push_back(Blob);
    return true;
}

Blob* Image::getBlob(int i)
{
    Blob* blob = this->blobs[i];
    return blob;
}

bool Image::clearBlobs()
{
    return true;
}
