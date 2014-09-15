#ifndef WETCATIMAGEPROCESSING_H
#define WETCATIMAGEPROCESSING_H

#include <QMainWindow>

namespace Ui {
class WetCatImageProcessing;
}

class WetCatImageProcessing : public QMainWindow
{
    Q_OBJECT

public:
    explicit WetCatImageProcessing(QWidget *parent = 0);
    ~WetCatImageProcessing();

private:
    Ui::WetCatImageProcessing *ui;
};

#endif // WETCATIMAGEPROCESSING_H
