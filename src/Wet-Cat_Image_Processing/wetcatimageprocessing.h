#ifndef WETCATIMAGEPROCESSING_H
#define WETCATIMAGEPROCESSING_H

#include <QMainWindow>
#include <QAbstractSlider>
#include <QElapsedTimer>
#include <QTimer>
#include <QKeyEvent>
#include "Image.h"
#include "Acquirer/SimpleAcquirer.h"
#include "Enhancer/SimpleEnhancer.h"
#include "Segmenter/SimpleSegmenter.h"
#include "Extractor/SimpleExtractor.h"
#include "Commander/SimpleCommander.h"
#include "Classifier/SimpleClassifier.h"
#include "Communicator/SimpleCommunicator.h"

namespace Ui {
class WetCatImageProcessing;
}

class WetCatImageProcessing : public QMainWindow
{
    Q_OBJECT

public:
    explicit WetCatImageProcessing(QWidget *parent = 0);
    virtual ~WetCatImageProcessing();

private:
    void keyPressEvent( QKeyEvent* e);
    int corner;

private slots:
    void updateTimer();

    void on_BT_Configure_clicked();
    void on_BT_Show_clicked();
    void on_BT_Add_Danger_clicked();
    void on_BT_Remove_Danger_clicked();

    void On_Image_Clicked();

    void on_BT_Up_clicked();

    void on_BT_Down_clicked();

    void on_BT_Left_clicked();

    void on_BT_Right_clicked();

private:
    QString info;
    Image* image;
    QTimer* timer;
    SimpleAcquirer* acquirer;
    SimpleEnhancer* enhancer;
    SimpleSegmenter* segmenter;
    SimpleExtractor* extractor;
    SimpleCommander* commander;
    SimpleClassifier* classifier;
    SimpleCommunicator* communicator;
    Ui::WetCatImageProcessing *ui;
    QElapsedTimer* elapsedTimer;
};

#endif // WETCATIMAGEPROCESSING_H
