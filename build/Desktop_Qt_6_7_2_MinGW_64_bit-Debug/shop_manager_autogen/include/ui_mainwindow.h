/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_9;
    QLabel *label_2;
    QLabel *label;
    QTextBrowser *inforSV;
    QLabel *label_3;
    QLineEdit *id;
    QLabel *label_10;
    QPushButton *pushButton;
    QLabel *label_8;
    QLineEdit *pw;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *closeBtn;
    QLabel *label_4;
    QLabel *loginStatus;
    QPushButton *signUpBtn;
    QWidget *page_2;
    QLineEdit *id_2;
    QLineEdit *pw_2;
    QLabel *label_12;
    QTextBrowser *inforSV_2;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *closeBtn_2;
    QLabel *label_15;
    QPushButton *pushButton_2;
    QLineEdit *id_3;
    QLabel *loginStatus_2;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *id_4;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *pw_3;
    QPushButton *returnLoginBtn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1038, 764);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:#9ec2e6;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 0, 1021, 731));
        page = new QWidget();
        page->setObjectName("page");
        label_9 = new QLabel(page);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(120, 130, 401, 81));
        label_9->setStyleSheet(QString::fromUtf8("background-color: transparent;color:#fff;\n"
"font-family: Arial;\n"
"font-size: 58px;\n"
"font-weight:700;\n"
""));
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(630, 490, 291, 21));
        label_2->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgba(0,0,0,0.5);"));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(620, 150, 271, 51));
        label->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font-family: Arial;\n"
"font-size: 42px;\n"
"font-weight:700;\n"
"color:rgb(12, 5, 230)"));
        inforSV = new QTextBrowser(page);
        inforSV->setObjectName("inforSV");
        inforSV->setGeometry(QRect(90, 430, 471, 201));
        inforSV->setStyleSheet(QString::fromUtf8("background-color: transparent;color:#fff;\n"
"border: 0px;"));
        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(830, 390, 111, 28));
        label_3->setMaximumSize(QSize(171, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setUnderline(true);
        label_3->setFont(font);
        label_3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_3->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color:rgb(38, 49, 255) ;\n"
"font-family: Arial;\n"
""));
        id = new QLineEdit(page);
        id->setObjectName("id");
        id->setGeometry(QRect(620, 290, 301, 41));
        id->setStyleSheet(QString::fromUtf8("background-color: #e8f0fd;\n"
"border-radius: 2px;\n"
"border: 1px solid #000;"));
        label_10 = new QLabel(page);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(240, 240, 171, 171));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/new/img/img/images.jpg")));
        label_10->setScaledContents(true);
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(830, 430, 91, 31));
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:#4561ff;\n"
"font-weight: 700;\n"
"color: white;\n"
""));
        label_8 = new QLabel(page);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(620, 200, 171, 51));
        label_8->setMaximumSize(QSize(171, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setWeight(QFont::Thin);
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font-family: Arial;\n"
"font-size: 32px;\n"
"font-weight5700;\n"
""));
        pw = new QLineEdit(page);
        pw->setObjectName("pw");
        pw->setGeometry(QRect(620, 340, 301, 41));
        pw->setStyleSheet(QString::fromUtf8("background-color: #e8f0fd;\n"
"border-radius: 2px;\n"
"border: 1px solid #000;"));
        pw->setEchoMode(QLineEdit::EchoMode::Password);
        label_5 = new QLabel(page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(520, 60, 451, 621));
        label_5->setStyleSheet(QString::fromUtf8("background-color:#fff;\n"
"border-radius: 30px;"));
        label_6 = new QLabel(page);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(660, 530, 161, 28));
        label_6->setMaximumSize(QSize(171, 51));
        label_6->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font-family: Arial;\n"
