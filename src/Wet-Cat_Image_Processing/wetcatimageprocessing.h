#ifndef WETCATIMAGEPROCESSING_H
#define WETCATIMAGEPROCESSING_H

#include <QMainWindow>
#include "Image.h"
#include "Acquirer/SimpleAcquirer.h"
#include "Enhancer/SimpleEnhancer.h"
#include "Segmenter/SimpleSegmenter.h"
#include "Extractor/SimpleExtractor.h"
#include "Classifier/SimpleClassifier.h"
#include "Communicator/SimpleCommunicator.h"
#include "Commander/SimpleCommander.h"
#include <QAbstractSlider>
#include <QTimer>
#include <QElapsedTimer>

namespace Ui {
class WetCatImageProcessing;
}

class WetCatImageProcessing : public QMainWindow
{
    Q_OBJECT

public:
    explicit WetCatImageProcessing(QWidget *parent = 0);
    virtual ~WetCatImageProcessing();

private slots:
    void on_BT_Acquire_clicked();

    void on_BT_Configure_clicked();

    void on_BT_Show_clicked();

    void updateTimer();

    void on_VS_threshold_valueChanged(int value);

    void on_VS_minSize_valueChanged(int value);

    void on_VS_maxSize_valueChanged(int value);

private:
    void acquire();
    Ui::WetCatImageProcessing *ui;
    QString info;
    Image* image;
    SimpleAcquirer* acquirer;
    SimpleEnhancer* enhancer;
    SimpleSegmenter* segmenter;
    SimpleExtractor* extractor;
    SimpleClassifier* classifier;
    SimpleCommunicator* communicator;
    SimpleCommander* commander;
    QTimer* timer;
    QElapsedTimer* elapsedTimer;

    int minArea;
    int maxArea;

    bool load();
};

#endif // WETCATIMAGEPROCESSING_H
