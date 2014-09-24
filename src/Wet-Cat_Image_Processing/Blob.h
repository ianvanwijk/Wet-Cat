#ifndef BLOB_H
#define BLOB_H

#include <opencv2/opencv.hpp>

using namespace cv;

class Blob
{
public:
    Blob();
    ~Blob();
    bool setPosX(float PosX);
    float getPosX();
    bool setPosY(float PosY);
    float getPosY();
    bool setSize(float Size);
    float getSize();
    bool setNrOfHoles(int NrOfHoles);
    int getNrOfHoles();
    bool setImage(Mat Image);
    Mat getImage();
private:
    float posX;
    float posY;
    float size;
    int nrOfHoles;
    Mat image;
};

#endif // BLOB_H
