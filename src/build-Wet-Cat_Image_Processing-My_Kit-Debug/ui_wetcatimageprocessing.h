/********************************************************************************
** Form generated from reading UI file 'wetcatimageprocessing.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WETCATIMAGEPROCESSING_H
#define UI_WETCATIMAGEPROCESSING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WetCatImageProcessing
{
public:
    QWidget *centralWidget;
    QPushButton *BT_Acquire;
    QPushButton *BT_Configure;
    QPushButton *BT_Show;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WetCatImageProcessing)
    {
        if (WetCatImageProcessing->objectName().isEmpty())
            WetCatImageProcessing->setObjectName(QStringLiteral("WetCatImageProcessing"));
        WetCatImageProcessing->resize(400, 300);
        centralWidget = new QWidget(WetCatImageProcessing);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        BT_Acquire = new QPushButton(centralWidget);
        BT_Acquire->setObjectName(QStringLiteral("BT_Acquire"));
        BT_Acquire->setGeometry(QRect(10, 40, 75, 23));
        BT_Configure = new QPushButton(centralWidget);
        BT_Configure->setObjectName(QStringLiteral("BT_Configure"));
        BT_Configure->setGeometry(QRect(10, 10, 75, 23));
        BT_Show = new QPushButton(centralWidget);
        BT_Show->setObjectName(QStringLiteral("BT_Show"));
        BT_Show->setGeometry(QRect(10, 80, 75, 23));
        WetCatImageProcessing->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(WetCatImageProcessing);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        WetCatImageProcessing->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WetCatImageProcessing);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        WetCatImageProcessing->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(WetCatImageProcessing);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WetCatImageProcessing->setStatusBar(statusBar);

        retranslateUi(WetCatImageProcessing);

        QMetaObject::connectSlotsByName(WetCatImageProcessing);
    } // setupUi

    void retranslateUi(QMainWindow *WetCatImageProcessing)
    {
        WetCatImageProcessing->setWindowTitle(QApplication::translate("WetCatImageProcessing", "WetCatImageProcessing", 0));
        BT_Acquire->setText(QApplication::translate("WetCatImageProcessing", "Acquire", 0));
        BT_Configure->setText(QApplication::translate("WetCatImageProcessing", "Configure", 0));
        BT_Show->setText(QApplication::translate("WetCatImageProcessing", "Show", 0));
    } // retranslateUi

};

namespace Ui {
    class WetCatImageProcessing: public Ui_WetCatImageProcessing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WETCATIMAGEPROCESSING_H
