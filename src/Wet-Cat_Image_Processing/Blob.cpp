#include "Blob.h"

Blob::Blob()
{
    this->status = 0;
}

Blob::~Blob()
{

}

float Blob::getPosX()
{
    return this->marker.getCenter().x;
}

float Blob::getPosY()
{
    return this->marker.getCenter().y;
}

float Blob::getSize()
{
    return this->marker.size();
}

bool Blob::setNrOfHoles(int NrOfHoles)
{
    this->nrOfHoles = NrOfHoles;
    return true;
}

int Blob::getNrOfHoles()
{
    return this->marker.id;
}

bool Blob::setImage(Mat Image)
{
    this->image = Image;
    return true;
}

Mat Blob::getImage()
{
    return this->image;
}

int Blob::getStatus()
{
    return this->status;
}

bool Blob::setStatus(int Status)
{
    this->status = Status;
    return true;
}

bool Blob::addStatus(int i)
{
    this->status += i;
    return true;
}

int Blob::getType()
{
    return this->type;
}

bool Blob::setType(int Type)
{
    this->type = Type;
    return true;
}

Marker Blob::getMarker()
{
    return this->marker;
}

bool Blob::setmarker(Marker Marker)
{
    this->marker = Marker;
    return true;
}
