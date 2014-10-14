#ifndef DANGERZONE_H
#define DANGERZONE_H

#include <QPoint>
#include "../OpenCV/include/opencv2/opencv.hpp"

class DangerZone
{
public:
    DangerZone();
    DangerZone(QPoint* P1, QPoint* P2, QPoint* P3, QPoint* P4);
    ~DangerZone();
    QPoint* getP1();
    QPoint* getP2();
    QPoint* getP3();
    QPoint* getP4();
    bool setP1(QPoint* P1);
    bool setP2(QPoint* P2);
    bool setP3(QPoint* P3);
    bool setP4(QPoint* P4);
    bool isIn(QPoint* point);
    cv::Point getCVPoint(QPoint* point);
private:
    QPoint* P1;
    QPoint* P2;
    QPoint* P3;
    QPoint* P4;
};

#endif // DANGERZONE_H
