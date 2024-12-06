/********************************************************************************
** Form generated from reading UI file 'modalview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODALVIEW_H
#define UI_MODALVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modalView
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *addStaffW;
    QWidget *widget;
    QPushButton *handAdd;
    QPushButton *fileAdd;
    QStackedWidget *addStaffWitget;
    QWidget *page_3;
    QPushButton *saveBtn;
    QPushButton *cancelBtn;
    QLabel *phoneLabel;
    QLabel *countryLabel_2;
    QLineEdit *re_passwordLB;
    QLineEdit *passwordLb;
    QLabel *passLabel;
    QLineEdit *phoneLb;
    QLabel *nameLabel;
    QLabel *passLabel_2;
    QLabel *label_4;
    QLabel *country_Lb_2;
    QLabel *addressLabel;
    QLabel *emailLabel;
    QLineEdit *emaiLb;
    QLabel *label_9;
    QLineEdit *dayLb;
    QLabel *countryLabel;
    QLineEdit *nameLb;
    QLabel *statusAdd;
    QLabel *country_Lb_3;
    QWidget *page_4;
    QWidget *widget_2;
    QLabel *label_10;
    QPushButton *cancelBtn_3;
    QPushButton *addBtn;
    QPushButton *choseBtn;
    QTextBrowser *textBrowser;
    QWidget *page_5;
    QWidget *seeInforW;
    QWidget *widget_4;
    QPushButton *viewBtn;
    QPushButton *updateBtn;
    QPushButton *delBtn;
    QStackedWidget *inforWidget;
    QWidget *view;
    QWidget *viewInfor;
    QLabel *avtLabel;
    QLabel *name;
    QLabel *phone;
    QPushButton *updateBtn_2;
    QLabel *emailLB;
    QLabel *emailText;
    QLabel *changeText;
    QLabel *changeLabel;
    QLabel *passLb_4;
    QLabel *idLabel_3;
    QLabel *idLabel_4;
    QLineEdit *lineEdit;
    QLabel *idLabel_5;
    QLabel *idLabel_6;
    QTableView *tableViewInvoice;
    QTableView *tableViewCart;
    QPushButton *updateBtn_3;
    QWidget *update;
    QWidget *updateInfor;
    QLabel *nameLabel_2;
    QPushButton *saveBtn_2;
    QLineEdit *repassUpdate;
    QLineEdit *emailUpdate;
    QLineEdit *nameUpdate;
    QPushButton *cancelBtn_2;
    QLabel *passLabel_3;
    QLabel *label_11;
    QLabel *emailLabel_2;
    QLabel *phoneLabel_2;
    QLabel *statusUpdate;
    QLineEdit *phoneUpdate;
    QLineEdit *changeUpdate;
    QLabel *changeUpdateLabel;
    QLineEdit *passUpdate;
    QLabel *passLabel_5;
    QWidget *page;
    QWidget *invoice;

    void setupUi(QMainWindow *modalView)
    {
        if (modalView->objectName().isEmpty())
            modalView->setObjectName("modalView");
        modalView->resize(1015, 703);
        centralwidget = new QWidget(modalView);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 1011, 701));
        addStaffW = new QWidget();
        addStaffW->setObjectName("addStaffW");
        widget = new QWidget(addStaffW);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 10, 971, 51));
        widget->setStyleSheet(QString::fromUtf8("background-color: #E7EDFF;\n"
""));
        handAdd = new QPushButton(widget);
        handAdd->setObjectName("handAdd");
        handAdd->setGeometry(QRect(0, 0, 141, 51));
        QFont font;
        font.setPointSize(12);
        font.setWeight(QFont::DemiBold);
        handAdd->setFont(font);
        handAdd->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        handAdd->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color:transparent;\n"
"color: #000;\n"
"border-bottom: 5px solid #396AFF;\n"
"font-weight:600;"));
        fileAdd = new QPushButton(widget);
        fileAdd->setObjectName("fileAdd");
        fileAdd->setGeometry(QRect(140, 0, 141, 51));
        QFont font1;
        font1.setPointSize(12);
        fileAdd->setFont(font1);
        fileAdd->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        fileAdd->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color:transparent;\n"
"color: #000;\n"
""));
        addStaffWitget = new QStackedWidget(addStaffW);
        addStaffWitget->setObjectName("addStaffWitget");
        addStaffWitget->setGeometry(QRect(20, 60, 971, 621));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        saveBtn = new QPushButton(page_3);
        saveBtn->setObjectName("saveBtn");
        saveBtn->setGeometry(QRect(520, 520, 141, 41));
        saveBtn->setFont(font1);
        saveBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        saveBtn->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: #f7f7f7;\n"
"border:none;\n"
"background-color: rgb(55, 3, 225);\n"
"text-align: left;\n"
"padding-left: 30px;\n"
"padding-right: 5px;\n"
"color: #fff;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/img/img/confirm.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        saveBtn->setIcon(icon);
        saveBtn->setIconSize(QSize(23, 23));
        cancelBtn = new QPushButton(page_3);
        cancelBtn->setObjectName("cancelBtn");
        cancelBtn->setGeometry(QRect(420, 520, 91, 41));
        cancelBtn->setFont(font1);
        cancelBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        cancelBtn->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color:rgb(255, 46, 49);\n"
"border:none;\n"
"padding-left: 13px;\n"
"text-align: left;\n"
"\n"
"color: #fff;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/img/img/cancel.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cancelBtn->setIcon(icon1);
        cancelBtn->setIconSize(QSize(26, 26));
        phoneLabel = new QLabel(page_3);
        phoneLabel->setObjectName("phoneLabel");
        phoneLabel->setGeometry(QRect(260, 250, 101, 21));
        QFont font2;
        font2.setPointSize(11);
        font2.setWeight(QFont::DemiBold);
        phoneLabel->setFont(font2);
        phoneLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        countryLabel_2 = new QLabel(page_3);
        countryLabel_2->setObjectName("countryLabel_2");
        countryLabel_2->setGeometry(QRect(260, 330, 81, 21));
        countryLabel_2->setFont(font2);
        countryLabel_2->setStyleSheet(QString::fromUtf8("color: black;"));
        re_passwordLB = new QLineEdit(page_3);
        re_passwordLB->setObjectName("re_passwordLB");
        re_passwordLB->setGeometry(QRect(470, 440, 191, 41));
        re_passwordLB->setFont(font1);
        re_passwordLB->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        re_passwordLB->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;background-color: #fff;"));
        re_passwordLB->setEchoMode(QLineEdit::EchoMode::Password);
        passwordLb = new QLineEdit(page_3);
        passwordLb->setObjectName("passwordLb");
        passwordLb->setGeometry(QRect(260, 440, 191, 41));
        passwordLb->setFont(font1);
        passwordLb->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        passwordLb->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;background-color: #fff;"));
        passwordLb->setEchoMode(QLineEdit::EchoMode::Password);
        passLabel = new QLabel(page_3);
        passLabel->setObjectName("passLabel");
        passLabel->setGeometry(QRect(260, 410, 81, 21));
        passLabel->setFont(font2);
        passLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        phoneLb = new QLineEdit(page_3);
        phoneLb->setObjectName("phoneLb");
        phoneLb->setGeometry(QRect(260, 280, 191, 41));
        phoneLb->setFont(font1);
        phoneLb->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        phoneLb->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;\n"
"background-color: #fff;"));
        nameLabel = new QLabel(page_3);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(260, 90, 81, 21));
        nameLabel->setFont(font2);
        nameLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        passLabel_2 = new QLabel(page_3);
        passLabel_2->setObjectName("passLabel_2");
        passLabel_2->setGeometry(QRect(470, 410, 181, 21));
        passLabel_2->setFont(font2);
        passLabel_2->setStyleSheet(QString::fromUtf8("color: black;"));
        label_4 = new QLabel(page_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(220, 30, 491, 581));
        label_4->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 30px;\n"
""));
        country_Lb_2 = new QLabel(page_3);
        country_Lb_2->setObjectName("country_Lb_2");
        country_Lb_2->setGeometry(QRect(260, 360, 191, 41));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(false);
        country_Lb_2->setFont(font3);
        country_Lb_2->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        country_Lb_2->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;\n"
"color:black;"));
        addressLabel = new QLabel(page_3);
        addressLabel->setObjectName("addressLabel");
        addressLabel->setGeometry(QRect(460, 330, 81, 21));
        addressLabel->setFont(font2);
        addressLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        emailLabel = new QLabel(page_3);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setGeometry(QRect(260, 170, 81, 21));
        emailLabel->setFont(font2);
        emailLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        emaiLb = new QLineEdit(page_3);
        emaiLb->setObjectName("emaiLb");
        emaiLb->setGeometry(QRect(260, 200, 401, 41));
        emaiLb->setFont(font1);
        emaiLb->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        emaiLb->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;\n"
"background-color: #fff;"));
        label_9 = new QLabel(page_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(380, 50, 231, 41));
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(true);
        label_9->setFont(font4);
        label_9->setStyleSheet(QString::fromUtf8("color: blue;\n"
""));
        dayLb = new QLineEdit(page_3);
        dayLb->setObjectName("dayLb");
        dayLb->setGeometry(QRect(470, 280, 191, 41));
        QFont font5;
        font5.setPointSize(11);
        dayLb->setFont(font5);
        dayLb->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        dayLb->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;\n"
"background-color: #fff;"));
        countryLabel = new QLabel(page_3);
        countryLabel->setObjectName("countryLabel");
        countryLabel->setGeometry(QRect(470, 250, 141, 21));
        countryLabel->setFont(font2);
        countryLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        nameLb = new QLineEdit(page_3);
        nameLb->setObjectName("nameLb");
        nameLb->setGeometry(QRect(260, 120, 401, 41));
        nameLb->setFont(font1);
        nameLb->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        nameLb->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;\n"
"background-color: #fff;"));
        statusAdd = new QLabel(page_3);
        statusAdd->setObjectName("statusAdd");
        statusAdd->setGeometry(QRect(260, 480, 341, 31));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(true);
        statusAdd->setFont(font6);
        statusAdd->setStyleSheet(QString::fromUtf8("color: red;"));
        country_Lb_3 = new QLabel(page_3);
        country_Lb_3->setObjectName("country_Lb_3");
        country_Lb_3->setGeometry(QRect(470, 360, 191, 41));
        country_Lb_3->setFont(font3);
        country_Lb_3->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        country_Lb_3->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;\n"
"color:black;"));
        addStaffWitget->addWidget(page_3);
        label_4->raise();
        saveBtn->raise();
        cancelBtn->raise();
        phoneLabel->raise();
        countryLabel_2->raise();
        re_passwordLB->raise();
        passwordLb->raise();
        passLabel->raise();
        phoneLb->raise();
        nameLabel->raise();
        passLabel_2->raise();
        country_Lb_2->raise();
        addressLabel->raise();
        emailLabel->raise();
        emaiLb->raise();
        label_9->raise();
        dayLb->raise();
        countryLabel->raise();
        nameLb->raise();
        statusAdd->raise();
        country_Lb_3->raise();
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        widget_2 = new QWidget(page_4);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(0, 0, 971, 621));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-bottom-left-radius: 30px;\n"
"border-bottom-right-radius: 30px;"));
        label_10 = new QLabel(widget_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(380, 20, 231, 41));
        label_10->setFont(font4);
        label_10->setStyleSheet(QString::fromUtf8("color: blue;\n"
""));
        cancelBtn_3 = new QPushButton(widget_2);
        cancelBtn_3->setObjectName("cancelBtn_3");
        cancelBtn_3->setGeometry(QRect(510, 520, 91, 41));
        cancelBtn_3->setFont(font1);
        cancelBtn_3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        cancelBtn_3->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color:rgb(255, 46, 49);\n"
"border:none;\n"
"padding-left: 13px;\n"
"text-align: left;\n"
"\n"
"color: #fff;"));
        cancelBtn_3->setIcon(icon1);
        cancelBtn_3->setIconSize(QSize(26, 26));
        addBtn = new QPushButton(widget_2);
        addBtn->setObjectName("addBtn");
        addBtn->setGeometry(QRect(750, 520, 131, 41));
        addBtn->setFont(font1);
        addBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        addBtn->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: #f7f7f7;\n"
"border:none;\n"
"background-color: rgb(55, 3, 225);\n"
"text-align: left;\n"
"padding-left: 30px;\n"
"padding-right: 5px;\n"
"color: #fff;"));
        addBtn->setIcon(icon);
        addBtn->setIconSize(QSize(23, 23));
        choseBtn = new QPushButton(widget_2);
        choseBtn->setObjectName("choseBtn");
        choseBtn->setGeometry(QRect(610, 520, 131, 41));
        choseBtn->setFont(font1);
        choseBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        choseBtn->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: #f7f7f7;\n"
"border:none;\n"
"background-color: rgb(55, 3, 225);\n"
"text-align: left;\n"
"padding-left: 20px;\n"
"padding-right: 5px;\n"
"color: #fff;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/img/img/folder.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        choseBtn->setIcon(icon2);
        choseBtn->setIconSize(QSize(23, 23));
        textBrowser = new QTextBrowser(widget_2);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(90, 90, 791, 391));
        QFont font7;
        font7.setPointSize(9);
        textBrowser->setFont(font7);
        textBrowser->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::IBeamCursor)));
        textBrowser->setStyleSheet(QString::fromUtf8("padding:20px 40px 20px 40px;\n"
"background-color:transparent;\n"
"border:1px solid #ccc;\n"
"border-radius:10px;"));
        addStaffWitget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        addStaffWitget->addWidget(page_5);
        stackedWidget->addWidget(addStaffW);
        seeInforW = new QWidget();
        seeInforW->setObjectName("seeInforW");
        widget_4 = new QWidget(seeInforW);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(20, 10, 971, 51));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: #E7EDFF;\n"
""));
        viewBtn = new QPushButton(widget_4);
        viewBtn->setObjectName("viewBtn");
        viewBtn->setGeometry(QRect(0, 0, 141, 51));
        QFont font8;
        font8.setPointSize(12);
        font8.setBold(false);
        font8.setUnderline(false);
        font8.setKerning(true);
        viewBtn->setFont(font8);
        viewBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        viewBtn->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color:transparent;\n"
"color: #000;\n"
"border-bottom: 5px solid #396AFF;\n"
""));
        updateBtn = new QPushButton(widget_4);
        updateBtn->setObjectName("updateBtn");
        updateBtn->setGeometry(QRect(140, 0, 141, 51));
        QFont font9;
        font9.setPointSize(12);
        font9.setWeight(QFont::Medium);
        updateBtn->setFont(font9);
        updateBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        updateBtn->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color:transparent;\n"
"color: #000;\n"
""));
        delBtn = new QPushButton(widget_4);
        delBtn->setObjectName("delBtn");
        delBtn->setGeometry(QRect(280, 0, 141, 51));
        delBtn->setFont(font1);
        delBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        delBtn->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color:transparent;\n"
"color: #000;\n"
""));
        inforWidget = new QStackedWidget(seeInforW);
        inforWidget->setObjectName("inforWidget");
        inforWidget->setGeometry(QRect(20, 60, 971, 641));
        view = new QWidget();
        view->setObjectName("view");
        viewInfor = new QWidget(view);
        viewInfor->setObjectName("viewInfor");
        viewInfor->setGeometry(QRect(0, 0, 971, 621));
        viewInfor->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-bottom-left-radius: 30px;\n"
"border-bottom-right-radius: 30px;"));
        avtLabel = new QLabel(viewInfor);
        avtLabel->setObjectName("avtLabel");
        avtLabel->setGeometry(QRect(60, 20, 131, 131));
        avtLabel->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: transparent;\n"
"border:none;\n"
"overflow: hidden;"));
        avtLabel->setPixmap(QPixmap(QString::fromUtf8(":/new/img/img/profile_2.PNG")));
        avtLabel->setScaledContents(true);
        name = new QLabel(viewInfor);
        name->setObjectName("name");
        name->setGeometry(QRect(220, 50, 451, 51));
        QFont font10;
        font10.setFamilies({QString::fromUtf8("Segoe UI")});
        font10.setPointSize(22);
        font10.setWeight(QFont::DemiBold);
        name->setFont(font10);
        name->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: #000;\n"
""));
        phone = new QLabel(viewInfor);
        phone->setObjectName("phone");
        phone->setGeometry(QRect(220, 90, 311, 51));
        QFont font11;
        font11.setFamilies({QString::fromUtf8("Segoe UI")});
        font11.setPointSize(16);
        font11.setBold(false);
        phone->setFont(font11);
        phone->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: #000;\n"
""));
        updateBtn_2 = new QPushButton(viewInfor);
        updateBtn_2->setObjectName("updateBtn_2");
        updateBtn_2->setGeometry(QRect(760, 50, 141, 51));
        QFont font12;
        font12.setPointSize(13);
        updateBtn_2->setFont(font12);
        updateBtn_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        updateBtn_2->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: #396AFF;\n"
"color: #fff;\n"
"/*padding-left: 10px;/*"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/img/img/pencil.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        updateBtn_2->setIcon(icon3);
        updateBtn_2->setIconSize(QSize(20, 20));
        updateBtn_2->setCheckable(false);
        updateBtn_2->setFlat(false);
        emailLB = new QLabel(viewInfor);
        emailLB->setObjectName("emailLB");
        emailLB->setGeometry(QRect(60, 170, 111, 21));
        emailLB->setFont(font2);
        emailLB->setStyleSheet(QString::fromUtf8("color: black;"));
        emailText = new QLabel(viewInfor);
        emailText->setObjectName("emailText");
        emailText->setGeometry(QRect(60, 200, 371, 31));
        QFont font13;
        font13.setPointSize(11);
        font13.setBold(false);
        emailText->setFont(font13);
        emailText->setStyleSheet(QString::fromUtf8("border-radius: 2px;\n"
"background-color: #f9f9f9;\n"
"border: none;\n"
"padding-left: 20px;\n"
"color:black;"));
        changeText = new QLabel(viewInfor);
        changeText->setObjectName("changeText");
        changeText->setGeometry(QRect(500, 200, 371, 31));
        changeText->setFont(font13);
        changeText->setStyleSheet(QString::fromUtf8("border-radius: 2px;\n"
"background-color: #f9f9f9;\n"
"border: none;\n"
"padding-left: 20px;\n"
"color:black;"));
        changeLabel = new QLabel(viewInfor);
        changeLabel->setObjectName("changeLabel");
        changeLabel->setGeometry(QRect(500, 170, 111, 21));
        changeLabel->setFont(font2);
        changeLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        passLb_4 = new QLabel(viewInfor);
        passLb_4->setObjectName("passLb_4");
        passLb_4->setGeometry(QRect(500, 270, 371, 31));
        passLb_4->setFont(font13);
        passLb_4->setStyleSheet(QString::fromUtf8("border-radius: 2px;\n"
"background-color: #f9f9f9;\n"
"border: none;\n"
"padding-left: 20px;\n"
"color:black;"));
        idLabel_3 = new QLabel(viewInfor);
        idLabel_3->setObjectName("idLabel_3");
        idLabel_3->setGeometry(QRect(60, 240, 111, 21));
        idLabel_3->setFont(font2);
        idLabel_3->setStyleSheet(QString::fromUtf8("color: black;"));
        idLabel_4 = new QLabel(viewInfor);
        idLabel_4->setObjectName("idLabel_4");
        idLabel_4->setGeometry(QRect(500, 240, 111, 21));
        idLabel_4->setFont(font2);
        idLabel_4->setStyleSheet(QString::fromUtf8("color: black;"));
        lineEdit = new QLineEdit(viewInfor);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(60, 270, 371, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("border-radius: 2px;\n"
"background-color: #f9f9f9;\n"
"border: none;\n"
"padding-left: 20px;\n"
"color:black;"));
        lineEdit->setEchoMode(QLineEdit::EchoMode::Password);
        lineEdit->setReadOnly(true);
        idLabel_5 = new QLabel(viewInfor);
        idLabel_5->setObjectName("idLabel_5");
        idLabel_5->setGeometry(QRect(60, 310, 111, 21));
        idLabel_5->setFont(font2);
        idLabel_5->setStyleSheet(QString::fromUtf8("color: black;"));
        idLabel_6 = new QLabel(viewInfor);
        idLabel_6->setObjectName("idLabel_6");
        idLabel_6->setGeometry(QRect(500, 310, 111, 21));
        idLabel_6->setFont(font2);
        idLabel_6->setStyleSheet(QString::fromUtf8("color: black;"));
        tableViewInvoice = new QTableView(viewInfor);
        tableViewInvoice->setObjectName("tableViewInvoice");
        tableViewInvoice->setGeometry(QRect(60, 340, 401, 271));
        tableViewInvoice->setStyleSheet(QString::fromUtf8("QTableWidget\n"
"{\n"
"color:red; \n"
"gridline-color:black;\n"
" selection-color:green;\n"
"font: 700 15pt  \"Arial\"; \n"
"selection-background-color:blue;\n"
"\n"
"}\n"
"QTableWidget::item:selected\n"
"{\n"
"color:white;\n"
"background-color:blue;\n"
"}\n"
"\n"
"QHeaderView\n"
"{\n"
"border:none;\n"
"font: 500 \"Arial\";\n"
"color:blue;\n"
"\n"
"}\n"
"QHeaderView::section\n"
"{\n"
"border: none;\n"
"font: 500 16px \"Arial\";\n"
"color:#718EBF;\n"
"background-color: white;\n"
"padding: 10px 10px;\n"
"\n"
"}\n"
"QTableView::item {\n"
"    background-color: white;              \n"
"    color:232323;        \n"
"	padding:15px 20px;     \n"
" 	border-left: none;          \n"
"    border-right: none;         \n"
"    border-top: 1px solid #E6EFF5;        \n"
"}\n"
"QTableView::item:selected {\n"
"    background-color:#95a1ff;     \n"
"    color: white;                        \n"
"}\n"
"QScrollBar:horizonta , QScrollBar:vertical { height: 0px; width: 0px; }"));
        tableViewInvoice->setShowGrid(true);
        tableViewInvoice->verticalHeader()->setVisible(true);
        tableViewCart = new QTableView(viewInfor);
        tableViewCart->setObjectName("tableViewCart");
        tableViewCart->setGeometry(QRect(500, 340, 401, 271));
        tableViewCart->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget\n"
"{\n"
"color:red; \n"
"gridline-color:black;\n"
" selection-color:green;\n"
"font: 700 15pt  \"Arial\"; \n"
"selection-background-color:blue;\n"
"\n"
"}\n"
"QTableWidget::item:selected\n"
"{\n"
"color:white;\n"
"background-color:blue;\n"
"}\n"
"\n"
"QHeaderView\n"
"{\n"
"border:none;\n"
"font: 500 \"Arial\";\n"
"color:blue;\n"
"border: none;\n"
"}\n"
"QHeaderView::section\n"
"{\n"
"border: none;\n"
"font: 500 16px \"Arial\";\n"
"color:#718EBF;\n"
"background-color: white;\n"
"padding: 10px 10px;\n"
"\n"
"}\n"
"QTableView::item {\n"
"    background-color: white;              \n"
"    color:232323;        \n"
"	padding:15px 20px;     \n"
" 	border-left: none;          \n"
"    border-right: none;         \n"
"    border-top: 1px solid #E6EFF5;        \n"
"}\n"
"QTableView::item:selected {\n"
"    background-color:#95a1ff;     \n"
"    color: white;                        \n"
"}\n"
"QScrollBar:horizonta { height: 0px; width: 0px; }"));
        updateBtn_3 = new QPushButton(viewInfor);
        updateBtn_3->setObjectName("updateBtn_3");
        updateBtn_3->setGeometry(QRect(760, 110, 141, 31));
        updateBtn_3->setFont(font12);
        updateBtn_3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        updateBtn_3->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(255, 67, 67);\n"
"color: #fff;\n"
""));
        updateBtn_3->setIcon(icon1);
        updateBtn_3->setIconSize(QSize(20, 20));
        updateBtn_3->setCheckable(false);
        updateBtn_3->setFlat(false);
        inforWidget->addWidget(view);
        update = new QWidget();
        update->setObjectName("update");
        updateInfor = new QWidget(update);
        updateInfor->setObjectName("updateInfor");
        updateInfor->setGeometry(QRect(0, 0, 971, 621));
        updateInfor->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-bottom-left-radius: 30px;\n"
"border-bottom-right-radius: 30px;"));
        nameLabel_2 = new QLabel(updateInfor);
        nameLabel_2->setObjectName("nameLabel_2");
        nameLabel_2->setGeometry(QRect(290, 100, 81, 21));
        nameLabel_2->setFont(font2);
        nameLabel_2->setStyleSheet(QString::fromUtf8("color: black;"));
        saveBtn_2 = new QPushButton(updateInfor);
        saveBtn_2->setObjectName("saveBtn_2");
        saveBtn_2->setGeometry(QRect(550, 470, 141, 41));
        saveBtn_2->setFont(font1);
        saveBtn_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        saveBtn_2->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: #f7f7f7;\n"
"border:none;\n"
"background-color: rgb(55, 3, 225);\n"
"text-align: left;\n"
"padding-left: 20px;\n"
"padding-right: 5px;\n"
"color: #fff;"));
        saveBtn_2->setIcon(icon);
        saveBtn_2->setIconSize(QSize(23, 23));
        repassUpdate = new QLineEdit(updateInfor);
        repassUpdate->setObjectName("repassUpdate");
        repassUpdate->setGeometry(QRect(500, 290, 191, 41));
        repassUpdate->setFont(font1);
        repassUpdate->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        repassUpdate->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;background-color: #fff;"));
        repassUpdate->setEchoMode(QLineEdit::EchoMode::Password);
        emailUpdate = new QLineEdit(updateInfor);
        emailUpdate->setObjectName("emailUpdate");
        emailUpdate->setGeometry(QRect(290, 210, 191, 41));
        emailUpdate->setFont(font1);
        emailUpdate->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        emailUpdate->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;\n"
"background-color: #fff;"));
        nameUpdate = new QLineEdit(updateInfor);
        nameUpdate->setObjectName("nameUpdate");
        nameUpdate->setGeometry(QRect(290, 130, 401, 41));
        nameUpdate->setFont(font1);
        nameUpdate->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        nameUpdate->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;\n"
"background-color: #fff;"));
        cancelBtn_2 = new QPushButton(updateInfor);
        cancelBtn_2->setObjectName("cancelBtn_2");
        cancelBtn_2->setGeometry(QRect(450, 470, 91, 41));
        cancelBtn_2->setFont(font1);
        cancelBtn_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        cancelBtn_2->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color:rgb(255, 46, 49);\n"
"border:none;\n"
"padding-left: 13px;\n"
"text-align: left;\n"
"\n"
"color: #fff;"));
        cancelBtn_2->setIcon(icon1);
        cancelBtn_2->setIconSize(QSize(26, 26));
        passLabel_3 = new QLabel(updateInfor);
        passLabel_3->setObjectName("passLabel_3");
        passLabel_3->setGeometry(QRect(500, 260, 141, 21));
        passLabel_3->setFont(font2);
        passLabel_3->setStyleSheet(QString::fromUtf8("color: black;"));
        label_11 = new QLabel(updateInfor);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(390, 50, 231, 41));
        label_11->setFont(font4);
        label_11->setStyleSheet(QString::fromUtf8("color: blue;\n"
""));
        emailLabel_2 = new QLabel(updateInfor);
        emailLabel_2->setObjectName("emailLabel_2");
        emailLabel_2->setGeometry(QRect(290, 180, 81, 21));
        emailLabel_2->setFont(font2);
        emailLabel_2->setStyleSheet(QString::fromUtf8("color: black;"));
        phoneLabel_2 = new QLabel(updateInfor);
        phoneLabel_2->setObjectName("phoneLabel_2");
        phoneLabel_2->setGeometry(QRect(500, 180, 101, 21));
        phoneLabel_2->setFont(font2);
        phoneLabel_2->setStyleSheet(QString::fromUtf8("color: black;"));
        statusUpdate = new QLabel(updateInfor);
        statusUpdate->setObjectName("statusUpdate");
        statusUpdate->setGeometry(QRect(290, 420, 341, 31));
        statusUpdate->setFont(font6);
        statusUpdate->setStyleSheet(QString::fromUtf8("color: red;"));
        phoneUpdate = new QLineEdit(updateInfor);
        phoneUpdate->setObjectName("phoneUpdate");
        phoneUpdate->setGeometry(QRect(500, 210, 191, 41));
        phoneUpdate->setFont(font1);
        phoneUpdate->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        phoneUpdate->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;\n"
"background-color: #fff;"));
        changeUpdate = new QLineEdit(updateInfor);
        changeUpdate->setObjectName("changeUpdate");
        changeUpdate->setGeometry(QRect(290, 370, 401, 41));
        changeUpdate->setFont(font1);
        changeUpdate->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        changeUpdate->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;\n"
"background-color: #fff;"));
        changeUpdateLabel = new QLabel(updateInfor);
        changeUpdateLabel->setObjectName("changeUpdateLabel");
        changeUpdateLabel->setGeometry(QRect(290, 340, 161, 21));
        changeUpdateLabel->setFont(font2);
        changeUpdateLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        passUpdate = new QLineEdit(updateInfor);
        passUpdate->setObjectName("passUpdate");
        passUpdate->setGeometry(QRect(290, 290, 191, 41));
        passUpdate->setFont(font1);
        passUpdate->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        passUpdate->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;background-color: #fff;"));
        passUpdate->setEchoMode(QLineEdit::EchoMode::Password);
        passLabel_5 = new QLabel(updateInfor);
        passLabel_5->setObjectName("passLabel_5");
        passLabel_5->setGeometry(QRect(290, 260, 81, 21));
        passLabel_5->setFont(font2);
        passLabel_5->setStyleSheet(QString::fromUtf8("color: black;"));
        inforWidget->addWidget(update);
        page = new QWidget();
        page->setObjectName("page");
        inforWidget->addWidget(page);
        stackedWidget->addWidget(seeInforW);
        invoice = new QWidget();
        invoice->setObjectName("invoice");
        stackedWidget->addWidget(invoice);
        modalView->setCentralWidget(centralwidget);
        QWidget::setTabOrder(nameLb, emaiLb);
        QWidget::setTabOrder(emaiLb, phoneLb);
        QWidget::setTabOrder(phoneLb, dayLb);
        QWidget::setTabOrder(dayLb, passwordLb);
        QWidget::setTabOrder(passwordLb, re_passwordLB);
        QWidget::setTabOrder(re_passwordLB, saveBtn);
        QWidget::setTabOrder(saveBtn, fileAdd);
        QWidget::setTabOrder(fileAdd, cancelBtn);
        QWidget::setTabOrder(cancelBtn, handAdd);
        QWidget::setTabOrder(handAdd, cancelBtn_3);
        QWidget::setTabOrder(cancelBtn_3, addBtn);
        QWidget::setTabOrder(addBtn, choseBtn);
        QWidget::setTabOrder(choseBtn, textBrowser);

        retranslateUi(modalView);
        QObject::connect(updateBtn_2, &QPushButton::clicked, updateBtn, qOverload<>(&QPushButton::click));
        QObject::connect(updateBtn_3, &QPushButton::clicked, delBtn, qOverload<>(&QPushButton::click));

        stackedWidget->setCurrentIndex(1);
        addStaffWitget->setCurrentIndex(0);
        inforWidget->setCurrentIndex(0);
        updateBtn_2->setDefault(false);
        updateBtn_3->setDefault(false);


        QMetaObject::connectSlotsByName(modalView);
    } // setupUi

    void retranslateUi(QMainWindow *modalView)
    {
        modalView->setWindowTitle(QCoreApplication::translate("modalView", "MainWindow", nullptr));
        handAdd->setText(QCoreApplication::translate("modalView", "Th\341\273\247 C\303\264ng", nullptr));
        fileAdd->setText(QCoreApplication::translate("modalView", "T\341\272\243i File", nullptr));
        saveBtn->setText(QCoreApplication::translate("modalView", " Th\303\252m", nullptr));
        cancelBtn->setText(QCoreApplication::translate("modalView", "Hu\341\273\267", nullptr));
        phoneLabel->setText(QCoreApplication::translate("modalView", "S\341\273\221 \304\220i\341\273\207n Tho\341\272\241i", nullptr));
        countryLabel_2->setText(QCoreApplication::translate("modalView", "V\341\273\213 Tr\303\255", nullptr));
        re_passwordLB->setText(QString());
        passwordLb->setText(QString());
        passLabel->setText(QCoreApplication::translate("modalView", "M\341\272\255t Kh\341\272\251u", nullptr));
        phoneLb->setText(QString());
        nameLabel->setText(QCoreApplication::translate("modalView", "H\341\273\215 v\303\240 T\303\252n", nullptr));
        passLabel_2->setText(QCoreApplication::translate("modalView", "X\303\241c Nh\341\272\255n M\341\272\255t Kh\341\272\251u", nullptr));
        label_4->setText(QString());
        country_Lb_2->setText(QCoreApplication::translate("modalView", "Sales", nullptr));
        addressLabel->setText(QCoreApplication::translate("modalView", "Qu\341\273\221c Gia", nullptr));
        emailLabel->setText(QCoreApplication::translate("modalView", "Email", nullptr));
        emaiLb->setText(QString());
        label_9->setText(QCoreApplication::translate("modalView", "Th\303\252m Th\341\273\247 C\303\264ng", nullptr));
        dayLb->setText(QString());
        countryLabel->setText(QCoreApplication::translate("modalView", "Ng\303\240y V\303\240o L\303\240m", nullptr));
        nameLb->setText(QString());
        statusAdd->setText(QString());
        country_Lb_3->setText(QCoreApplication::translate("modalView", "Vi\341\273\207t Nam", nullptr));
        label_10->setText(QCoreApplication::translate("modalView", "Th\303\252m Nh\303\242n Vi\303\252n M\341\273\233i", nullptr));
        cancelBtn_3->setText(QCoreApplication::translate("modalView", "Hu\341\273\267", nullptr));
        addBtn->setText(QCoreApplication::translate("modalView", " Th\303\252m", nullptr));
        choseBtn->setText(QCoreApplication::translate("modalView", "Ch\341\273\215n FIle", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("modalView", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Ch\341\273\215n file \304\221\341\273\203 xem tr\306\260\341\273\233c t\341\272\241i \304\221\303\242y.</span></p></body></html>", nullptr));
        viewBtn->setText(QCoreApplication::translate("modalView", "Xem th\303\264ng tin", nullptr));
        updateBtn->setText(QCoreApplication::translate("modalView", "S\341\273\255a th\303\264ng tin", nullptr));
        delBtn->setText(QCoreApplication::translate("modalView", "Xo\303\241 \304\221\341\273\221i t\306\260\341\273\243ng", nullptr));
        avtLabel->setText(QString());
        name->setText(QCoreApplication::translate("modalView", "Unknown Name", nullptr));
        phone->setText(QCoreApplication::translate("modalView", "0979.xxx.xxx", nullptr));
        updateBtn_2->setText(QCoreApplication::translate("modalView", "Ch\341\273\211nh s\341\273\255a", nullptr));
        emailLB->setText(QCoreApplication::translate("modalView", "Email", nullptr));
        emailText->setText(QCoreApplication::translate("modalView", "unknown@gmail.com", nullptr));
        changeText->setText(QCoreApplication::translate("modalView", "54 Nguy\341\273\205n L\306\260\306\241ng B\341\272\261ng - Li\303\252n Chi\341\273\203u - \304\220\303\240 N\341\272\265ng", nullptr));
        changeLabel->setText(QCoreApplication::translate("modalView", "\304\220\341\273\213a ch\341\273\211", nullptr));
        passLb_4->setText(QCoreApplication::translate("modalView", "S\341\273\237 th\303\255ch: code \304\221\341\272\277n m\341\273\235 m\341\272\257t \304\221au l\306\260ng.", nullptr));
        idLabel_3->setText(QCoreApplication::translate("modalView", "M\341\272\255t kh\341\272\251u", nullptr));
        idLabel_4->setText(QCoreApplication::translate("modalView", "Th\303\264ng tin kh\303\241c", nullptr));
        lineEdit->setText(QCoreApplication::translate("modalView", "dfdfdfsd", nullptr));
        idLabel_5->setText(QCoreApplication::translate("modalView", "L\341\273\213ch s\341\273\255 ho\303\241 \304\221\306\241n", nullptr));
        idLabel_6->setText(QCoreApplication::translate("modalView", "L\341\273\213ch s\341\273\255 gi\341\273\217 h\303\240ng", nullptr));
        updateBtn_3->setText(QCoreApplication::translate("modalView", "Xo\303\241", nullptr));
        nameLabel_2->setText(QCoreApplication::translate("modalView", "H\341\273\215 v\303\240 T\303\252n", nullptr));
        saveBtn_2->setText(QCoreApplication::translate("modalView", "Ch\341\273\211nh s\341\273\255a", nullptr));
        repassUpdate->setText(QString());
        emailUpdate->setText(QString());
        nameUpdate->setText(QString());
        cancelBtn_2->setText(QCoreApplication::translate("modalView", "Hu\341\273\267", nullptr));
        passLabel_3->setText(QCoreApplication::translate("modalView", "Nh\341\272\255p l\341\272\241i m\341\272\255t Kh\341\272\251u", nullptr));
        label_11->setText(QCoreApplication::translate("modalView", "Ch\341\273\211nh s\341\273\255a th\303\264ng tin", nullptr));
        emailLabel_2->setText(QCoreApplication::translate("modalView", "Email", nullptr));
        phoneLabel_2->setText(QCoreApplication::translate("modalView", "S\341\273\221 \304\220i\341\273\207n Tho\341\272\241i", nullptr));
        statusUpdate->setText(QString());
        phoneUpdate->setText(QString());
        changeUpdate->setText(QString());
        changeUpdateLabel->setText(QCoreApplication::translate("modalView", "\304\220\341\273\213a ch\341\273\211", nullptr));
        passUpdate->setText(QString());
        passLabel_5->setText(QCoreApplication::translate("modalView", "M\341\272\255t Kh\341\272\251u", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modalView: public Ui_modalView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODALVIEW_H
