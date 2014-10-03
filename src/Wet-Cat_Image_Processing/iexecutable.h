#ifndef IEXECUTABLE_H
#define IEXECUTABLE_H

#include "Image.h"
#include <QString>

class IExecutable
{
public:
    virtual bool execute(Image* image) = 0;
    virtual bool configure() = 0;
    virtual bool configure(QString configurationFile) = 0;
    virtual bool isConfigured() = 0;
};

#endif // IEXECUTABLE_H
