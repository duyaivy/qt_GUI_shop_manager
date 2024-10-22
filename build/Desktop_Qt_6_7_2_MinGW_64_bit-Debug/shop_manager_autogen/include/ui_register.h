/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_register
{
public:
    QLabel *label_4;
    QTextBrowser *inforSV;
    QLineEdit *pw;
    QLabel *label_2;
    QLineEdit *id;
    QLabel *loginStatus;
    QLabel *label_10;
    QLabel *label;
    QPushButton *closeBtn;
    QPushButton *pushButton;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_3;
    QLabel *label_11;
    QLineEdit *pw_2;
    QLineEdit *pw_3;

    void setupUi(QDialog *register)
    {
        if (register->objectName().isEmpty())
            register->setObjectName("register");
        register->setStyleSheet(QString::fromUtf8("background-color:#9ec2e6;"));
        label_4 = new QLabel(register);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 50, 511, 621));
        label_4->setStyleSheet(QString::fromUtf8("background-color:qconicalgradient(cx:0, cy:0.022, angle:217.1, stop:0 rgba(0, 18, 180, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-radius: 30px;"));
        inforSV = new QTextBrowser(register);
        inforSV->setObjectName("inforSV");
        inforSV->setGeometry(QRect(120, 420, 471, 201));
        inforSV->setStyleSheet(QString::fromUtf8("background-color: transparent;color:#fff;\n"
"border: 0px;"));
        pw = new QLineEdit(register);
        pw->setObjectName("pw");
        pw->setGeometry(QRect(650, 340, 301, 41));
        pw->setStyleSheet(QString::fromUtf8("background-color: #e8f0fd;\n"
"border-radius: 2px;\n"
"border: 1px solid #000;"));
        pw->setEchoMode(QLineEdit::EchoMode::Password);
        label_2 = new QLabel(register);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(660, 480, 291, 21));
        label_2->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgba(0,0,0,0.5);"));
        id = new QLineEdit(register);
        id->setObjectName("id");
        id->setGeometry(QRect(650, 240, 301, 41));
        id->setStyleSheet(QString::fromUtf8("background-color: #e8f0fd;\n"
"border-radius: 2px;\n"
"border: 1px solid #000;"));
        loginStatus = new QLabel(register);
        loginStatus->setObjectName("loginStatus");
        loginStatus->setGeometry(QRect(650, 380, 171, 21));
        loginStatus->setStyleSheet(QString::fromUtf8("background-color: transparent;color:red;"));
        label_10 = new QLabel(register);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(250, 230, 171, 171));
        label_10->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Admin/Documents/pbl2/img/images.jpg")));
        label_10->setScaledContents(true);
        label = new QLabel(register);
        label->setObjectName("label");
        label->setGeometry(QRect(650, 140, 271, 51));
        label->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font-family: Arial;\n"
"font-size: 42px;\n"
"font-weight:700;\n"
"color:rgb(12, 5, 230)"));
        closeBtn = new QPushButton(register);
        closeBtn->setObjectName("closeBtn");
        closeBtn->setGeometry(QRect(760, 420, 91, 31));
        closeBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        closeBtn->setStyleSheet(QString::fromUtf8("background-color:#ccc;"));
        pushButton = new QPushButton(register);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(860, 420, 91, 31));
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:#4561ff;\n"
"font-weight: 700;\n"
"color: white;\n"
""));
        label_6 = new QLabel(register);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(690, 520, 161, 28));
        label_6->setMaximumSize(QSize(171, 51));
        label_6->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font-family: Arial;\n"
"font-size: 18px;\n"
"font-weight:500;"));
        label_7 = new QLabel(register);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(830, 520, 111, 28));
        label_7->setMaximumSize(QSize(171, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setUnderline(true);
        label_7->setFont(font);
        label_7->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_7->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color:rgb(38, 49, 255) ;\n"
"font-family: Arial;\n"
"font-size: 18px;\n"
"\n"
""));
        label_5 = new QLabel(register);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(550, 50, 451, 621));
        label_5->setStyleSheet(QString::fromUtf8("background-color:#f4f4f4;\n"
"border-radius: 30px;"));
        label_9 = new QLabel(register);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(150, 120, 401, 81));
        label_9->setStyleSheet(QString::fromUtf8("background-color: transparent;color:#fff;\n"
"font-family: Arial;\n"
"font-size: 58px;\n"
"font-weight:700;\n"
""));
        label_3 = new QLabel(register);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(860, 380, 111, 28));
        label_3->setMaximumSize(QSize(171, 51));
        label_3->setFont(font);
        label_3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_3->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color:rgb(38, 49, 255) ;\n"
