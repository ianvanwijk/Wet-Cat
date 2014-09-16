#ifndef ISEGMENTER_H
#define ISEGMENTER_H

#include "../Image.h"

class ISegmenter
{
public:
    virtual bool segment(Image* image) = 0;
};

#endif // ISEGMENTER_H
