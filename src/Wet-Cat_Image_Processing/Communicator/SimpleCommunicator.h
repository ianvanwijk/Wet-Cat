#ifndef SIMPLECOMMUNICATOR_H
#define SIMPLECOMMUNICATOR_H

#include "../IExecutable.h"
#include <QtSerialPort/QSerialPort>
#include <pthread.h>

class SimpleCommunicator : IExecutable
{
public:
    SimpleCommunicator();
    virtual ~SimpleCommunicator();
    bool execute(Image *image);
    bool configure();
    bool isConfigured();
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
