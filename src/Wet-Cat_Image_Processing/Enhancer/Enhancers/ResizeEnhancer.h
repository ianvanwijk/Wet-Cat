#ifndef RESIZEENHANCER_H
#define RESIZEENHANCER_H

#include "../IEnhancer.h"

class ResizeEnhancer : public IEnhancer
{
public:
    ResizeEnhancer(int Height, int Width);
    bool enhance(Image *image);
private:
    Size* resizeSize;
};

#endif // RESIZEENHANCER_H
