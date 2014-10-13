#include "SimpleSegmenter.h"
#include "../Defines.h"

SimpleSegmenter::SimpleSegmenter()
{
    this->configured = false;
}

SimpleSegmenter::~SimpleSegmenter()
{
    while(this->segmenters.size() != 0)
    {
        this->segmenters.pop_back();
    }
}

bool SimpleSegmenter::execute(Image* image)
{
    unsigned i = 0;
    for(i = 0; i < this->segmenters.size(); i++)
    {
        segmenters[i]->segment(image);
    }
    return true;
}

bool SimpleSegmenter::configure()
{
    this->segmenters.push_back(new DetectBlobSegmenter());
    this->configured = true;
    return true;
}

bool SimpleSegmenter::configure(QString configurationFile)
{
    QFile file("Configuration/" + configurationFile);
    if(!file.open(QIODevice::ReadWrite))
    {
        std::cout << "failed configuring segmenter" << std::endl;
        return configure();
    }
    QString string = file.readLine();
    if(string.split("=").back().toInt() == 1)
    {
        this->segmenters.push_back(new ArucoSegmenter());
    }
    string = file.readLine();
    if(string.split("=").back().toInt() == 1)
    {
        this->segmenters.push_back(new DetectBlobSegmenter());
    }
    this->configured = true;
    return true;
}

bool SimpleSegmenter::isConfigured()
{
    return this->configured;
}
