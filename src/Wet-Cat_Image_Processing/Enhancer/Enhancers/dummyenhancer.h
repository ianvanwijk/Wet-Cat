#ifndef DUMMYENHANCER_H
#define DUMMYENHANCER_H

#include "../IEnhancer.h"

using namespace cv;

class DummyEnhancer : public IEnhancer
{
public:
    DummyEnhancer();
    virtual bool enhance(Image *image);
private:

};

#endif // DUMMYENHANCER_H
