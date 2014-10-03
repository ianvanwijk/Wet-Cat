#ifndef SIMPLECOMMUNICATOR_H
#define SIMPLECOMMUNICATOR_H

#include "../IExecutable.h"
#include <QtSerialPort/QSerialPort>
#include <pthread.h>
#include <QStringList>
#include <QString>
#include <QFile>

class SimpleCommunicator : IExecutable
{
public:
    SimpleCommunicator();
    virtual ~SimpleCommunicator();
    virtual bool execute(Image *image);
    virtual bool configure();
    virtual bool configure(QString configurationFile);
    virtual bool isConfigured();
    bool isExecuting();
    bool stopExecuting();
    bool draw(int status, Mat* image, Blob* blob);
    QSerialPort* serialPort;
    bool stopThread;
private:
    pthread_t thread;
    bool executing;
    bool configured;
};

#endif // SIMPLECOMMUNICATOR_H
