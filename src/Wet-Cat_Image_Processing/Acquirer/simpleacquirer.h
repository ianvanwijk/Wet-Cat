#ifndef SIMPLEACQUIRER_H
#define SIMPLEACQUIRER_H

#include "../IExecutable.h"
#include <QStringList>
#include <QString>
#include <QFile>

class SimpleAcquirer : IExecutable
{
public:
    SimpleAcquirer();
    virtual ~SimpleAcquirer();
    virtual bool execute(Image* image);
    virtual bool configure();
    virtual bool configure(QString configurationFile);
    virtual bool isConfigured();
private:
    VideoCapture* cam;
    bool configured;
};

#endif // SIMPLEACQUIRER_H
