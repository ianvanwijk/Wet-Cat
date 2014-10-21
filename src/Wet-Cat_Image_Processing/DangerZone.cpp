#include "DangerZone.h"

DangerZone::DangerZone()
{
    this->P1 = new QPoint(10, 10);
    this->P2 = new QPoint(10, 20);
    this->P3 = new QPoint(20, 20);
    this->P4 = new QPoint(20, 10);
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
//    int polySides = 4;
//    int i, j=polySides-1 ;
//    int polyY[4] = {P1->y(), P2->y(), P3->y(), P4->y()};
//    int polyX[4] = {P1->x(), P2->x(), P3->x(), P4->x()};
//    bool oddNodes = false;


//    for (i=0; i<polySides; i++)
//    {
//        if (polyY[i] < point->y() && polyY[j] >= point->y() ||  polyY[j] < point->y() && polyY[i] >= point->y())
//        {
//            if (polyX[i] + (point->y() - polyY[i]) / (polyY[j] - polyY[i]) * (polyX[j] - polyX[i]) < point->x())
//            {
//                oddNodes=!oddNodes;
//            }
//        }
//        j=i;
//    }
//    return oddNodes;
    std::vector< cv::Point > contour;
    contour.push_back(getCVPoint(P1));
    contour.push_back(getCVPoint(P2));
    contour.push_back(getCVPoint(P3));
    contour.push_back(getCVPoint(P4));

    try
    {
        return cv::pointPolygonTest(contour, getCVPoint(point), false) >= 0;
    }
    catch(std::exception e)
    {
        std::cout << "Error: " << e.what() << std::endl;
        return false;
    }
}

cv::Point DangerZone::getCVPoint(QPoint *point)
{
    cv::Point Point;
    int x, y;
    x = point->rx();
    y = point->ry();
    Point.x = x;
    Point.y = y;
    return Point;
}
