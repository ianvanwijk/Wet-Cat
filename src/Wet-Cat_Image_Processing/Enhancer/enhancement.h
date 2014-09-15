#ifndef ENHANCEMENT_H
#define ENHANCEMENT_H

#include "ienhancer.h"

class enhancement
{
public:
    enhancement();
    bool setEnhancer(IEnhancer Enhancer);
    IEnhancer getEnhancer();
    bool setParameters(Vector<int> Parameters);
    Vector<int> getParameters();
private:
    IEnhancer enhancer;
    Vector<int> parameters;
};

#endif // ENHANCEMENT_H
