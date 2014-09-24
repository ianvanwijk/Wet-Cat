#include "Blob.h"

Blob::Blob()
{
}

bool Blob::setPosX(float PosX)
{
    this->posX = PosX;
    return true;
}

float Blob::getPosX()
{
    return this->posX;
}

bool Blob::setPosY(float PosY)
{
    this->posY = PosY;
    return true;
}

float Blob::getPosY()
{
    return this->posY;
}

bool Blob::setSize(float Size)
{
    this->size = Size;
    return true;
}

float Blob::getSize()
{
    return this->size;
}

bool Blob::setNrOfHoles(int NrOfHoles)
{
    this->nrOfHoles = NrOfHoles;
    return true;
}

int Blob::getNrOfHoles()
{
    return this->nrOfHoles;
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
