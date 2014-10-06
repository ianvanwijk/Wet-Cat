#ifndef SIMPLECOMMANDER_H
#define SIMPLECOMMANDER_H

#include "../IExecutable.h"
#include "../Communicator/SimpleCommunicator.h"
#include "../DangerZone.h"

class SimpleCommander : IExecutable
{
public:
    SimpleCommander(SimpleCommunicator* simpleCommunicator);
    virtual ~SimpleCommander();
    virtual bool execute(Image *image);
    virtual bool configure();
    virtual bool configure(QString configurationFile);
    virtual bool isConfigured();
    bool addDangerZone();
    bool removeDangerZone();
private:
    bool drawDangerZones(Image *image);
    bool configured;
    bool adding;
    bool removing;
    SimpleCommunicator* simpleCommunicator;
    vector<DangerZone*> dangerZones;
};

#endif // SIMPLECOMMANDER_H
