#ifndef BLOB_H
#define BLOB_H

#include <opencv2/opencv.hpp>
#include <aruco/aruco.h>

using namespace cv;
using namespace aruco;

class Blob
{
public:
    Blob();
    ~Blob();
    float getPosX();
    float getPosY();
    float getSize();
    bool setNrOfHoles(int NrOfHoles);
    int getNrOfHoles();
    bool setImage(Mat Image);
    Mat getImage();
    int getStatus();
    bool setStatus(int Status);
    bool addStatus(int i);
    int getType();
    bool setType(int Type);
    Marker getMarker();
    bool setmarker(Marker Marker);
private:
    int nrOfHoles;
    Mat image;
    int status;
    int type;
    Marker marker;
};

#endif // BLOB_H
