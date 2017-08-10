/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *restart;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *B5;
    QLabel *B9;
    QLabel *B16;
    QLabel *B6;
    QLabel *B13;
    QLabel *B8;
    QLabel *B15;
    QLabel *B11;
    QLabel *B3;
    QLabel *B4;
    QLabel *B14;
    QLabel *B1;
    QLabel *B12;
    QLabel *B7;
    QLabel *B10;
    QLabel *B2;
    QLabel *score;
    QLabel *title;
    QLabel *background;
    QLabel *gameover;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(700, 806);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        restart = new QPushButton(centralWidget);
        restart->setObjectName(QStringLiteral("restart"));
        restart->setGeometry(QRect(430, 120, 150, 34));
        restart->setMinimumSize(QSize(150, 0));
        QFont font;
        font.setFamily(QStringLiteral("Eras Bold ITC"));
        font.setPointSize(16);
        restart->setFont(font);
        restart->setFocusPolicy(Qt::NoFocus);
        restart->setToolTipDuration(0);
        restart->setIconSize(QSize(50, 50));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 180, 531, 541));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        B5 = new QLabel(layoutWidget);
        B5->setObjectName(QStringLiteral("B5"));
        B5->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(B5, 1, 0, 1, 1);

        B9 = new QLabel(layoutWidget);
        B9->setObjectName(QStringLiteral("B9"));
        B9->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(B9, 2, 0, 1, 1);

        B16 = new QLabel(layoutWidget);
        B16->setObjectName(QStringLiteral("B16"));
        B16->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(B16, 3, 3, 1, 1);

        B6 = new QLabel(layoutWidget);
        B6->setObjectName(QStringLiteral("B6"));
        B6->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(B6, 1, 1, 1, 1);

        B13 = new QLabel(layoutWidget);
        B13->setObjectName(QStringLiteral("B13"));
        B13->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(B13, 3, 0, 1, 1);

        B8 = new QLabel(layoutWidget);
        B8->setObjectName(QStringLiteral("B8"));
        B8->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(B8, 1, 3, 1, 1);

        B15 = new QLabel(layoutWidget);
        B15->setObjectName(QStringLiteral("B15"));
        B15->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(B15, 3, 2, 1, 1);

        B11 = new QLabel(layoutWidget);
        B11->setObjectName(QStringLiteral("B11"));
        B11->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(B11, 2, 2, 1, 1);

        B3 = new QLabel(layoutWidget);
        B3->setObjectName(QStringLiteral("B3"));
        B3->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(B3, 0, 2, 1, 1);

        B4 = new QLabel(layoutWidget);
        B4->setObjectName(QStringLiteral("B4"));
        B4->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(B4, 0, 3, 1, 1);

        B14 = new QLabel(layoutWidget);
        B14->setObjectName(QStringLiteral("B14"));
        B14->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(B14, 3, 1, 1, 1);

        B1 = new QLabel(layoutWidget);
        B1->setObjectName(QStringLiteral("B1"));
        B1->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(B1, 0, 0, 1, 1);

        B12 = new QLabel(layoutWidget);
        B12->setObjectName(QStringLiteral("B12"));
        B12->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(B12, 2, 3, 1, 1);

        B7 = new QLabel(layoutWidget);
        B7->setObjectName(QStringLiteral("B7"));
        B7->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(B7, 1, 2, 1, 1);

        B10 = new QLabel(layoutWidget);
        B10->setObjectName(QStringLiteral("B10"));
        B10->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(B10, 2, 1, 1, 1);

        B2 = new QLabel(layoutWidget);
        B2->setObjectName(QStringLiteral("B2"));
        B2->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(B2, 0, 1, 1, 1);

        score = new QLabel(centralWidget);
        score->setObjectName(QStringLiteral("score"));
        score->setGeometry(QRect(430, 40, 151, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Algerian"));
        font1.setPointSize(28);
        font1.setBold(true);
        font1.setWeight(75);
        score->setFont(font1);
        score->setAlignment(Qt::AlignCenter);
        title = new QLabel(centralWidget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(110, 20, 311, 150));
        background = new QLabel(centralWidget);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, -40, 701, 801));
        gameover = new QLabel(centralWidget);
        gameover->setObjectName(QStringLiteral("gameover"));
        gameover->setGeometry(QRect(40, 200, 621, 501));
        MainWindow->setCentralWidget(centralWidget);
        background->raise();
        restart->raise();
        layoutWidget->raise();
        score->raise();
        title->raise();
        gameover->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 700, 29));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        restart->setText(QApplication::translate("MainWindow", "restart", 0));
        B5->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        B9->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        B16->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        B6->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        B13->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        B8->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        B15->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        B11->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        B3->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        B4->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        B14->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        B1->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        B12->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        B7->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        B10->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        B2->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        score->setText(QApplication::translate("MainWindow", "text", 0));
        title->setText(QApplication::translate("MainWindow", "2048", 0));
        background->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        gameover->setText(QApplication::translate("MainWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
