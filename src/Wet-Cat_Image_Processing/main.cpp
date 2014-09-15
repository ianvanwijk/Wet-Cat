#include "wetcatimageprocessing.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WetCatImageProcessing w;
    w.show();

    return a.exec();
}
