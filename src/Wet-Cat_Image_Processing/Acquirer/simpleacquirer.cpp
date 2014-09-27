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
<<<<<<< HEAD
    cam = new VideoCapture(0);
=======
    cam = new VideoCapture(CAMERA);
>>>>>>> cc7d91883875228352427ca06d58504b75098759
    this->configured = true;
    return true;
}

bool SimpleAcquirer::isConfigured()
{
    return this->configured;
}
