#ifndef IEXECUTABLE_H
#define IEXECUTABLE_H

#include "image.h"

class IExecutable
{
public:
    virtual bool execute(Image* image) = 0;
    virtual bool configure() = 0;
    virtual bool isConfigured() = 0;
};

#endif // IEXECUTABLE_H