"font-size: 18px;\n"
"font-weight:500;"));
        closeBtn = new QPushButton(page);
        closeBtn->setObjectName("closeBtn");
        closeBtn->setGeometry(QRect(730, 430, 91, 31));
        closeBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        closeBtn->setStyleSheet(QString::fromUtf8("background-color:#ccc;"));
        label_4 = new QLabel(page);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 60, 511, 621));
        label_4->setStyleSheet(QString::fromUtf8("background-color:qconicalgradient(cx:0, cy:0.022, angle:217.1, stop:0 rgba(0, 18, 180, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-radius: 30px;"));
        loginStatus = new QLabel(page);
        loginStatus->setObjectName("loginStatus");
        loginStatus->setGeometry(QRect(620, 390, 171, 21));
        loginStatus->setStyleSheet(QString::fromUtf8("background-color: transparent;color:red;"));
        signUpBtn = new QPushButton(page);
        signUpBtn->setObjectName("signUpBtn");
        signUpBtn->setGeometry(QRect(810, 530, 111, 30));
        signUpBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        signUpBtn->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color:rgb(38, 49, 255) ;\n"
"font-family: Arial;\n"
"font-size: 18px;\n"
"\n"
"border: none;"));
        stackedWidget->addWidget(page);
        label_5->raise();
        label_4->raise();
        label_9->raise();
        label_2->raise();
        label->raise();
        inforSV->raise();
        label_3->raise();
        id->raise();
        label_10->raise();
        pushButton->raise();
        label_8->raise();
        pw->raise();
        label_6->raise();
        closeBtn->raise();
        loginStatus->raise();
        signUpBtn->raise();
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        id_2 = new QLineEdit(page_2);
        id_2->setObjectName("id_2");
        id_2->setGeometry(QRect(620, 310, 121, 41));
        QFont font2;
        font2.setPointSize(10);
        id_2->setFont(font2);
        id_2->setFocusPolicy(Qt::FocusPolicy::WheelFocus);
        id_2->setStyleSheet(QString::fromUtf8("background-color: #e8f0fd;\n"
"border-radius: 2px;\n"
"border: 1px solid #000;\n"
"padding:5px;"));
        pw_2 = new QLineEdit(page_2);
        pw_2->setObjectName("pw_2");
        pw_2->setGeometry(QRect(620, 360, 301, 41));
        pw_2->setFont(font2);
        pw_2->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        pw_2->setStyleSheet(QString::fromUtf8("background-color: #e8f0fd;\n"
"border-radius: 2px;\n"
"border: 1px solid #000;\n"
"padding:5px;"));
        pw_2->setEchoMode(QLineEdit::EchoMode::Normal);
        label_12 = new QLabel(page_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(630, 530, 291, 21));
        label_12->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgba(0,0,0,0.5);"));
        inforSV_2 = new QTextBrowser(page_2);
        inforSV_2->setObjectName("inforSV_2");
        inforSV_2->setGeometry(QRect(90, 430, 471, 201));
        inforSV_2->setStyleSheet(QString::fromUtf8("background-color: transparent;color:#fff;\n"
"border: 0px;"));
        label_13 = new QLabel(page_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(60, 60, 511, 621));
        label_13->setStyleSheet(QString::fromUtf8("background-color:qconicalgradient(cx:0, cy:0.022, angle:217.1, stop:0 rgba(0, 18, 180, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-radius: 30px;"));
        label_14 = new QLabel(page_2);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(620, 130, 271, 51));
        label_14->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font-family: Arial;\n"
"font-size: 42px;\n"
"font-weight:700;\n"
"color:rgb(12, 5, 230)"));
        closeBtn_2 = new QPushButton(page_2);
        closeBtn_2->setObjectName("closeBtn_2");
        closeBtn_2->setGeometry(QRect(730, 480, 91, 31));
        closeBtn_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        closeBtn_2->setStyleSheet(QString::fromUtf8("background-color:#ccc;"));
        label_15 = new QLabel(page_2);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(240, 240, 171, 171));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/new/img/img/images.jpg")));
        label_15->setScaledContents(true);
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(830, 480, 91, 31));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        pushButton_2->setFont(font3);
        pushButton_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:#4561ff;\n"
