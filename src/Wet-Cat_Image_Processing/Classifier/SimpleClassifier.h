#ifndef SIMPLECLASSIFIER_H
#define SIMPLECLASSIFIER_H

#include "../IExecutable.h"

using namespace cv;

class SimpleClassifier : IExecutable
{
public:
    SimpleClassifier();
    virtual ~SimpleClassifier();
    virtual bool execute(Image* image);
    virtual bool configure();
    virtual bool configure(QString configurationFile);
    virtual bool isConfigured();
private:
    bool configured;
};

#endif // SIMPLECLASSIFIER_H
