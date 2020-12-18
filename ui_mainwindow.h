/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QCustomPlot *customPlot;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QFrame *frame;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_34;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_67;
    QLabel *label_68;
    QLabel *label_69;
    QLabel *label_70;
    QWidget *page_1;
    QFrame *frame_2;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QPushButton *pushButton_19;
    QLabel *label_5;
    QLabel *label_7;
    QFrame *frame_3;
    QLineEdit *lineEdit_3;
    QLabel *label_9;
    QLineEdit *lineEdit_4;
    QLabel *label_10;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QLabel *label_11;
    QFrame *frame_4;
    QLabel *label_12;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLabel *label_13;
    QPushButton *pushButton_23;
    QPushButton *pushButton_24;
    QFrame *frame_5;
    QLabel *label_14;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLabel *label_15;
    QPushButton *pushButton_25;
    QPushButton *pushButton_26;
    QLabel *label_16;
    QWidget *page_2;
    QFrame *frame_6;
    QLineEdit *lineEdit_9;
    QLabel *label_17;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QWidget *page_3;
    QFrame *frame_7;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_20;
    QLabel *label_18;
    QLineEdit *lineEdit_11;
    QPushButton *pushButton_29;
    QLineEdit *lineEdit_12;
    QPushButton *pushButton_30;
    QLineEdit *lineEdit_13;
    QLabel *label_21;
    QLabel *label_22;
    QPushButton *pushButton_28;
    QFrame *frame_8;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QFrame *frame_9;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QFrame *frame_10;
    QLabel *label_19;
    QLineEdit *lineEdit_10;
    QPushButton *pushButton_27;
    QLabel *label_20;
    QLabel *label_25;
    QLabel *label_26;
    QLineEdit *lineEdit_14;
    QPushButton *pushButton_31;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_16;
    QPushButton *pushButton_32;
    QPushButton *pushButton_33;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_18;
    QPushButton *pushButton_34;
    QPushButton *pushButton_35;
    QLineEdit *lineEdit_19;
    QLineEdit *lineEdit_20;
    QPushButton *pushButton_36;
    QPushButton *pushButton_37;
    QLineEdit *lineEdit_21;
    QLineEdit *lineEdit_22;
    QPushButton *pushButton_38;
    QPushButton *pushButton_39;
    QLineEdit *lineEdit_23;
    QLineEdit *lineEdit_24;
    QPushButton *pushButton_40;
    QPushButton *pushButton_41;
    QPushButton *pushButton_42;
    QPushButton *pushButton_43;
    QLineEdit *lineEdit_25;
    QLineEdit *lineEdit_26;
    QLineEdit *lineEdit_27;
    QLineEdit *lineEdit_28;
    QPushButton *pushButton_44;
    QPushButton *pushButton_45;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QFrame *frame_11;
    QLineEdit *lineEdit_29;
    QPushButton *pushButton_46;
    QLabel *label_33;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QToolButton *toolButton_5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 480);
        MainWindow->setStyleSheet(QStringLiteral("background:rgb(17, 46, 88)"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 80, 800, 381));
        stackedWidget->setStyleSheet(QStringLiteral("background:rgb(17, 46, 88)"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        customPlot = new QCustomPlot(page);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(0, 10, 800, 261));
        customPlot->setStyleSheet(QStringLiteral("background:rgb(0, 0, 26)"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 280, 64, 17));
        QFont font;
        font.setFamily(QStringLiteral("PibotoLt"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 280, 64, 17));
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 280, 64, 17));
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 0);"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 280, 64, 17));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 0);"));
        frame = new QFrame(page);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 300, 800, 81));
        frame->setStyleSheet(QStringLiteral("background:rgb(17, 46, 88)"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 5, 161, 71));
        QFont font1;
        font1.setFamily(QStringLiteral("PibotoLt"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("background:rgb(1, 114, 192);\n"
"color:rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(325, 5, 161, 71));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QLatin1String("background:rgb(1, 114, 192);\n"
"color:rgb(255, 255, 255);"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(570, 5, 161, 71));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QLatin1String("background:rgb(1, 114, 192);\n"
"color:rgb(255, 255, 255);"));
        label_34 = new QLabel(frame);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(10, 30, 64, 17));
        label_34->setFont(font);
        label_34->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        label_23 = new QLabel(page);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(640, 280, 64, 17));
        label_23->setFont(font);
        label_23->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        label_24 = new QLabel(page);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(710, 280, 64, 17));
        label_24->setFont(font);
        label_24->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 0);"));
        label_67 = new QLabel(page);
        label_67->setObjectName(QStringLiteral("label_67"));
        label_67->setGeometry(QRect(340, 280, 64, 17));
        label_67->setFont(font);
        label_67->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        label_68 = new QLabel(page);
        label_68->setObjectName(QStringLiteral("label_68"));
        label_68->setGeometry(QRect(400, 280, 64, 17));
        label_68->setFont(font);
        label_68->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 0);"));
        label_69 = new QLabel(page);
        label_69->setObjectName(QStringLiteral("label_69"));
        label_69->setGeometry(QRect(550, 280, 64, 17));
        label_69->setFont(font);
        label_69->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 0);"));
        label_70 = new QLabel(page);
        label_70->setObjectName(QStringLiteral("label_70"));
        label_70->setGeometry(QRect(490, 280, 64, 17));
        label_70->setFont(font);
        label_70->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        stackedWidget->addWidget(page);
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        frame_2 = new QFrame(page_1);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(30, 59, 321, 71));
        frame_2->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 25, 151, 17));
        QFont font2;
        font2.setPointSize(12);
        label_6->setFont(font2);
        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(170, 14, 130, 40));
        lineEdit->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        pushButton_19 = new QPushButton(frame_2);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setGeometry(QRect(170, 14, 130, 40));
        pushButton_19->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        label_5 = new QLabel(page_1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 40, 281, 17));
        label_5->setFont(font2);
        label_5->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        label_7 = new QLabel(page_1);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 150, 241, 17));
        label_7->setFont(font2);
        label_7->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        frame_3 = new QFrame(page_1);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(30, 179, 311, 171));
        frame_3->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        lineEdit_3 = new QLineEdit(frame_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 20, 130, 40));
        lineEdit_3->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        label_9 = new QLabel(frame_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 30, 131, 17));
        label_9->setFont(font2);
        lineEdit_4 = new QLineEdit(frame_3);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(160, 80, 130, 40));
        lineEdit_4->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        label_10 = new QLabel(frame_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 90, 111, 17));
        label_10->setFont(font2);
        pushButton_21 = new QPushButton(frame_3);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        pushButton_21->setGeometry(QRect(160, 20, 130, 40));
        pushButton_21->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        pushButton_22 = new QPushButton(frame_3);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        pushButton_22->setGeometry(QRect(160, 80, 130, 40));
        pushButton_22->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        label_11 = new QLabel(page_1);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(400, 40, 221, 17));
        label_11->setFont(font2);
        label_11->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        frame_4 = new QFrame(page_1);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(400, 60, 301, 141));
        frame_4->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_12 = new QLabel(frame_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 30, 131, 17));
        label_12->setFont(font2);
        lineEdit_5 = new QLineEdit(frame_4);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(150, 20, 130, 40));
        lineEdit_5->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        lineEdit_6 = new QLineEdit(frame_4);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(150, 80, 130, 40));
        lineEdit_6->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        label_13 = new QLabel(frame_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 90, 131, 17));
        label_13->setFont(font2);
        pushButton_23 = new QPushButton(frame_4);
        pushButton_23->setObjectName(QStringLiteral("pushButton_23"));
        pushButton_23->setGeometry(QRect(150, 20, 130, 40));
        pushButton_23->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        pushButton_24 = new QPushButton(frame_4);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));
        pushButton_24->setGeometry(QRect(150, 80, 130, 40));
        pushButton_24->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        frame_5 = new QFrame(page_1);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(400, 239, 301, 141));
        frame_5->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_14 = new QLabel(frame_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 30, 131, 17));
        label_14->setFont(font2);
        lineEdit_7 = new QLineEdit(frame_5);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(150, 20, 130, 40));
        lineEdit_7->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        lineEdit_8 = new QLineEdit(frame_5);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(150, 80, 130, 40));
        lineEdit_8->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        label_15 = new QLabel(frame_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 90, 131, 17));
        label_15->setFont(font2);
        pushButton_25 = new QPushButton(frame_5);
        pushButton_25->setObjectName(QStringLiteral("pushButton_25"));
        pushButton_25->setGeometry(QRect(150, 20, 130, 40));
        pushButton_25->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        pushButton_26 = new QPushButton(frame_5);
        pushButton_26->setObjectName(QStringLiteral("pushButton_26"));
        pushButton_26->setGeometry(QRect(150, 80, 130, 40));
        pushButton_26->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        label_16 = new QLabel(page_1);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(400, 220, 221, 17));
        label_16->setFont(font2);
        label_16->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        frame_6 = new QFrame(page_2);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(170, 30, 411, 351));
        frame_6->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        lineEdit_9 = new QLineEdit(frame_6);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(200, 10, 130, 40));
        lineEdit_9->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        label_17 = new QLabel(frame_6);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(60, 21, 131, 20));
        label_17->setFont(font2);
        label_17->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        pushButton_4 = new QPushButton(frame_6);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(90, 60, 81, 71));
        pushButton_4->setFont(font2);
        pushButton_5 = new QPushButton(frame_6);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(170, 60, 81, 71));
        pushButton_5->setFont(font2);
        pushButton_6 = new QPushButton(frame_6);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(250, 60, 81, 71));
        pushButton_6->setFont(font2);
        pushButton_10 = new QPushButton(frame_6);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(250, 130, 81, 71));
        pushButton_10->setFont(font2);
        pushButton_11 = new QPushButton(frame_6);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(90, 130, 81, 71));
        pushButton_11->setFont(font2);
        pushButton_12 = new QPushButton(frame_6);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(170, 130, 81, 71));
        pushButton_12->setFont(font2);
        pushButton_13 = new QPushButton(frame_6);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(250, 200, 81, 71));
        pushButton_13->setFont(font2);
        pushButton_14 = new QPushButton(frame_6);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(90, 200, 81, 71));
        pushButton_14->setFont(font2);
        pushButton_15 = new QPushButton(frame_6);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(170, 200, 81, 71));
        pushButton_15->setFont(font2);
        pushButton_16 = new QPushButton(frame_6);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(170, 270, 81, 71));
        pushButton_16->setFont(font2);
        pushButton_17 = new QPushButton(frame_6);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(250, 270, 81, 71));
        QFont font3;
        font3.setPointSize(16);
        pushButton_17->setFont(font3);
        pushButton_18 = new QPushButton(frame_6);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(90, 270, 81, 71));
        pushButton_18->setFont(font2);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        frame_7 = new QFrame(page_3);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setGeometry(QRect(30, 220, 421, 155));
        frame_7->setStyleSheet(QLatin1String("\n"
"background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);\n"
""));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        label_8 = new QLabel(frame_7);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 65, 41, 17));
        label_8->setFont(font2);
        lineEdit_2 = new QLineEdit(frame_7);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 60, 130, 40));
        lineEdit_2->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        pushButton_20 = new QPushButton(frame_7);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setGeometry(QRect(70, 60, 130, 40));
        pushButton_20->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        label_18 = new QLabel(frame_7);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 120, 41, 17));
        label_18->setFont(font2);
        lineEdit_11 = new QLineEdit(frame_7);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(70, 110, 130, 40));
        lineEdit_11->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        pushButton_29 = new QPushButton(frame_7);
        pushButton_29->setObjectName(QStringLiteral("pushButton_29"));
        pushButton_29->setGeometry(QRect(250, 60, 130, 40));
        pushButton_29->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        lineEdit_12 = new QLineEdit(frame_7);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(250, 60, 130, 40));
        lineEdit_12->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        pushButton_30 = new QPushButton(frame_7);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));
        pushButton_30->setGeometry(QRect(250, 110, 130, 40));
        pushButton_30->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        lineEdit_13 = new QLineEdit(frame_7);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(250, 110, 130, 40));
        lineEdit_13->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        label_21 = new QLabel(frame_7);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(90, 10, 81, 17));
        label_21->setFont(font2);
        label_22 = new QLabel(frame_7);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(270, 10, 81, 17));
        label_22->setFont(font2);
        pushButton_28 = new QPushButton(frame_7);
        pushButton_28->setObjectName(QStringLiteral("pushButton_28"));
        pushButton_28->setGeometry(QRect(70, 110, 130, 40));
        pushButton_28->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        label_8->raise();
        lineEdit_2->raise();
        pushButton_20->raise();
        label_18->raise();
        lineEdit_11->raise();
        lineEdit_12->raise();
        lineEdit_13->raise();
        label_21->raise();
        label_22->raise();
        pushButton_28->raise();
        pushButton_29->raise();
        pushButton_30->raise();
        frame_8 = new QFrame(page_3);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setGeometry(QRect(30, 20, 261, 90));
        frame_8->setStyleSheet(QLatin1String("QFrame {\n"
"background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);\n"
"border:                 2px solid white;}"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        radioButton = new QRadioButton(frame_8);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(15, 10, 191, 31));
        QFont font4;
        font4.setPointSize(14);
        radioButton->setFont(font4);
        radioButton->setStyleSheet(QLatin1String("QRadioButton {\n"
"    background:rgb(17, 46, 88);\n"
"    color:                  white;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width:                  20px;\n"
"    height:                 20px;\n"
"    border-radius:          10px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color:       red;\n"
"    border:                 2px solid white;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    background:rgb(17, 46, 88);\n"
"    border:                 2px solid white;\n"
"}"));
        radioButton_2 = new QRadioButton(frame_8);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(15, 50, 241, 31));
        radioButton_2->setFont(font4);
        radioButton_2->setStyleSheet(QLatin1String("QRadioButton {\n"
"    background:rgb(17, 46, 88);\n"
"    color:                  white;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width:                  20px;\n"
"    height:                 20px;\n"
"    border-radius:          10px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color:       red;\n"
"    border:                 2px solid white;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    background:rgb(17, 46, 88);\n"
"    border:                 2px solid white;\n"
"}"));
        radioButton_2->setChecked(true);
        frame_9 = new QFrame(page_3);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setGeometry(QRect(30, 120, 421, 90));
        frame_9->setStyleSheet(QLatin1String("QFrame {\n"
"background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);\n"
"border:                 2px solid white;}"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        radioButton_5 = new QRadioButton(frame_9);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(15, 10, 241, 31));
        radioButton_5->setFont(font4);
        radioButton_5->setStyleSheet(QLatin1String("QRadioButton {\n"
"    background:rgb(17, 46, 88);\n"
"    color:                  white;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width:                  20px;\n"
"    height:                 20px;\n"
"    border-radius:          10px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color:       red;\n"
"    border:                 2px solid white;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    background:rgb(17, 46, 88);\n"
"    border:                 2px solid white;\n"
"}"));
        radioButton_6 = new QRadioButton(frame_9);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(15, 50, 301, 31));
        radioButton_6->setFont(font4);
        radioButton_6->setStyleSheet(QLatin1String("QRadioButton {\n"
"    background:rgb(17, 46, 88);\n"
"    color:                  white;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width:                  20px;\n"
"    height:                 20px;\n"
"    border-radius:          10px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color:       red;\n"
"    border:                 2px solid white;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    background:rgb(17, 46, 88);\n"
"    border:                 2px solid white;\n"
"}"));
        radioButton_6->setChecked(true);
        frame_10 = new QFrame(page_3);
        frame_10->setObjectName(QStringLiteral("frame_10"));
        frame_10->setGeometry(QRect(460, 20, 331, 355));
        frame_10->setStyleSheet(QLatin1String("\n"
"background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);\n"
""));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        label_19 = new QLabel(frame_10);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 50, 20, 17));
        label_19->setFont(font2);
        lineEdit_10 = new QLineEdit(frame_10);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(60, 40, 110, 30));
        lineEdit_10->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        pushButton_27 = new QPushButton(frame_10);
        pushButton_27->setObjectName(QStringLiteral("pushButton_27"));
        pushButton_27->setGeometry(QRect(50, 40, 110, 30));
        pushButton_27->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        label_20 = new QLabel(frame_10);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 90, 20, 17));
        label_20->setFont(font2);
        label_25 = new QLabel(frame_10);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(80, 10, 81, 17));
        label_25->setFont(font2);
        label_26 = new QLabel(frame_10);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(200, 10, 81, 17));
        label_26->setFont(font2);
        lineEdit_14 = new QLineEdit(frame_10);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(200, 40, 110, 30));
        lineEdit_14->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        pushButton_31 = new QPushButton(frame_10);
        pushButton_31->setObjectName(QStringLiteral("pushButton_31"));
        pushButton_31->setGeometry(QRect(190, 40, 110, 30));
        pushButton_31->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        lineEdit_15 = new QLineEdit(frame_10);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(60, 80, 110, 30));
        lineEdit_15->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        lineEdit_16 = new QLineEdit(frame_10);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(200, 80, 110, 30));
        lineEdit_16->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        pushButton_32 = new QPushButton(frame_10);
        pushButton_32->setObjectName(QStringLiteral("pushButton_32"));
        pushButton_32->setGeometry(QRect(50, 80, 110, 30));
        pushButton_32->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        pushButton_33 = new QPushButton(frame_10);
        pushButton_33->setObjectName(QStringLiteral("pushButton_33"));
        pushButton_33->setGeometry(QRect(190, 80, 110, 30));
        pushButton_33->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        lineEdit_17 = new QLineEdit(frame_10);
        lineEdit_17->setObjectName(QStringLiteral("lineEdit_17"));
        lineEdit_17->setGeometry(QRect(60, 120, 110, 30));
        lineEdit_17->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        lineEdit_18 = new QLineEdit(frame_10);
        lineEdit_18->setObjectName(QStringLiteral("lineEdit_18"));
        lineEdit_18->setGeometry(QRect(200, 120, 110, 30));
        lineEdit_18->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        pushButton_34 = new QPushButton(frame_10);
        pushButton_34->setObjectName(QStringLiteral("pushButton_34"));
        pushButton_34->setGeometry(QRect(50, 120, 110, 30));
        pushButton_34->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        pushButton_35 = new QPushButton(frame_10);
        pushButton_35->setObjectName(QStringLiteral("pushButton_35"));
        pushButton_35->setGeometry(QRect(190, 120, 110, 30));
        pushButton_35->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        lineEdit_19 = new QLineEdit(frame_10);
        lineEdit_19->setObjectName(QStringLiteral("lineEdit_19"));
        lineEdit_19->setGeometry(QRect(60, 160, 110, 30));
        lineEdit_19->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        lineEdit_20 = new QLineEdit(frame_10);
        lineEdit_20->setObjectName(QStringLiteral("lineEdit_20"));
        lineEdit_20->setGeometry(QRect(200, 160, 110, 30));
        lineEdit_20->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        pushButton_36 = new QPushButton(frame_10);
        pushButton_36->setObjectName(QStringLiteral("pushButton_36"));
        pushButton_36->setGeometry(QRect(50, 160, 110, 30));
        pushButton_36->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        pushButton_37 = new QPushButton(frame_10);
        pushButton_37->setObjectName(QStringLiteral("pushButton_37"));
        pushButton_37->setGeometry(QRect(190, 160, 110, 30));
        pushButton_37->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        lineEdit_21 = new QLineEdit(frame_10);
        lineEdit_21->setObjectName(QStringLiteral("lineEdit_21"));
        lineEdit_21->setGeometry(QRect(60, 200, 110, 30));
        lineEdit_21->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        lineEdit_22 = new QLineEdit(frame_10);
        lineEdit_22->setObjectName(QStringLiteral("lineEdit_22"));
        lineEdit_22->setGeometry(QRect(200, 200, 110, 30));
        lineEdit_22->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        pushButton_38 = new QPushButton(frame_10);
        pushButton_38->setObjectName(QStringLiteral("pushButton_38"));
        pushButton_38->setGeometry(QRect(50, 200, 110, 30));
        pushButton_38->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        pushButton_39 = new QPushButton(frame_10);
        pushButton_39->setObjectName(QStringLiteral("pushButton_39"));
        pushButton_39->setGeometry(QRect(190, 200, 110, 30));
        pushButton_39->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        lineEdit_23 = new QLineEdit(frame_10);
        lineEdit_23->setObjectName(QStringLiteral("lineEdit_23"));
        lineEdit_23->setGeometry(QRect(60, 240, 110, 30));
        lineEdit_23->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        lineEdit_24 = new QLineEdit(frame_10);
        lineEdit_24->setObjectName(QStringLiteral("lineEdit_24"));
        lineEdit_24->setGeometry(QRect(200, 240, 110, 30));
        lineEdit_24->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        pushButton_40 = new QPushButton(frame_10);
        pushButton_40->setObjectName(QStringLiteral("pushButton_40"));
        pushButton_40->setGeometry(QRect(50, 240, 110, 30));
        pushButton_40->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        pushButton_41 = new QPushButton(frame_10);
        pushButton_41->setObjectName(QStringLiteral("pushButton_41"));
        pushButton_41->setGeometry(QRect(190, 240, 110, 30));
        pushButton_41->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        pushButton_42 = new QPushButton(frame_10);
        pushButton_42->setObjectName(QStringLiteral("pushButton_42"));
        pushButton_42->setGeometry(QRect(190, 280, 110, 30));
        pushButton_42->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        pushButton_43 = new QPushButton(frame_10);
        pushButton_43->setObjectName(QStringLiteral("pushButton_43"));
        pushButton_43->setGeometry(QRect(50, 280, 110, 30));
        pushButton_43->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        lineEdit_25 = new QLineEdit(frame_10);
        lineEdit_25->setObjectName(QStringLiteral("lineEdit_25"));
        lineEdit_25->setGeometry(QRect(60, 280, 110, 30));
        lineEdit_25->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        lineEdit_26 = new QLineEdit(frame_10);
        lineEdit_26->setObjectName(QStringLiteral("lineEdit_26"));
        lineEdit_26->setGeometry(QRect(200, 280, 110, 30));
        lineEdit_26->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        lineEdit_27 = new QLineEdit(frame_10);
        lineEdit_27->setObjectName(QStringLiteral("lineEdit_27"));
        lineEdit_27->setGeometry(QRect(60, 320, 110, 30));
        lineEdit_27->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        lineEdit_28 = new QLineEdit(frame_10);
        lineEdit_28->setObjectName(QStringLiteral("lineEdit_28"));
        lineEdit_28->setGeometry(QRect(200, 320, 110, 30));
        lineEdit_28->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        pushButton_44 = new QPushButton(frame_10);
        pushButton_44->setObjectName(QStringLiteral("pushButton_44"));
        pushButton_44->setGeometry(QRect(190, 320, 110, 30));
        pushButton_44->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        pushButton_45 = new QPushButton(frame_10);
        pushButton_45->setObjectName(QStringLiteral("pushButton_45"));
        pushButton_45->setGeometry(QRect(50, 320, 110, 30));
        pushButton_45->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        label_27 = new QLabel(frame_10);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(10, 130, 20, 17));
        label_27->setFont(font2);
        label_28 = new QLabel(frame_10);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(10, 170, 20, 17));
        label_28->setFont(font2);
        label_29 = new QLabel(frame_10);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(10, 210, 20, 17));
        label_29->setFont(font2);
        label_30 = new QLabel(frame_10);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(10, 250, 20, 17));
        label_30->setFont(font2);
        label_31 = new QLabel(frame_10);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(10, 290, 20, 17));
        label_31->setFont(font2);
        label_32 = new QLabel(frame_10);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(10, 330, 20, 17));
        label_32->setFont(font2);
        lineEdit_26->raise();
        lineEdit_25->raise();
        label_19->raise();
        lineEdit_10->raise();
        pushButton_27->raise();
        label_20->raise();
        label_25->raise();
        label_26->raise();
        lineEdit_14->raise();
        pushButton_31->raise();
        lineEdit_15->raise();
        lineEdit_16->raise();
        pushButton_32->raise();
        pushButton_33->raise();
        lineEdit_17->raise();
        lineEdit_18->raise();
        pushButton_34->raise();
        pushButton_35->raise();
        lineEdit_19->raise();
        lineEdit_20->raise();
        pushButton_36->raise();
        pushButton_37->raise();
        lineEdit_21->raise();
        lineEdit_22->raise();
        pushButton_38->raise();
        pushButton_39->raise();
        lineEdit_23->raise();
        lineEdit_24->raise();
        pushButton_40->raise();
        pushButton_41->raise();
        pushButton_42->raise();
        pushButton_43->raise();
        lineEdit_27->raise();
        lineEdit_28->raise();
        pushButton_44->raise();
        pushButton_45->raise();
        label_27->raise();
        label_28->raise();
        label_29->raise();
        label_30->raise();
        label_31->raise();
        label_32->raise();
        frame_11 = new QFrame(page_3);
        frame_11->setObjectName(QStringLiteral("frame_11"));
        frame_11->setGeometry(QRect(300, 20, 141, 91));
        frame_11->setStyleSheet(QLatin1String("QFrame {\n"
"background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);\n"
"border:                 2px solid white;}"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        lineEdit_29 = new QLineEdit(frame_11);
        lineEdit_29->setObjectName(QStringLiteral("lineEdit_29"));
        lineEdit_29->setGeometry(QRect(30, 40, 100, 40));
        lineEdit_29->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        pushButton_46 = new QPushButton(frame_11);
        pushButton_46->setObjectName(QStringLiteral("pushButton_46"));
        pushButton_46->setGeometry(QRect(20, 40, 100, 40));
        pushButton_46->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        label_33 = new QLabel(frame_11);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(0, 0, 141, 31));
        label_33->setFont(font2);
        label_33->setStyleSheet(QLatin1String("background:rgb(17, 46, 88);\n"
"color:rgb(255, 255, 255);"));
        stackedWidget->addWidget(page_3);
        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(0, 0, 198, 71));
        toolButton->setFont(font);
        toolButton->setLayoutDirection(Qt::LeftToRight);
        toolButton->setAutoFillBackground(false);
        toolButton->setStyleSheet(QLatin1String("background:rgb(1, 114, 192);\n"
"color:rgb(255, 255, 255);\n"
"\n"
" "));
        QIcon icon;
        icon.addFile(QStringLiteral(":/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(40, 40));
        toolButton->setCheckable(true);
        toolButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton->setAutoRaise(false);
        toolButton->setArrowType(Qt::NoArrow);
        toolButton_2 = new QToolButton(centralWidget);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setGeometry(QRect(200, 0, 198, 71));
        toolButton_2->setFont(font);
        toolButton_2->setStyleSheet(QLatin1String("background:rgb(1, 114, 192);\n"
"color:rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon1);
        toolButton_2->setIconSize(QSize(40, 40));
        toolButton_2->setCheckable(true);
        toolButton_2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_3 = new QToolButton(centralWidget);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setGeometry(QRect(700, 0, 99, 71));
        toolButton_3->setFont(font);
        toolButton_3->setStyleSheet(QLatin1String("background:rgb(1, 114, 192);\n"
"color:rgb(255, 255, 255);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon2);
        toolButton_3->setIconSize(QSize(40, 40));
        toolButton_3->setCheckable(true);
        toolButton_3->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_4 = new QToolButton(centralWidget);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        toolButton_4->setGeometry(QRect(400, 0, 198, 71));
        toolButton_4->setFont(font);
        toolButton_4->setStyleSheet(QLatin1String("background:rgb(1, 114, 192);\n"
"color:rgb(255, 255, 255);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/calibration.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_4->setIcon(icon3);
        toolButton_4->setIconSize(QSize(40, 40));
        toolButton_4->setCheckable(true);
        toolButton_4->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_5 = new QToolButton(centralWidget);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        toolButton_5->setGeometry(QRect(600, 0, 99, 71));
        toolButton_5->setFont(font);
        toolButton_5->setStyleSheet(QLatin1String("background:rgb(1, 114, 192);\n"
"color:rgb(255, 255, 255);"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/minimize.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_5->setIcon(icon4);
        toolButton_5->setIconSize(QSize(40, 40));
        toolButton_5->setCheckable(true);
        toolButton_5->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "FIA", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Test", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Control", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Home", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Init", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Read", nullptr));
        label_34->setText(QApplication::translate("MainWindow", "V.002", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "Result", nullptr));
        label_24->setText(QString());
        label_67->setText(QApplication::translate("MainWindow", "C/T", nullptr));
        label_68->setText(QString());
        label_69->setText(QString());
        label_70->setText(QApplication::translate("MainWindow", "T/C", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Intensity[0-1024]", nullptr));
        pushButton_19->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "LED EXCITATION", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "SIGNAL FILTERING OPTIONS", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Sampling Rate", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Cut Off Freq.", nullptr));
        pushButton_21->setText(QString());
        pushButton_22->setText(QString());
        label_11->setText(QApplication::translate("MainWindow", "DRIVE MOTOR SPEED", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Homing Speed", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Reading Speed", nullptr));
        pushButton_23->setText(QString());
        pushButton_24->setText(QString());
        label_14->setText(QApplication::translate("MainWindow", "Starting Region", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Ending Region", nullptr));
        pushButton_25->setText(QString());
        pushButton_26->setText(QString());
        label_16->setText(QApplication::translate("MainWindow", "PLOT REGION[0-12000]", nullptr));
        label_17->setText(QString());
        pushButton_4->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "3", nullptr));
        pushButton_10->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButton_11->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton_12->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButton_13->setText(QApplication::translate("MainWindow", "9", nullptr));
        pushButton_14->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButton_15->setText(QApplication::translate("MainWindow", "8", nullptr));
        pushButton_16->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_17->setText(QApplication::translate("MainWindow", "\342\217\216", nullptr));
        pushButton_18->setText(QApplication::translate("MainWindow", "\342\214\253", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Min", nullptr));
        pushButton_20->setText(QString());
        label_18->setText(QApplication::translate("MainWindow", "Max", nullptr));
        pushButton_29->setText(QString());
        pushButton_30->setText(QString());
        label_21->setText(QApplication::translate("MainWindow", "Raw data", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "Cal. data", nullptr));
        pushButton_28->setText(QString());
        radioButton->setText(QApplication::translate("MainWindow", "Read Raw Data", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "Read Calibrated Data", nullptr));
        radioButton_5->setText(QApplication::translate("MainWindow", "Read Base from 0", nullptr));
        radioButton_6->setText(QApplication::translate("MainWindow", "Read Base from Background", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_27->setText(QString());
        label_20->setText(QApplication::translate("MainWindow", "2", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "Conc.", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "Raw Data", nullptr));
        pushButton_31->setText(QString());
        pushButton_32->setText(QString());
        pushButton_33->setText(QString());
        pushButton_34->setText(QString());
        pushButton_35->setText(QString());
        pushButton_36->setText(QString());
        pushButton_37->setText(QString());
        pushButton_38->setText(QString());
        pushButton_39->setText(QString());
        pushButton_40->setText(QString());
        pushButton_41->setText(QString());
        pushButton_42->setText(QString());
        pushButton_43->setText(QString());
        pushButton_44->setText(QString());
        pushButton_45->setText(QString());
        label_27->setText(QApplication::translate("MainWindow", "3", nullptr));
        label_28->setText(QApplication::translate("MainWindow", "4", nullptr));
        label_29->setText(QApplication::translate("MainWindow", "5", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "6", nullptr));
        label_31->setText(QApplication::translate("MainWindow", "7", nullptr));
        label_32->setText(QApplication::translate("MainWindow", "8", nullptr));
        pushButton_46->setText(QString());
        label_33->setText(QApplication::translate("MainWindow", "Factor", nullptr));
        toolButton->setText(QApplication::translate("MainWindow", "Run", nullptr));
        toolButton_2->setText(QApplication::translate("MainWindow", "Settings", nullptr));
        toolButton_3->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        toolButton_4->setText(QApplication::translate("MainWindow", "Calibration", nullptr));
        toolButton_5->setText(QApplication::translate("MainWindow", "Min", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
