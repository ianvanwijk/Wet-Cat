#ifndef IEXTRACTOR_H
#define IEXTRACTOR_H

#include "../Image.h"

class IExtractor
{
public:
    virtual bool extract(Image* image) = 0;
};

#endif // IEXTRACTOR_H
