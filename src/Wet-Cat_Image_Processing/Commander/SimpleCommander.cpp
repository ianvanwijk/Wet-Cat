#include "SimpleCommander.h"
#include "Defines.h"

SimpleCommander::SimpleCommander(SimpleCommunicator* simpleCommunicator)
{
    this->simpleCommunicator = simpleCommunicator;
    this->configured = false;
    this->adding = false;
    this->removing = false;
}

SimpleCommander::~SimpleCommander()
{

}

bool SimpleCommander::execute(Image *image)
{
    unsigned i;
    unsigned j;
    int countActive = 0;
    for(i = 0; i < image->getBlobs().size(); i++)
    {
        if(image->getBlob(i)->getStatus() > SEEN && image->getBlob(i)->getStatus() < ACTION_DONE &&
           image->getBlob(i)->getType() >= CAT1 && image->getBlob(i)->getType() <= CAT3)
        {
            int countIn = 0;
            for(j = 0; j < dangerZones.size(); j++)
            {
                if(dangerZones[j]->isIn(new QPoint(image->getBlob(i)->getPosX(), image->getBlob(i)->getPosY())))
                {
                    countIn++;
                }
            }
            if(countIn == 0 && dangerZones.size() != 0)
            {
                image->getBlob(i)->setStatus(SEEN);
            }
            else
            {
                countActive++;
            }
        }
    }
    if(countActive == 0)
    {
        for(i = 0; i < image->getBlobs().size(); i++)
        {
            if(image->getBlob(i)->getStatus() == SEEN &&
               image->getBlob(i)->getType() >= CAT1 && image->getBlob(i)->getType() <= CAT3)
            {
                if(dangerZones.size() != 0)
                {
                    for(j = 0; j < dangerZones.size(); j++)
                    {
                        if(dangerZones[j]->isIn(new QPoint(image->getBlob(i)->getPosX(), image->getBlob(i)->getPosY())))
                        {
                            image->getBlob(i)->setStatus(ACTION_READY);
                            i = image->getBlobs().size();
                        }
                    }
                }
                else
                {
                    image->getBlob(i)->setStatus(ACTION_READY);
                    i = image->getBlobs().size();
                }
            }
        }
    }
    if(adding)
    {
        std::cout << "adding DangerZone" << std::endl;
        int countP1 = 0;
        int countP2 = 0;
        int countP3 = 0;
        int countP4 = 0;
        QPoint* P1;
        QPoint* P2;
        QPoint* P3;
        QPoint* P4;
        for(i = 0; i < image->getBlobs().size(); i++)
        {
            if(image->getBlob(i)->getType() == DANGER1)
            {
                countP1++;
                if(countP1 == 1)
                    P1 = new QPoint(image->getBlob(i)->getPosX(), image->getBlob(i)->getPosY());
            }
            if(image->getBlob(i)->getType() == DANGER2)
            {
                countP2++;
                if(countP2 == 1)
                    P2 = new QPoint(image->getBlob(i)->getPosX(), image->getBlob(i)->getPosY());
            }
            if(image->getBlob(i)->getType() == DANGER3)
            {
                countP3++;
                if(countP3 == 1)
                    P3 = new QPoint(image->getBlob(i)->getPosX(), image->getBlob(i)->getPosY());
            }
            if(image->getBlob(i)->getType() == DANGER4)
            {
                countP4++;
                if(countP4 == 1)
                    P4 = new QPoint(image->getBlob(i)->getPosX(), image->getBlob(i)->getPosY());
            }
        }
        if(countP1 == 1 && countP2 == 1 && countP3 == 1 && countP4 == 1)
        {
            dangerZones.push_back(new DangerZone(P1, P2, P3, P4));
        }
        else
        {
            delete P1;
            delete P2;
            delete P3;
            delete P4;
        }
        adding = false;
    }
    if(removing)
    {
        int amountRemove = 0;
        QPoint* RemovePoint;
        unsigned i;
        for(i = 0; i < image->getBlobs().size(); i++)
        {
            if(image->getBlob(i)->getType() == REMOVE)
            {
                amountRemove++;
                if(amountRemove == 1)
                    RemovePoint = new QPoint(image->getBlob(i)->getPosX(), image->getBlob(i)->getPosY());
            }
        }
        if(amountRemove == 1)
        {
            vector<DangerZone*> zones;
            unsigned i;
            for(i = 0; i < dangerZones.size(); i++)
            {
                if(!dangerZones[i]->isIn(RemovePoint))
                {
                    zones.push_back(dangerZones[i]);
                }
                else
                {
                    delete dangerZones[i];
                }
            }
            dangerZones.clear();
            for(i = 0; i < zones.size(); i++)
            {
                dangerZones.push_back(zones[i]);
            }
        }
        else
        {
            delete RemovePoint;
        }
        removing = false;
    }
    drawDangerZones(image);
    return true;
}

bool SimpleCommander::configure()
{
    this->configured = true;
    return true;
}

bool SimpleCommander::configure(QString configurationFile)
{
    return configure();
}

bool SimpleCommander::isConfigured()
{
    return this->configured;
}

bool SimpleCommander::addDangerZone()
{
    this->adding = true;
    return true;
}

bool SimpleCommander::removeDangerZone()
{
    this->removing = true;
    return true;
}

bool SimpleCommander::drawDangerZones(Image *image)
{
    Mat frame = image->getImage();
    Scalar red(0, 0, 255); //red
    unsigned i;
    for(i = 0; i < dangerZones.size(); i++)
    {
        Point p1(dangerZones[i]->getP1()->x(), dangerZones[i]->getP1()->y());
        Point p2(dangerZones[i]->getP2()->x(), dangerZones[i]->getP2()->y());
        Point p3(dangerZones[i]->getP3()->x(), dangerZones[i]->getP3()->y());
        Point p4(dangerZones[i]->getP4()->x(), dangerZones[i]->getP4()->y());
        line(frame, p1, p2, red, 2);
        line(frame, p2, p3, red, 2);
        line(frame, p3, p4, red, 2);
        line(frame, p4, p1, red, 2);
    }
    image->setImage(frame);
    return true;
}
