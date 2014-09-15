#ifndef SIMPLEACQUIRER_H
#define SIMPLEACQUIRER_H

#include "../iexecutable.h"

class simpleAcquirer : IExecutable
{
public:
    simpleAcquirer();
    ~simpleAcquirer();
    virtual bool execute(Image* image);
    virtual bool configure();
    virtual bool isConfigured();
private:
    VideoCapture* cam;
    bool configured;
};

#endif // SIMPLEACQUIRER_H
