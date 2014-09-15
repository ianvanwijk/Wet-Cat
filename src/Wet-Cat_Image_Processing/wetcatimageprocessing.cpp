#include "wetcatimageprocessing.h"
#include "ui_wetcatimageprocessing.h"

WetCatImageProcessing::WetCatImageProcessing(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WetCatImageProcessing)
{
    ui->setupUi(this);
    this->acquirer = new simpleAcquirer();
    this->image = new Image();
}

WetCatImageProcessing::~WetCatImageProcessing()
{
    destroyAllWindows();
    delete ui;
}

void WetCatImageProcessing::on_BT_Acquire_clicked()
{
    acquire();
}

void WetCatImageProcessing::acquire()
{
    this->image = new Image();
    if(this->acquirer->isConfigured())
    {
        if(!this->acquirer->execute(this->image))
        {
            info.append(QString("error acquirering from acquirer!"));
            ui->statusBar->showMessage(info);
        }
    }
    else
    {
        info.append(QString("not configured"));
        ui->statusBar->showMessage(info);
    }
}

void WetCatImageProcessing::on_BT_Configure_clicked()
{
    if(!this->acquirer->isConfigured())
    {
        if(!this->acquirer->configure())
        {
            info.append(QString("error configuring acquirer!"));
            ui->statusBar->showMessage(info);
        }
    }
    else
    {
        info.append(QString("already configured"));
        ui->statusBar->showMessage(info);
    }
}

void WetCatImageProcessing::on_BT_Show_clicked()
{
    if(this->acquirer->isConfigured())
    {
        acquire();
        destroyAllWindows();
        namedWindow("Snapshot",1);
        imshow("Snapshot", this->image->getFrame());
    }
    else
    {
        info.append(QString("not configured"));
        ui->statusBar->showMessage(info);
    }
}
