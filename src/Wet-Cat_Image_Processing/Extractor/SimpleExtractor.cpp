#include "SimpleExtractor.h"

SimpleExtractor::SimpleExtractor()
{
    this->configured = false;
}

SimpleExtractor::~SimpleExtractor()
{
    while(this->extractors.size() != 0)
    {
        this->extractors.pop_back();
    }
}

bool SimpleExtractor::execute(Image* image)
{
    unsigned i = 0;
    for(i = 0; i < this->extractors.size(); i++)
    {
        extractors[i]->extract(image);
    }
    return true;
}

bool SimpleExtractor::configure()
{
    this->extractors.push_back(new DummyExtractor());
    this->configured = true;
    return true;
}

bool SimpleExtractor::configure(QString configurationFile)
{
    QFile file(configurationFile);
    if(!file.open(QIODevice::ReadWrite))
    {
        return configure();
    }
    QString string = file.readLine();
    if(string.split("=").back() == "true")
    {
        this->extractors.push_back(new DummyExtractor());
    }
    this->configured = true;
    return true;
}

bool SimpleExtractor::isConfigured()
{
    return this->configured;
}
