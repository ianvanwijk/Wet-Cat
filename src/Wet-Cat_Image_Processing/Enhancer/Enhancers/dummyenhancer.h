#ifndef DUMMYENHANCER_H
#define DUMMYENHANCER_H

#include "../ienhancer.h"

class dummyEnhancer : IEnhancer
{
public:
    dummyEnhancer();
    virtual bool enhance(Image *image);
};

#endif // DUMMYENHANCER_H