"font-family: Arial;\n"
""));
        label_11 = new QLabel(register);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(650, 180, 271, 51));
        label_11->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font-family: Arial;\n"
"font-size: 20px;\n"
"\n"
""));
        pw_2 = new QLineEdit(register);
        pw_2->setObjectName("pw_2");
        pw_2->setGeometry(QRect(650, 290, 141, 41));
        pw_2->setStyleSheet(QString::fromUtf8("background-color: #e8f0fd;\n"
"border-radius: 2px;\n"
"border: 1px solid #000;"));
        pw_2->setEchoMode(QLineEdit::EchoMode::Password);
        pw_3 = new QLineEdit(register);
        pw_3->setObjectName("pw_3");
        pw_3->setGeometry(QRect(800, 290, 151, 41));
        pw_3->setStyleSheet(QString::fromUtf8("background-color: #e8f0fd;\n"
"border-radius: 2px;\n"
"border: 1px solid #000;"));
        pw_3->setEchoMode(QLineEdit::EchoMode::Password);
        label_5->raise();
        label_4->raise();
        inforSV->raise();
        pw->raise();
        label_2->raise();
        id->raise();
        loginStatus->raise();
        label_10->raise();
        label->raise();
        closeBtn->raise();
        pushButton->raise();
        label_6->raise();
        label_7->raise();
        label_9->raise();
        label_3->raise();
        label_11->raise();
        pw_2->raise();
        pw_3->raise();

        retranslateUi(register);

        QMetaObject::connectSlotsByName(register);
    } // setupUi

    void retranslateUi(QDialog *register)
    {
        register->setWindowTitle(QCoreApplication::translate("register", "Dialog", nullptr));
        label_4->setText(QString());
        inforSV->setHtml(QCoreApplication::translate("register", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
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
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">Sinh vi\303\252n:     Tr\341\272\247n T\303\242m Nh\306\260                - 1022303xx</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">GVHD: 	       Ng\303\264 V\304\203n H\303\240</span></p></body></html>", nullptr));
        pw->setPlaceholderText(QCoreApplication::translate("register", "M\341\272\255t kh\341\272\251u", nullptr));
        label_2->setText(QCoreApplication::translate("register", "--------------------------Ho\341\272\267c-------------------------", nullptr));
        id->setPlaceholderText(QCoreApplication::translate("register", "H\341\273\215 v\303\240 t\303\252n", nullptr));
        loginStatus->setText(QString());
        label_10->setText(QString());
        label->setText(QCoreApplication::translate("register", "\304\220\304\203ng k\303\275 ", nullptr));
        closeBtn->setText(QCoreApplication::translate("register", "Tho\303\241t", nullptr));
        pushButton->setText(QCoreApplication::translate("register", "\304\220\304\203ng K\303\275", nullptr));
        label_6->setText(QCoreApplication::translate("register", "\304\220\303\243 c\303\263 t\303\240i kho\341\272\243n? ", nullptr));
        label_7->setText(QCoreApplication::translate("register", "\304\220\304\203ng nh\341\272\255p", nullptr));
        label_5->setText(QString());
        label_9->setText(QCoreApplication::translate("register", "ShopManager", nullptr));
        label_3->setText(QCoreApplication::translate("register", "Qu\303\252n m\341\272\255t kh\341\272\251u?", nullptr));
        label_11->setText(QCoreApplication::translate("register", "Kh\303\241ch h\303\240ng th\303\240nh vi\303\252n", nullptr));
        pw_2->setPlaceholderText(QCoreApplication::translate("register", "S\341\273\221 \304\221i\341\273\207n tho\341\272\241i", nullptr));
        pw_3->setPlaceholderText(QCoreApplication::translate("register", "Email", nullptr));
    } // retranslateUi

};

namespace Ui {
    class register: public Ui_register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
