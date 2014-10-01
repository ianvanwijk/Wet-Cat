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
    virtual bool isConfigured();
    bool load(Image* image);
private:
    bool configured;
    vector<Mat> contours;
};

#endif // SIMPLECLASSIFIER_H
