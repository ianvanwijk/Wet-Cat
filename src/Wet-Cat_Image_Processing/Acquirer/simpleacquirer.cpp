#include "simpleacquirer.h"

simpleAcquirer::simpleAcquirer()
{
    this->configured = false;
}

simpleAcquirer::~simpleAcquirer()
{
    cam->release();
}

bool simpleAcquirer::execute(Image* image)
{
    if(cam->isOpened())
    {
        Mat frame;
        cam->read(frame);
        image->setFrame(frame);
        return true;
    }
    return false;
}

bool simpleAcquirer::configure()
{
    cam = new VideoCapture(0);
    this->configured = true;
    return true;
}

bool simpleAcquirer::isConfigured()
{
    return this->configured;
}
