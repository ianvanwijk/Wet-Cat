#-------------------------------------------------
#
# Project created by QtCreator 2014-09-15T13:53:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Wet-Cat_Image_Processing
TEMPLATE = app


SOURCES += main.cpp\
    Enhancer/SimpleEnhancer.cpp \
    WetCatImageProcessing.cpp \
    Image.cpp \
    Acquirer/SimpleAcquirer.cpp \
    Enhancer/Enhancers/DummyEnhancer.cpp \
    Segmenter/Segmenters/DummySegmenter.cpp \
    Segmenter/SimpleSegmenter.cpp \
    Extractor/Extractors/DummyExtractor.cpp \
    Extractor/SimpleExtractor.cpp \
    Enhancer/Enhancers/ThresholdEnhancer.cpp \
    Enhancer/Enhancers/GrayScaleEnhancer.cpp \
    Classifier/SimpleClassifier.cpp \
    Commander/SimpleCommander.cpp \
    Communicator/SimpleCommunicator.cpp \
    Blob.cpp \
    Segmenter/Segmenters/DetectBlobSegmenter.cpp

HEADERS  += \
    Enhancer/IEnhancer.h \
    Enhancer/SimpleEnhancer.h \
    Enhancer/Enhancers/DummyEnhancer.h \
    IExecutable.h \
    Acquirer/SimpleAcquirer.h \
    Image.h \
    WetCatImageProcessing.h \
    Segmenter/Segmenters/DummySegmenter.h \
    Segmenter/ISegmenter.h \
    Segmenter/SimpleSegmenter.h \
    Extractor/Extractors/DummyExtractor.h \
    Extractor/IExtractor.h \
    Extractor/SimpleExtractor.h \
    Enhancer/Enhancers/ThresholdEnhancer.h \
    Enhancer/Enhancers/GrayScaleEnhancer.h \
    Classifier/SimpleClassifier.h \
    Commander/SimpleCommander.h \
    Communicator/SimpleCommunicator.h \
    Blob.h \
    Segmenter/Segmenters/DetectBlobSegmenter.h

FORMS    += wetcatimageprocessing.ui

INCLUDEPATH += "../OpenCV/include"

LIBS += "../OpenCV/bin/libopencv_core249.dll"       \
        "../OpenCV/bin/libopencv_highgui249.dll"    \
        "../OpenCV/bin/libopencv_imgproc249.dll"    \
        "../OpenCV/bin/libopencv_features2d249.dll" \
        "../OpenCV/bin/libopencv_calib3d249.dll"    \
        "../OpenCV/bin/libopencv_contrib249.dll"    \
        "../OpenCV/bin/libopencv_flann249.dll"    \
        "../OpenCV/bin/libopencv_gpu249.dll"    \
        "../OpenCV/bin/libopencv_legacy249.dll"    \
        "../OpenCV/bin/libopencv_ml249.dll"    \
        "../OpenCV/bin/libopencv_objdetect249.dll"    \
        "../OpenCV/bin/libopencv_video249.dll"