"font-weight: 700;\n"
"color: white;\n"
""));
        id_3 = new QLineEdit(page_2);
        id_3->setObjectName("id_3");
        id_3->setGeometry(QRect(620, 260, 301, 41));
        id_3->setFont(font2);
        id_3->setStyleSheet(QString::fromUtf8("background-color: #e8f0fd;\n"
"border-radius: 2px;\n"
"border: 1px solid #000;\n"
"padding:5px;"));
        loginStatus_2 = new QLabel(page_2);
        loginStatus_2->setObjectName("loginStatus_2");
        loginStatus_2->setGeometry(QRect(620, 450, 221, 30));
        loginStatus_2->setStyleSheet(QString::fromUtf8("background-color: transparent;color:red;"));
        label_16 = new QLabel(page_2);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(620, 180, 271, 51));
        label_16->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font-family: Arial;\n"
"font-size: 22px;\n"
"\n"
""));
        label_17 = new QLabel(page_2);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(120, 130, 401, 81));
        label_17->setStyleSheet(QString::fromUtf8("background-color: transparent;color:#fff;\n"
"font-family: Arial;\n"
"font-size: 58px;\n"
"font-weight:700;\n"
""));
        id_4 = new QLineEdit(page_2);
        id_4->setObjectName("id_4");
        id_4->setGeometry(QRect(750, 310, 171, 41));
        id_4->setFont(font2);
        id_4->setStyleSheet(QString::fromUtf8("background-color: #e8f0fd;\n"
"border-radius: 2px;\n"
"border: 1px solid #000;\n"
"padding:5px;"));
        label_18 = new QLabel(page_2);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(520, 60, 451, 621));
        label_18->setStyleSheet(QString::fromUtf8("background-color:#fff;\n"
"border-radius: 30px;"));
        label_19 = new QLabel(page_2);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(660, 570, 161, 28));
        label_19->setMaximumSize(QSize(171, 51));
        label_19->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font-family: Arial;\n"
"font-size: 18px;\n"
"font-weight:500;"));
        pw_3 = new QLineEdit(page_2);
        pw_3->setObjectName("pw_3");
        pw_3->setGeometry(QRect(620, 410, 301, 41));
        pw_3->setFont(font2);
        pw_3->setStyleSheet(QString::fromUtf8("background-color: #e8f0fd;\n"
"border-radius: 2px;\n"
"border: 1px solid #000;\n"
"padding:5px;"));
        pw_3->setEchoMode(QLineEdit::EchoMode::Password);
        returnLoginBtn = new QPushButton(page_2);
        returnLoginBtn->setObjectName("returnLoginBtn");
        returnLoginBtn->setGeometry(QRect(790, 570, 111, 30));
        returnLoginBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        returnLoginBtn->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color:rgb(38, 49, 255) ;\n"
