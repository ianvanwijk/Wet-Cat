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
    Segmenter/SimpleSegmenter.cpp

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
    Segmenter/SimpleSegmenter.h

FORMS    += wetcatimageprocessing.ui

INCLUDEPATH += "C:/Applications/Qt/Tools/OpenCV/include"

LIBS += "C:/Applications/Qt/Tools/OpenCV/bin/libopencv_core249.dll"       \
        "C:/Applications/Qt/Tools/OpenCV/bin/libopencv_highgui249.dll"    \
        "C:/Applications/Qt/Tools/OpenCV/bin/libopencv_imgproc249.dll"    \
        "C:/Applications/Qt/Tools/OpenCV/bin/libopencv_features2d249.dll" \
        "C:/Applications/Qt/Tools/OpenCV/bin/libopencv_calib3d249.dll"    \
        "C:/Applications/Qt/Tools/OpenCV/bin/libopencv_contrib249.dll"    \
        "C:/Applications/Qt/Tools/OpenCV/bin/libopencv_flann249.dll"    \
        "C:/Applications/Qt/Tools/OpenCV/bin/libopencv_gpu249.dll"    \
        "C:/Applications/Qt/Tools/OpenCV/bin/libopencv_legacy249.dll"    \
        "C:/Applications/Qt/Tools/OpenCV/bin/libopencv_ml249.dll"    \
        "C:/Applications/Qt/Tools/OpenCV/bin/libopencv_objdetect249.dll"    \
        "C:/Applications/Qt/Tools/OpenCV/bin/libopencv_video249.dll"
