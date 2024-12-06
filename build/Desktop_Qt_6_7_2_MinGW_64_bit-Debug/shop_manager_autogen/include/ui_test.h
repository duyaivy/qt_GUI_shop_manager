/********************************************************************************
** Form generated from reading UI file 'test.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_H
#define UI_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *test)
    {
        if (test->objectName().isEmpty())
            test->setObjectName("test");
        test->resize(1142, 713);
        test->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        centralwidget = new QWidget(test);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(280, 120, 481, 351));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(236, 129, 255);"));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 60, 221, 51));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 4, 255);\n"
"background-color: #ccc;\n"
"border-radius: 10px;\n"
"border: 1px solid #000;;"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 250, 80, 24));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 4, 255);\n"
"background-color: #ccc;\n"
"\n"
""));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(220, 250, 80, 24));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(90, 130, 311, 41));
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(90, 180, 311, 41));
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Password);
        test->setCentralWidget(centralwidget);
        menubar = new QMenuBar(test);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1142, 21));
        test->setMenuBar(menubar);
        statusbar = new QStatusBar(test);
        statusbar->setObjectName("statusbar");
        test->setStatusBar(statusbar);

        retranslateUi(test);

        QMetaObject::connectSlotsByName(test);
    } // setupUi

    void retranslateUi(QMainWindow *test)
    {
        test->setWindowTitle(QCoreApplication::translate("test", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("test", "\304\220\304\203ng Nh\341\272\255p ", nullptr));
        pushButton->setText(QCoreApplication::translate("test", "\304\220\304\203ng nh\341\272\255p", nullptr));
        pushButton_2->setText(QCoreApplication::translate("test", "tr\341\273\237 l\341\272\241i", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("test", "T\303\252n \304\220\304\203ng nh\341\272\255p", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("test", "m\341\272\255t kh\341\272\251u", nullptr));
    } // retranslateUi

};

namespace Ui {
    class test: public Ui_test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_H