"font-family: Arial;\n"
"font-size: 18px;\n"
"\n"
"border: none;"));
        stackedWidget->addWidget(page_2);
        label_18->raise();
        label_13->raise();
        id_2->raise();
        pw_2->raise();
        label_12->raise();
        inforSV_2->raise();
        label_14->raise();
        closeBtn_2->raise();
        label_15->raise();
        pushButton_2->raise();
        id_3->raise();
        loginStatus_2->raise();
        label_16->raise();
        label_17->raise();
        id_4->raise();
        label_19->raise();
        pw_3->raise();
        returnLoginBtn->raise();
        MainWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(id, pw);
        QWidget::setTabOrder(pw, id_3);
        QWidget::setTabOrder(id_3, id_2);
        QWidget::setTabOrder(id_2, id_4);
        QWidget::setTabOrder(id_4, pw_2);
        QWidget::setTabOrder(pw_2, pw_3);
        QWidget::setTabOrder(pw_3, closeBtn_2);
        QWidget::setTabOrder(closeBtn_2, pushButton);
        QWidget::setTabOrder(pushButton, returnLoginBtn);
        QWidget::setTabOrder(returnLoginBtn, closeBtn);
        QWidget::setTabOrder(closeBtn, pushButton_2);
        QWidget::setTabOrder(pushButton_2, signUpBtn);
        QWidget::setTabOrder(signUpBtn, inforSV);
        QWidget::setTabOrder(inforSV, inforSV_2);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "ShopManager", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "--------------------------Ho\341\272\267c-------------------------", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Ch\303\240o M\341\273\253ng", nullptr));
        inforSV->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">PBL2: L\341\272\255p Tr\303\254nh H\306\260\341\273\233ng \304\220\341\273\221i T\306\260\341\273\243ng</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-righ"
                        "t:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">Sinh vi\303\252n:     Nguy\341\273\205n Qu\341\273\221c Duy         - 102230289</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">Sinh vi\303\252n:     Tr\341\272\247n T\303\242m Nh\306\260                - 102230311</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">GVHD: 	       Mai V\304\203n H\303\240</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Qu\303\252n m\341\272\255t kh\341\272\251u?", nullptr));
        id->setPlaceholderText(QCoreApplication::translate("MainWindow", "Nh\341\272\255p ID", nullptr));
        label_10->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "\304\220\304\203ng Nh\341\272\255p", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "tr\341\273\237 l\341\272\241i!", nullptr));
        pw->setPlaceholderText(QCoreApplication::translate("MainWindow", "Nh\341\272\255p M\341\272\255t Kh\341\272\251u", nullptr));
        label_5->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Ch\306\260a c\303\263 t\303\240i kho\341\272\243n? ", nullptr));
        closeBtn->setText(QCoreApplication::translate("MainWindow", "Tho\303\241t", nullptr));
        label_4->setText(QString());
        loginStatus->setText(QString());
        signUpBtn->setText(QCoreApplication::translate("MainWindow", "\304\220\304\203ng K\303\275", nullptr));
        id_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "S\341\273\221 \304\221i\341\273\207n tho\341\272\241i", nullptr));
        pw_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "--------------------------Ho\341\272\267c-------------------------", nullptr));
        inforSV_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">PBL2: L\341\272\255p Tr\303\254nh H\306\260\341\273\233ng \304\220\341\273\221i T\306\260\341\273\243ng</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-righ"
                        "t:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">Sinh vi\303\252n:     Nguy\341\273\205n Qu\341\273\221c Duy         - 102230289</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">Sinh vi\303\252n:     Tr\341\272\247n T\303\242m Nh\306\260                - 102230311</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">GVHD: 	       Mai V\304\203n H\303\240</span></p></body></html>", nullptr));
        label_13->setText(QString());
        label_14->setText(QCoreApplication::translate("MainWindow", "\304\220\304\203ng k\303\275", nullptr));
        closeBtn_2->setText(QCoreApplication::translate("MainWindow", "Tho\303\241t", nullptr));
        label_15->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\304\220\304\203ng K\303\275", nullptr));
        id_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "H\341\273\215 v\303\240 t\303\252n", nullptr));
        loginStatus_2->setText(QCoreApplication::translate("MainWindow", "C\303\241c tr\306\260\341\273\235ng kh\303\264ng \304\221\306\260\341\273\243c \304\221\341\273\203 Tr\341\273\221ng", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Kh\303\241ch H\303\240ng th\306\260\341\273\235ng xuy\303\252n", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "ShopManager", nullptr));
        id_4->setPlaceholderText(QCoreApplication::translate("MainWindow", "\304\220\341\273\213a ch\341\273\211", nullptr));
        label_18->setText(QString());
        label_19->setText(QCoreApplication::translate("MainWindow", "\304\220\303\243 c\303\263 t\303\240i kho\341\272\243n? ", nullptr));
        pw_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "M\341\272\255t kh\341\272\251u", nullptr));
        returnLoginBtn->setText(QCoreApplication::translate("MainWindow", "\304\220\304\203ng Nh\341\272\255p", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
