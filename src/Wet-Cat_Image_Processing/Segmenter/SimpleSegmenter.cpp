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
    this->segmenters.push_back(new DetectBlobSegmenter(START_MIN_AREA, START_MAX_AREA));
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
        int min, max;
        string = file.readLine();
        min = string.split("=").back().toInt();
        string = file.readLine();
        max = string.split("=").back().toInt();
        this->segmenters.push_back(new DetectBlobSegmenter(min, max));
    }
    this->configured = true;
    return true;
}

bool SimpleSegmenter::isConfigured()
{
    return this->configured;
}

bool SimpleSegmenter::setConfiguration(int minArea, int maxArea)
{
    while(this->segmenters.size() != 0)
    {
        this->segmenters.pop_back();
    }
    this->segmenters.push_back(new DetectBlobSegmenter(minArea, maxArea));
    return true;
}
