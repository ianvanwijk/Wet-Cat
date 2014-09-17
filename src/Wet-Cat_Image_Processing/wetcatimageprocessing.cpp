#include "wetcatimageprocessing.h"
#include "ui_wetcatimageprocessing.h"

WetCatImageProcessing::WetCatImageProcessing(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WetCatImageProcessing)
{
    ui->setupUi(this);
    this->acquirer = new SimpleAcquirer();
    this->enhancer = new SimpleEnhancer();
    this->segmenter = new SimpleSegmenter();
    this->extractor = new SimpleExtractor();
    this->classifier = new SimpleClassifier();
    this->communicator = new SimpleCommunicator();
    this->commander = new SimpleCommander(this->communicator);
    this->image = new Image();
}

WetCatImageProcessing::~WetCatImageProcessing()
{
    destroyAllWindows();
    delete ui;
}

void WetCatImageProcessing::on_BT_Acquire_clicked()
{
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
    if(!this->enhancer->isConfigured())
    {
        if(!this->enhancer->configure())
        {
            info.append(QString("error configuring enhancer!"));
            ui->statusBar->showMessage(info);
        }
    }
    if(!this->segmenter->isConfigured())
    {
        if(!this->segmenter->configure())
        {
            info.append(QString("error configuring segmenter!"));
            ui->statusBar->showMessage(info);
        }
    }
    if(!this->extractor->isConfigured())
    {
        if(!this->extractor->configure())
        {
            info.append(QString("error configuring extractor!"));
            ui->statusBar->showMessage(info);
        }
    }
    if(!this->classifier->isConfigured())
    {
        if(!this->classifier->configure())
        {
            info.append(QString("error configuring classifier!"));
            ui->statusBar->showMessage(info);
        }
    }
    if(!this->commander->isConfigured())
    {
        if(!this->commander->configure())
        {
            info.append(QString("error configuring commander!"));
            ui->statusBar->showMessage(info);
        }
    }
    if(!this->communicator->isConfigured())
    {
        if(!this->communicator->configure())
        {
            info.append(QString("error configuring communicator!"));
            ui->statusBar->showMessage(info);
        }
    }
}

void WetCatImageProcessing::on_BT_Show_clicked()
{
    this->image = new Image();
    if(this->acquirer->isConfigured() && this->enhancer->isConfigured() && this->segmenter->isConfigured() && this->extractor->isConfigured() && this->classifier->isConfigured() && this->commander->isConfigured() && this->communicator->isConfigured())
    {
        if(!this->acquirer->execute(this->image))
        {
            info.append(QString("error acquirering from acquirer!"));
            ui->statusBar->showMessage(info);
        }
        if(!this->enhancer->execute(this->image))
        {
            info.append(QString("error enhancing image!"));
            ui->statusBar->showMessage(info);
        }
        if(!this->segmenter->execute(this->image))
        {
            info.append(QString("error segmenting image!"));
            ui->statusBar->showMessage(info);
        }
        if(!this->extractor->execute(this->image))
        {
            info.append(QString("error extracting image!"));
            ui->statusBar->showMessage(info);
        }
        if(!this->classifier->execute(this->image))
        {
            info.append(QString("error classifying image!"));
            ui->statusBar->showMessage(info);
        }
        if(!this->commander->execute(this->image))
        {
            info.append(QString("error commanding image!"));
            ui->statusBar->showMessage(info);
        }
        if(!this->communicator->execute(this->image))
        {
            info.append(QString("error communicating image!"));
            ui->statusBar->showMessage(info);
        }
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
