#ifndef IENHANCER_H
#define IENHANCER_H

#include "../Image.h"

class IEnhancer
{
public:
    virtual bool enhance(Image* image) = 0;
};

#endif // IENHANCER_H
