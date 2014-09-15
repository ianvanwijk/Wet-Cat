#include "wetcatimageprocessing.h"
#include "ui_wetcatimageprocessing.h"

WetCatImageProcessing::WetCatImageProcessing(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WetCatImageProcessing)
{
    ui->setupUi(this);
}

WetCatImageProcessing::~WetCatImageProcessing()
{
    delete ui;
}
