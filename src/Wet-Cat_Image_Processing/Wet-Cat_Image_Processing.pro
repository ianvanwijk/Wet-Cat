#-------------------------------------------------
#
# Project created by QtCreator 2014-09-15T13:53:24
#
#-------------------------------------------------

QT       += core gui
QT       += serialport
QT       += opengl

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
    Segmenter/Segmenters/DetectBlobSegmenter.cpp \
    OpenCVViewer/cqtopencvviewergl.cpp \
    DangerZone.cpp \
    Enhancer/Enhancers/ResizeEnhancer.cpp \
    Segmenter/Segmenters/ArucoSegmenter.cpp

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
    Segmenter/Segmenters/DetectBlobSegmenter.h \
    Defines.h \
    OpenCVViewer/cqtopencvviewergl.h \
    DangerZone.h \
    Enhancer/Enhancers/ResizeEnhancer.h \
    Segmenter/Segmenters/ArucoSegmenter.h


INCLUDEPATH += "../OpenCV/include" \
               "../Aruco/Build/include"

LIBS += "../OpenCV/bin/libopencv_core249.dll"       \
        "../OpenCV/bin/libopencv_highgui249.dll"    \
        "../OpenCV/bin/libopencv_imgproc249.dll"    \
        "../OpenCV/bin/libopencv_features2d249.dll" \
        "../OpenCV/bin/libopencv_calib3d249.dll"    \
        "../OpenCV/bin/libopencv_contrib249.dll"    \
        "../OpenCV/bin/libopencv_flann249.dll"      \
        "../OpenCV/bin/libopencv_gpu249.dll"        \
        "../OpenCV/bin/libopencv_legacy249.dll"     \
        "../OpenCV/bin/libopencv_ml249.dll"         \
        "../OpenCV/bin/libopencv_objdetect249.dll"  \
        "../OpenCV/bin/libopencv_video249.dll"      \
        "../Aruco/build/bin/libaruco125.dll"

#INCLUDEPATH += C:\OpenCV\build\install\include \
#               C:\Aruco\build\include

#LIBS += C:\OpenCV\build\install\x64\mingw\bin\libopencv_core249.dll \
#        C:\OpenCV\build\install\x64\mingw\bin\libopencv_highgui249.dll \
#        C:\OpenCV\build\install\x64\mingw\bin\libopencv_imgproc249.dll \
#        C:\OpenCV\build\install\x64\mingw\bin\libopencv_features2d249.dll \
#        C:\OpenCV\build\install\x64\mingw\bin\libopencv_calib3d249.dll \
#        C:\OpenCV\build\install\x64\mingw\bin\libopencv_contrib249.dll \
#        C:\OpenCV\build\install\x64\mingw\bin\libopencv_flann249.dll \
#        C:\OpenCV\build\install\x64\mingw\bin\libopencv_gpu249.dll \
#        C:\OpenCV\build\install\x64\mingw\bin\libopencv_legacy249.dll \
#        C:\OpenCV\build\install\x64\mingw\bin\libopencv_ml249.dll \
#        C:\OpenCV\build\install\x64\mingw\bin\libopencv_objdetect249.dll \
#        C:\OpenCV\build\install\x64\mingw\bin\libopencv_video249.dll \
#        C:\Aruco\build\bin\libaruco125.dll

FORMS    += wetcatimageprocessing.ui
