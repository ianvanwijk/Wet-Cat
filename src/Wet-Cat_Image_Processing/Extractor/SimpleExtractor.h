#ifndef SIMPLEEXTRACTOR_H
#define SIMPLEEXTRACTOR_H

#include "../IExecutable.h"
#include "Extractors/DummyExtractor.h"

class SimpleExtractor : IExecutable
{
public:
    SimpleExtractor();
    virtual bool execute(Image* image);
    virtual bool configure();
    virtual bool isConfigured();
private:
    bool configured;
    std::vector<IExtractor*> extractors;
};

#endif // SIMPLEFEATUREEXTRACTOR_H
