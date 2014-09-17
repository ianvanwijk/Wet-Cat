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

namespace Ui {
class WetCatImageProcessing;
}

class WetCatImageProcessing : public QMainWindow
{
    Q_OBJECT

public:
    explicit WetCatImageProcessing(QWidget *parent = 0);
    ~WetCatImageProcessing();

private slots:
    void on_BT_Acquire_clicked();

    void on_BT_Configure_clicked();

    void on_BT_Show_clicked();

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
};

#endif // WETCATIMAGEPROCESSING_H
