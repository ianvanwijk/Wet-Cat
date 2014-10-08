#include "DangerZone.h"

DangerZone::DangerZone()
{

}

DangerZone::DangerZone(QPoint* P1, QPoint* P2, QPoint* P3, QPoint* P4)
{
    this->P1 = P1;
    this->P2 = P2;
    this->P3 = P3;
    this->P4 = P4;
}

DangerZone::~DangerZone()
{
    delete P1;
    delete P2;
    delete P3;
    delete P4;
}

QPoint* DangerZone::getP1()
{
    return P1;
}

QPoint* DangerZone::getP2()
{
    return P2;
}

QPoint* DangerZone::getP3()
{
    return P3;
}

QPoint* DangerZone::getP4()
{
    return P4;
}

bool DangerZone::setP1(QPoint* P1)
{
    this->P1 = P1;
    return true;
}

bool DangerZone::setP2(QPoint* P2)
{
    this->P2 = P2;
    return true;
}

bool DangerZone::setP3(QPoint* P3)
{
    this->P3 = P3;
    return true;
}

bool DangerZone::setP4(QPoint* P4)
{
    this->P4 = P4;
    return true;
}

bool DangerZone::isIn(QPoint* point)
{
    //check if point is in the dangerzone
    return true;
}
