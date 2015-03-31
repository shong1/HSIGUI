/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_view;
    QPushButton *pushButton_LoadImage;
    QLabel *label_ROI_view1;
    QLabel *label_ROI_view2;
    QSlider *horizontalSlider_ROI1;
    QSlider *horizontalSlider_ROI2;
    QLabel *label_graph_view;
    QRadioButton *radioButton_RPE;
    QRadioButton *radioButton_RPEBR;
    QMenuBar *menuBar;
    QMenu *menuHyperspectral_Image_GUI;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1232, 786);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_view = new QLabel(centralWidget);
        label_view->setObjectName(QStringLiteral("label_view"));
        label_view->setGeometry(QRect(10, 10, 891, 711));
        label_view->setAlignment(Qt::AlignCenter);
        pushButton_LoadImage = new QPushButton(centralWidget);
        pushButton_LoadImage->setObjectName(QStringLiteral("pushButton_LoadImage"));
        pushButton_LoadImage->setGeometry(QRect(930, 0, 99, 27));
        label_ROI_view1 = new QLabel(centralWidget);
        label_ROI_view1->setObjectName(QStringLiteral("label_ROI_view1"));
        label_ROI_view1->setGeometry(QRect(940, 40, 271, 201));
        label_ROI_view1->setAlignment(Qt::AlignCenter);
        label_ROI_view2 = new QLabel(centralWidget);
        label_ROI_view2->setObjectName(QStringLiteral("label_ROI_view2"));
        label_ROI_view2->setGeometry(QRect(940, 290, 271, 201));
        label_ROI_view2->setAlignment(Qt::AlignCenter);
        horizontalSlider_ROI1 = new QSlider(centralWidget);
        horizontalSlider_ROI1->setObjectName(QStringLiteral("horizontalSlider_ROI1"));
        horizontalSlider_ROI1->setGeometry(QRect(930, 250, 281, 29));
        horizontalSlider_ROI1->setOrientation(Qt::Horizontal);
        horizontalSlider_ROI2 = new QSlider(centralWidget);
        horizontalSlider_ROI2->setObjectName(QStringLiteral("horizontalSlider_ROI2"));
        horizontalSlider_ROI2->setGeometry(QRect(930, 490, 281, 29));
        horizontalSlider_ROI2->setOrientation(Qt::Horizontal);
        label_graph_view = new QLabel(centralWidget);
        label_graph_view->setObjectName(QStringLiteral("label_graph_view"));
        label_graph_view->setGeometry(QRect(940, 520, 271, 201));
        label_graph_view->setAlignment(Qt::AlignCenter);
        radioButton_RPE = new QRadioButton(centralWidget);
        radioButton_RPE->setObjectName(QStringLiteral("radioButton_RPE"));
        radioButton_RPE->setGeometry(QRect(1030, 0, 51, 21));
        radioButton_RPEBR = new QRadioButton(centralWidget);
        radioButton_RPEBR->setObjectName(QStringLiteral("radioButton_RPEBR"));
        radioButton_RPEBR->setGeometry(QRect(1090, 0, 81, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1232, 24));
        menuHyperspectral_Image_GUI = new QMenu(menuBar);
        menuHyperspectral_Image_GUI->setObjectName(QStringLiteral("menuHyperspectral_Image_GUI"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuHyperspectral_Image_GUI->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_view->setText(QApplication::translate("MainWindow", "RGB Image", 0));
        pushButton_LoadImage->setText(QApplication::translate("MainWindow", "Load Image", 0));
        label_ROI_view1->setText(QApplication::translate("MainWindow", "ROI1", 0));
        label_ROI_view2->setText(QApplication::translate("MainWindow", "ROI2", 0));
        label_graph_view->setText(QApplication::translate("MainWindow", "Graph", 0));
        radioButton_RPE->setText(QApplication::translate("MainWindow", "RPE", 0));
        radioButton_RPEBR->setText(QApplication::translate("MainWindow", "RPE+BR", 0));
        menuHyperspectral_Image_GUI->setTitle(QApplication::translate("MainWindow", "Hyperspectral Image GUI", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
