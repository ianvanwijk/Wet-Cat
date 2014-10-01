#include "WetCatImageProcessing.h"
#include "ui_wetcatimageprocessing.h"
#include "Defines.h"

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
    this->timer = new QTimer(this);
    this->elapsedTimer = new QElapsedTimer();
    this->minArea = 6000;
    this->maxArea = 10000;
    connect(this->timer, SIGNAL(timeout()), this, SLOT(updateTimer()));
    namedWindow("Frame", WINDOW_OPENGL);
    namedWindow("Image", WINDOW_OPENGL);
    namedWindow("Debug", WINDOW_OPENGL);
}

bool WetCatImageProcessing::load()
{
    Image* image = new Image();
    image->setFrame(imread("C:/mask5.bmp"));
    image->setImage(imread("C:/mask5.bmp"));
    this->enhancer->execute(image);
    this->classifier->load(image);
    image->setFrame(imread("C:/mask3.bmp"));
    image->setImage(imread("C:/mask3.bmp"));
    this->enhancer->execute(image);
    return this->classifier->load(image);
}

WetCatImageProcessing::~WetCatImageProcessing()
{
    destroyAllWindows();
    delete this->acquirer;
    delete this->enhancer;
    delete this->segmenter;
    delete this->extractor;
    delete this->classifier;
    delete this->commander;
    delete this->communicator;
    delete this->image;
    delete this->timer;
    delete this->elapsedTimer;
    delete ui;
}

void WetCatImageProcessing::updateTimer()
{
    this->image->setOldBlobs(this->image->getBlobs());
    this->image->clearBlobs();
    uint secs = this->elapsedTimer->nsecsElapsed();
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
        imshow("Frame", this->image->getFrame());
        updateWindow("Frame");
        imshow("Image", this->image->getImage());
        updateWindow("Image");
    }
    else
    {
        info.append(QString("not configured"));
        ui->statusBar->showMessage(info);
    }
    secs = this->elapsedTimer->nsecsElapsed() - secs;
    std::cout << secs/1000000 << std::endl;
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
    load();
}

void WetCatImageProcessing::on_BT_Show_clicked()
{
    if(this->acquirer->isConfigured() && this->enhancer->isConfigured() && this->segmenter->isConfigured() && this->extractor->isConfigured() && this->classifier->isConfigured() && this->commander->isConfigured() && this->communicator->isConfigured())
    {
        this->timer->start(1000/FPS);
        this->elapsedTimer->start();
    }
}

void WetCatImageProcessing::on_VS_threshold_valueChanged(int value)
{
    this->enhancer->setConfiguration(value);
    this->ui->LB_threshold->setText(QString::number(value));
}

void WetCatImageProcessing::on_VS_minSize_valueChanged(int value)
{
    this->minArea = value;
    this->segmenter->setConfiguration(this->minArea, this->maxArea);
    this->ui->LB_minSize->setText(QString::number(value));
}

void WetCatImageProcessing::on_VS_maxSize_valueChanged(int value)
{
    this->maxArea = value;
    this->segmenter->setConfiguration(this->minArea, this->maxArea);
    this->ui->LB_maxSize->setText(QString::number(value));
}
