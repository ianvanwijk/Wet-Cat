#include "SimpleAcquirer.h"
#include "Defines.h"

SimpleAcquirer::SimpleAcquirer()
{
    this->configured = false;
}

SimpleAcquirer::~SimpleAcquirer()
{
    cam->release();
    delete cam;
}

bool SimpleAcquirer::execute(Image* image)
{
    if(cam->isOpened())
    {
        Mat frame;
        image->setFrame(frame);
        image->setImage(frame);
        cam->read(frame);
        image->setFrame(frame);
        image->setImage(frame);
        return true;
    }
    return false;
}

bool SimpleAcquirer::configure()
{
    cam = new VideoCapture(0);
    cam = new VideoCapture(CAMERA);
    this->configured = true;
    return true;
}

bool SimpleAcquirer::isConfigured()
{
    return this->configured;
}
