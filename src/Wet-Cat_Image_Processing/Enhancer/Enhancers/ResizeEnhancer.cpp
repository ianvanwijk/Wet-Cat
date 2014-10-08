#include "ResizeEnhancer.h"

ResizeEnhancer::ResizeEnhancer(int Height, int Width)
{
    this->resizeSize = new Size(Height, Width);
}

bool ResizeEnhancer::enhance(Image *image)
{
    try
    {
        Mat resizedImage;
        resize(image->getImage(), resizedImage, *resizeSize);
        image->setImage(resizedImage);
        return true;
    }
    catch(Exception e)
    {
        return false;
    }
}
