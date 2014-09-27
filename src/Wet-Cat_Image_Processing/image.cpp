#include "Image.h"

Image::Image()
{
}

Image::~Image()
{
    this->clearBlobs();
    this->clearOldBlobs();
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

Vector<Blob*> Image::getOldBlobs()
{
    return this->oldBlobs;
}

bool Image::clearBlobs()
{
    while(this->blobs.size() != 0)
    {
        this->blobs.pop_back();
    }
    return true;
}

bool Image::setOldBlobs(Vector<Blob *> Blobs)
{
    this->clearOldBlobs();
    this->oldBlobs = Blobs;
    return true;
}

Blob* Image::getOldBlob(int i)
{
    Blob* blob = this->blobs[i];
    return blob;
}

bool Image::clearOldBlobs()
{
    while(this->oldBlobs.size() != 0)
    {
        this->oldBlobs.pop_back();
    }
    return true;
}
