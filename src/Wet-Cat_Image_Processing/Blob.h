#ifndef BLOB_H
#define BLOB_H

#include <opencv2/opencv.hpp>

using namespace cv;

class Blob
{
public:
    Blob();
    bool setPosX(int PosX);
    int getPosX();
    bool setPosY(int PosY);
    int getPosY();
    bool setNrOfHoles(int NrOfHoles);
    int getNrOfHoles();
    bool setImage(Mat Image);
    Mat getImage();
private:
    int posX;
    int posY;
    int nrOfHoles;
    Mat image;
};

#endif // BLOB_H
