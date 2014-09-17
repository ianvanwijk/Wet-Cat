#include "Blob.h"

Blob::Blob()
{
}

bool Blob::setPosX(int PosX)
{
    this->posX = PosX;
    return true;
}

int Blob::getPosX()
{
    return this->posX;
}

bool Blob::setPosY(int PosY)
{
    this->posY = PosY;
    return true;
}

int Blob::getPosY()
{
    return this->posY;
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
