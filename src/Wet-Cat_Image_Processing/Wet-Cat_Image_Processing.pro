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
        wetcatimageprocessing.cpp \
    image.cpp \
    Acquirer/simpleacquirer.cpp \
    Enhancer/simpleenhancer.cpp \
    Enhancer/enhancement.cpp \
    Enhancer/Enhancers/dummyenhancer.cpp

HEADERS  += wetcatimageprocessing.h \
    iexecutable.h \
    image.h \
    Acquirer/simpleacquirer.h \
    Enhancer/simpleenhancer.h \
    Enhancer/enhancement.h \
    Enhancer/ienhancer.h \
    Enhancer/Enhancers/dummyenhancer.h

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
