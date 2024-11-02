/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *status;
    QLineEdit *find;
    QLabel *nameProfile;
    QStackedWidget *stackedWidget;
    QWidget *home;
    QWidget *invoiceW;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_12;
    QPushButton *prdBtn_2;
    QWidget *prdW;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *pushButton_3;
    QWidget *cusW;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QPushButton *pushButton_4;
    QWidget *prdW_4;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_27;
    QPushButton *pushButton_2;
    QWidget *prdW_5;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QPushButton *pushButton_6;
    QCalendarWidget *calendarWidget;
    QWidget *listW;
    QLabel *label_2;
    QWidget *pagaW;
    QPushButton *btn_2;
    QPushButton *btn_nonLast;
    QPushButton *pageLeft;
    QPushButton *btn_3;
    QPushButton *btn_last;
    QPushButton *pageRight;
    QPushButton *btn_1;
    QPushButton *pushButton_5;
    QLabel *label_10;
    QLabel *label_8;
    QWidget *staff;
    QLabel *label_3;
    QWidget *customer;
    QLabel *label_5;
    QWidget *product;
    QLabel *label_6;
    QWidget *money;
    QLabel *label_7;
    QWidget *profile;
    QLabel *label_4;
    QLabel *label_9;
    QPushButton *editAvtBtn;
    QLabel *avtLabel;
    QLabel *nameLabel;
    QLineEdit *nameLb;
    QLabel *idLabel;
    QLabel *passLb;
    QLineEdit *emaiLb;
    QLabel *emailLabel;
    QLabel *passLabel;
    QLineEdit *passLb_2;
    QLabel *addressLabel;
    QLineEdit *addressLb;
    QLabel *countryLabel;
    QLabel *phoneLabel;
    QLineEdit *phoneLb;
    QLabel *otherLabel;
    QLineEdit *otherLb;
    QPushButton *saveBtn;
    QLabel *country_Lb;
    QPushButton *homeBtn;
    QPushButton *staffBtn;
    QPushButton *cusBtn;
    QPushButton *prdBtn;
    QPushButton *moneyBtn;
    QPushButton *profileBtn;
    QPushButton *findBtn;
    QPushButton *notifyBtn;
    QLabel *logo;
    QPushButton *logOutBtn;
    QPushButton *pushButton;
    QPushButton *pushButton_7;
    QPushButton *personBtn;

    void setupUi(QMainWindow *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(1238, 828);
        admin->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:repeat, x1:0, y1:1, x2:1, y2:1, stop:0 rgba(76, 93, 227, 255), stop:1 rgba(149, 160, 252, 255))"));
        centralwidget = new QWidget(admin);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 10, 1001, 811));
        label->setStyleSheet(QString::fromUtf8("background-color:#f7f7f7;"));
        status = new QLabel(centralwidget);
        status->setObjectName("status");
        status->setGeometry(QRect(230, 10, 1001, 60));
        QFont font;
        font.setPointSize(18);
        font.setWeight(QFont::ExtraBold);
        status->setFont(font);
        status->setStyleSheet(QString::fromUtf8("background-color:#fff;\n"
"color: blue ;\n"
"padding-left: 15px;"));
        find = new QLineEdit(centralwidget);
        find->setObjectName("find");
        find->setGeometry(QRect(460, 20, 471, 41));
        QFont font1;
        font1.setPointSize(11);
        font1.setKerning(false);
        find->setFont(font1);
        find->setFocusPolicy(Qt::FocusPolicy::ClickFocus);
        find->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color:rgb(239, 239, 239);\n"
"padding-left: 20px;\n"
"color:#000;"));
        nameProfile = new QLabel(centralwidget);
        nameProfile->setObjectName("nameProfile");
        nameProfile->setGeometry(QRect(1060, 20, 171, 41));
        QFont font2;
        font2.setPointSize(11);
        nameProfile->setFont(font2);
        nameProfile->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        nameProfile->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"padding-left: 10px;\n"
"color: #000;\n"
""));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(230, 70, 1001, 751));
        QFont font3;
        font3.setKerning(true);
        stackedWidget->setFont(font3);
        stackedWidget->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        home = new QWidget();
        home->setObjectName("home");
        invoiceW = new QWidget(home);
        invoiceW->setObjectName("invoiceW");
        invoiceW->setGeometry(QRect(20, 30, 301, 91));
        invoiceW->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        invoiceW->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 20px;\n"
"text-align: left;"));
        label_13 = new QLabel(invoiceW);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(110, 10, 101, 41));
        QFont font4;
        font4.setPointSize(27);
        font4.setBold(true);
        label_13->setFont(font4);
        label_13->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(0, 0, 218);"));
        label_14 = new QLabel(invoiceW);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(110, 50, 131, 31));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(false);
        label_14->setFont(font5);
        label_14->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_14->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: #000;"));
        label_12 = new QLabel(invoiceW);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(20, 10, 61, 61));
        label_12->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-radius: 30px;\n"
"text-align: left;\n"
""));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/new/img/img/order-delivery.png")));
        label_12->setScaledContents(true);
        label_12->setWordWrap(false);
        prdBtn_2 = new QPushButton(invoiceW);
        prdBtn_2->setObjectName("prdBtn_2");
        prdBtn_2->setGeometry(QRect(0, 0, 291, 81));
        prdBtn_2->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        prdW = new QWidget(home);
        prdW->setObjectName("prdW");
        prdW->setGeometry(QRect(680, 30, 301, 91));
        prdW->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        prdW->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 20px;\n"
"text-align: left;"));
        label_15 = new QLabel(prdW);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(110, 10, 101, 41));
        label_15->setFont(font4);
        label_15->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(0, 0, 218);"));
        label_16 = new QLabel(prdW);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(110, 50, 121, 31));
        label_16->setFont(font5);
        label_16->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_16->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: #000;"));
        label_17 = new QLabel(prdW);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(30, 10, 61, 61));
        label_17->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-radius: 30px;\n"
"text-align: left;\n"
""));
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/new/img/img/box.png")));
        label_17->setScaledContents(true);
        label_17->setWordWrap(false);
        pushButton_3 = new QPushButton(prdW);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 10, 281, 71));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        cusW = new QWidget(home);
        cusW->setObjectName("cusW");
        cusW->setGeometry(QRect(680, 140, 301, 91));
        cusW->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        cusW->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 20px;\n"
"text-align: left;"));
        label_18 = new QLabel(cusW);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(110, 10, 101, 41));
        label_18->setFont(font4);
        label_18->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(0, 0, 218);"));
        label_19 = new QLabel(cusW);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(110, 50, 191, 31));
        label_19->setFont(font5);
        label_19->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_19->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: #000;"));
        label_20 = new QLabel(cusW);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(30, 10, 61, 61));
        label_20->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-radius: 30px;\n"
"text-align: left;\n"
""));
        label_20->setPixmap(QPixmap(QString::fromUtf8(":/new/img/img/group.png")));
        label_20->setScaledContents(true);
        label_20->setWordWrap(false);
        pushButton_4 = new QPushButton(cusW);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(10, 10, 281, 71));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        prdW_4 = new QWidget(home);
        prdW_4->setObjectName("prdW_4");
        prdW_4->setGeometry(QRect(350, 30, 301, 91));
        prdW_4->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        prdW_4->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 20px;\n"
"text-align: left;"));
        label_21 = new QLabel(prdW_4);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(110, 10, 111, 41));
        label_21->setFont(font4);
        label_21->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(0, 0, 218);"));
        label_22 = new QLabel(prdW_4);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(110, 50, 141, 31));
        label_22->setFont(font5);
        label_22->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_22->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: #000;"));
        label_23 = new QLabel(prdW_4);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(30, 10, 61, 61));
        label_23->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-radius: 30px;\n"
"text-align: left;\n"
""));
        label_23->setPixmap(QPixmap(QString::fromUtf8(":/new/img/img/money.png")));
        label_23->setScaledContents(true);
        label_23->setWordWrap(false);
        label_27 = new QLabel(prdW_4);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(220, 10, 51, 41));
        label_27->setFont(font4);
        label_27->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(0, 0, 218);"));
        pushButton_2 = new QPushButton(prdW_4);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 10, 281, 71));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        prdW_5 = new QWidget(home);
        prdW_5->setObjectName("prdW_5");
        prdW_5->setGeometry(QRect(680, 250, 301, 91));
        prdW_5->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        prdW_5->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 20px;\n"
"text-align: left;"));
        label_24 = new QLabel(prdW_5);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(110, 10, 101, 41));
        label_24->setFont(font4);
        label_24->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(0, 0, 218);"));
        label_25 = new QLabel(prdW_5);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(110, 50, 191, 31));
        label_25->setFont(font5);
        label_25->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_25->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: #000;"));
        label_26 = new QLabel(prdW_5);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(30, 10, 61, 61));
        label_26->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border-radius: 30px;\n"
"text-align: left;\n"
""));
        label_26->setPixmap(QPixmap(QString::fromUtf8(":/new/img/img/costumer.png")));
        label_26->setScaledContents(true);
        label_26->setWordWrap(false);
        pushButton_6 = new QPushButton(prdW_5);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(10, 10, 281, 71));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        calendarWidget = new QCalendarWidget(home);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(670, 380, 311, 341));
        QFont font6;
        font6.setPointSize(10);
        font6.setBold(false);
        font6.setStyleStrategy(QFont::PreferAntialias);
        font6.setHintingPreference(QFont::PreferDefaultHinting);
        calendarWidget->setFont(font6);
        calendarWidget->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        calendarWidget->setMouseTracking(false);
        calendarWidget->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        calendarWidget->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        calendarWidget->setAcceptDrops(false);
        calendarWidget->setToolTipDuration(-1);
        calendarWidget->setStyleSheet(QString::fromUtf8("\n"
"#calendarWidget QWidget{\n"
"alternate-background-color:#fff;\n"
"}\n"
"#qt_calendar_navigationbar { \n"
"background-color: #fff; \n"
"border: 2px solid #fff; \n"
"border-bottom: 0px;\n"
"\n"
"}\n"
"#qt_calendar_prevmonth,\n"
"#qt_calendar_nextmonth{ \n"
"border: none;\n"
"qproperty-icon: none;\n"
"min-width: 13px;\n"
"max-width: 13px;\n"
"min-height: 13px;\n"
"max-height: 13px;\n"
"border-radius: 5px;\n"
"background-color: transparent;\n"
"margin: 20px 10px;\n"
"padding: 5px;\n"
"}\n"
"#qt_calendar_prevmonth { \n"
"margin-right: 5px;\n"
"image: url(:/new/img/img/left.png);\n"
"}\n"
"#qt_calendar_nextmonth {\n"
"margin-left: 5px;\n"
"image: url(:new/img/img/right.png);\n"
"}\n"
"#qt_calendar_prevmonth:hover,\n"
" #qt_calendar_nextmonth:hover { \n"
"background-color:rgb(115, 141, 255);\n"
"}\n"
"#qt_calendar_prevmonth:pressed,\n"
"#qt_calendar_nextmonth:pressed{\n"
"background-color:gba(235, 235, 235, 100);\n"
"}\n"
"#qt_calendar_yearbutton {\n"
"color: #000;\n"
"margin: 5px;\n"
"border-radius: 5px;\n"
"fo"
                        "nt-size: 13px;\n"
"padding: 0 10px;\n"
"}\n"
"#qt_calendar_monthbutton {\n"
"width: 110px;\n"
"color: #000;\n"
"font-size: 13px;\n"
"margin: 5px 0;\n"
"border-radius: 5px;\n"
"padding: 0px 2px;\n"
"}\n"
"\n"
"#qt_calendar_yearedit{\n"
" min-width: 53px; \n"
"color: #000;\n"
"background: transparent;\n"
"font-size: 13px;\n"
"}\n"
"\n"
"#qt_calendar_yearedit::down-button {\n"
"image: url(:/new/img/img/down.png);\n"
"subcontrol-position: right;\n"
"}\n"
"#qt_calendar_yearedit::up-button {\n"
"image: url(:/new/img/img/up.png); \n"
"subcontrol-position: left;\n"
"}\n"
"\n"
"#qt_calendar_yearedit::down-button,\n"
"#qt_calendar_yearedit::up-button {\n"
"width:10px;\n"
"padding: 0px 5px;\n"
"border-radius: 3px;\n"
"}\n"
"#qt_calendar_yearedit::down-button:hover,\n"
"#qt_calendar_yearedit::up-button:hover{\n"
" background-color: rgb(115, 141, 255);\n"
"}\n"
"\n"
"#calendarWidget QToolButton QMenu { \n"
"background-color: #fff;\n"
"}\n"
"#calendarWidget QToolButton QMenu::item{\n"
"\n"
"}\n"
"#calendarWidget QToolButton"
                        " QMenu::item:selected:enabled {\n"
"background-color: #55aaff;\n"
"}\n"
"#calendarWidget QToolButton::menu-indicator {\n"
"nosubcontrol-origin: margin; \n"
"subcontrol-position: right center; \n"
"margin-top: 10px;\n"
"width: 20px;\n"
"}\n"
"\n"
"#qt_calendar_calendarview { \n"
"border-top: 0px;\n"
"background-color: #fff;\n"
"\n"
"}\n"
"#qt_calendar_calendarview::item:hover {\n"
"background-color: gba(0,0,0,0.2);\n"
"}\n"
"#qt_calendar_calendarview::item:selected {\n"
"border-radius: 5px;\n"
"background-color: rgb(115, 141, 255);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        calendarWidget->setGridVisible(false);
        calendarWidget->setSelectionMode(QCalendarWidget::SelectionMode::SingleSelection);
        calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::HorizontalHeaderFormat::ShortDayNames);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::VerticalHeaderFormat::NoVerticalHeader);
        calendarWidget->setNavigationBarVisible(true);
        calendarWidget->setDateEditEnabled(true);
        calendarWidget->setDateEditAcceptDelay(1500);
        listW = new QWidget(home);
        listW->setObjectName("listW");
        listW->setGeometry(QRect(20, 140, 631, 591));
        listW->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 20px;\n"
"text-align: left;"));
        label_2 = new QLabel(listW);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 301, 41));
        QFont font7;
        font7.setPointSize(16);
        font7.setWeight(QFont::ExtraBold);
        label_2->setFont(font7);
        label_2->setStyleSheet(QString::fromUtf8("color: blue;"));
        pagaW = new QWidget(listW);
        pagaW->setObjectName("pagaW");
        pagaW->setGeometry(QRect(410, 20, 211, 41));
        pagaW->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        btn_2 = new QPushButton(pagaW);
        btn_2->setObjectName("btn_2");
        btn_2->setGeometry(QRect(60, 10, 21, 21));
        QFont font8;
        font8.setPointSize(12);
        btn_2->setFont(font8);
        btn_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btn_2->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(35, 35, 35);\n"
"border-radius: 2px;\n"
"text-align: center;"));
        btn_nonLast = new QPushButton(pagaW);
        btn_nonLast->setObjectName("btn_nonLast");
        btn_nonLast->setGeometry(QRect(120, 10, 21, 21));
        btn_nonLast->setFont(font8);
        btn_nonLast->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btn_nonLast->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(35, 35, 35);\n"
"border-radius: 2px;\n"
"text-align: center;"));
        pageLeft = new QPushButton(pagaW);
        pageLeft->setObjectName("pageLeft");
        pageLeft->setGeometry(QRect(10, 10, 21, 21));
        pageLeft->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pageLeft->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: 1px solid #ccc;\n"
"color: #000;\n"
"border-radius: 2px;\n"
"text-align: center;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/img/img/left.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pageLeft->setIcon(icon);
        btn_3 = new QPushButton(pagaW);
        btn_3->setObjectName("btn_3");
        btn_3->setGeometry(QRect(80, 10, 21, 21));
        btn_3->setFont(font8);
        btn_3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btn_3->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(35, 35, 35);\n"
"border-radius: 2px;\n"
"text-align: center;"));
        btn_last = new QPushButton(pagaW);
        btn_last->setObjectName("btn_last");
        btn_last->setGeometry(QRect(140, 10, 21, 21));
        btn_last->setFont(font8);
        btn_last->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btn_last->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(35, 35, 35);\n"
"border-radius: 2px;\n"
"text-align: center;"));
        pageRight = new QPushButton(pagaW);
        pageRight->setObjectName("pageRight");
        pageRight->setGeometry(QRect(170, 10, 21, 21));
        pageRight->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pageRight->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: 1px solid #ccc;\n"
"color: #000;\n"
"border-radius: 2px;\n"
"text-align: center;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/img/img/right.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pageRight->setIcon(icon1);
        btn_1 = new QPushButton(pagaW);
        btn_1->setObjectName("btn_1");
        btn_1->setGeometry(QRect(40, 10, 21, 21));
        btn_1->setFont(font8);
        btn_1->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btn_1->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 141, 255);\n"
"color: #fff;\n"
"border-radius: 2px;\n"
"text-align: center;"));
        pushButton_5 = new QPushButton(pagaW);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(100, 10, 21, 21));
        pushButton_5->setFont(font8);
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(35, 35, 35);\n"
"border-radius: 2px;\n"
"text-align: center;"));
        label_10 = new QLabel(listW);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 60, 611, 521));
        label_10->setStyleSheet(QString::fromUtf8("background-color: #ccc;"));
        label_8 = new QLabel(home);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(650, 360, 41, 41));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/new/img/img/paper-pin.png")));
        label_8->setScaledContents(true);
        label_8->setWordWrap(false);
        stackedWidget->addWidget(home);
        invoiceW->raise();
        prdW->raise();
        cusW->raise();
        prdW_4->raise();
        prdW_5->raise();
        listW->raise();
        calendarWidget->raise();
        label_8->raise();
        staff = new QWidget();
        staff->setObjectName("staff");
        label_3 = new QLabel(staff);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(340, 250, 381, 211));
        label_3->setStyleSheet(QString::fromUtf8("color:#000;"));
        stackedWidget->addWidget(staff);
        customer = new QWidget();
        customer->setObjectName("customer");
        label_5 = new QLabel(customer);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(440, 250, 451, 191));
        label_5->setStyleSheet(QString::fromUtf8("color:#000;"));
        stackedWidget->addWidget(customer);
        product = new QWidget();
        product->setObjectName("product");
        label_6 = new QLabel(product);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(370, 310, 451, 191));
        label_6->setStyleSheet(QString::fromUtf8("color:#000;"));
        stackedWidget->addWidget(product);
        money = new QWidget();
        money->setObjectName("money");
        label_7 = new QLabel(money);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 20, 251, 161));
        stackedWidget->addWidget(money);
        profile = new QWidget();
        profile->setObjectName("profile");
        label_4 = new QLabel(profile);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 20, 961, 711));
        label_4->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 30px;"));
        label_9 = new QLabel(profile);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(70, 50, 231, 41));
        QFont font9;
        font9.setPointSize(14);
        font9.setBold(true);
        label_9->setFont(font9);
        label_9->setStyleSheet(QString::fromUtf8("color: blue;\n"
""));
        editAvtBtn = new QPushButton(profile);
        editAvtBtn->setObjectName("editAvtBtn");
        editAvtBtn->setGeometry(QRect(230, 270, 40, 40));
        editAvtBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        editAvtBtn->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: #f7f7f7;\n"
"border:none;\n"
"background-color: rgb(55, 3, 225);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/img/img/pencil.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        editAvtBtn->setIcon(icon2);
        editAvtBtn->setIconSize(QSize(22, 23));
        avtLabel = new QLabel(profile);
        avtLabel->setObjectName("avtLabel");
        avtLabel->setGeometry(QRect(80, 130, 191, 191));
        avtLabel->setStyleSheet(QString::fromUtf8("border-radius: 90px;\n"
"background-color: #f7f7f7;\n"
"border:none;"));
        avtLabel->setPixmap(QPixmap(QString::fromUtf8(":/new/img/img/batman_hero_avatar_comics-512.png")));
        avtLabel->setScaledContents(true);
        nameLabel = new QLabel(profile);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(380, 150, 81, 21));
        QFont font10;
        font10.setPointSize(11);
        font10.setWeight(QFont::DemiBold);
        nameLabel->setFont(font10);
        nameLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        nameLb = new QLineEdit(profile);
        nameLb->setObjectName("nameLb");
        nameLb->setGeometry(QRect(380, 180, 241, 41));
        nameLb->setFont(font2);
        nameLb->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        nameLb->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;"));
        idLabel = new QLabel(profile);
        idLabel->setObjectName("idLabel");
        idLabel->setGeometry(QRect(660, 150, 111, 21));
        idLabel->setFont(font10);
        idLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        passLb = new QLabel(profile);
        passLb->setObjectName("passLb");
        passLb->setGeometry(QRect(660, 180, 241, 41));
        QFont font11;
        font11.setPointSize(11);
        font11.setBold(false);
        passLb->setFont(font11);
        passLb->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        passLb->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;\n"
"color:black;"));
        emaiLb = new QLineEdit(profile);
        emaiLb->setObjectName("emaiLb");
        emaiLb->setGeometry(QRect(380, 270, 241, 41));
        emaiLb->setFont(font2);
        emaiLb->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        emaiLb->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;"));
        emailLabel = new QLabel(profile);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setGeometry(QRect(380, 240, 81, 21));
        emailLabel->setFont(font10);
        emailLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        passLabel = new QLabel(profile);
        passLabel->setObjectName("passLabel");
        passLabel->setGeometry(QRect(660, 240, 81, 21));
        passLabel->setFont(font10);
        passLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        passLb_2 = new QLineEdit(profile);
        passLb_2->setObjectName("passLb_2");
        passLb_2->setGeometry(QRect(660, 270, 241, 41));
        passLb_2->setFont(font2);
        passLb_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        passLb_2->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;"));
        passLb_2->setEchoMode(QLineEdit::EchoMode::Password);
        addressLabel = new QLabel(profile);
        addressLabel->setObjectName("addressLabel");
        addressLabel->setGeometry(QRect(380, 330, 81, 21));
        addressLabel->setFont(font10);
        addressLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        addressLb = new QLineEdit(profile);
        addressLb->setObjectName("addressLb");
        addressLb->setGeometry(QRect(380, 360, 241, 41));
        QFont font12;
        font12.setPointSize(10);
        addressLb->setFont(font12);
        addressLb->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        addressLb->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;"));
        countryLabel = new QLabel(profile);
        countryLabel->setObjectName("countryLabel");
        countryLabel->setGeometry(QRect(660, 330, 81, 21));
        countryLabel->setFont(font10);
        countryLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        phoneLabel = new QLabel(profile);
        phoneLabel->setObjectName("phoneLabel");
        phoneLabel->setGeometry(QRect(380, 420, 101, 21));
        phoneLabel->setFont(font10);
        phoneLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        phoneLb = new QLineEdit(profile);
        phoneLb->setObjectName("phoneLb");
        phoneLb->setGeometry(QRect(380, 450, 241, 41));
        phoneLb->setFont(font2);
        phoneLb->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        phoneLb->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;"));
        otherLabel = new QLabel(profile);
        otherLabel->setObjectName("otherLabel");
        otherLabel->setGeometry(QRect(660, 420, 121, 21));
        otherLabel->setFont(font10);
        otherLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        otherLb = new QLineEdit(profile);
        otherLb->setObjectName("otherLb");
        otherLb->setGeometry(QRect(660, 450, 241, 41));
        otherLb->setFont(font2);
        otherLb->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        otherLb->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;"));
        saveBtn = new QPushButton(profile);
        saveBtn->setObjectName("saveBtn");
        saveBtn->setGeometry(QRect(710, 580, 181, 41));
        saveBtn->setFont(font2);
        saveBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        saveBtn->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: #f7f7f7;\n"
"border:none;\n"
"background-color: rgb(55, 3, 225);\n"
"text-align: left;\n"
"padding-left: 35px;\n"
"color: #fff;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/img/img/diskette.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        saveBtn->setIcon(icon3);
        saveBtn->setIconSize(QSize(22, 23));
        country_Lb = new QLabel(profile);
        country_Lb->setObjectName("country_Lb");
        country_Lb->setGeometry(QRect(660, 360, 241, 41));
        country_Lb->setFont(font11);
        country_Lb->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        country_Lb->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;\n"
"color:black;"));
        stackedWidget->addWidget(profile);
        label_4->raise();
        label_9->raise();
        avtLabel->raise();
        editAvtBtn->raise();
        nameLabel->raise();
        nameLb->raise();
        idLabel->raise();
        passLb->raise();
        emaiLb->raise();
        emailLabel->raise();
        passLabel->raise();
        passLb_2->raise();
        addressLabel->raise();
        addressLb->raise();
        countryLabel->raise();
        phoneLabel->raise();
        phoneLb->raise();
        otherLabel->raise();
        otherLb->raise();
        saveBtn->raise();
        country_Lb->raise();
        homeBtn = new QPushButton(centralwidget);
        homeBtn->setObjectName("homeBtn");
        homeBtn->setGeometry(QRect(10, 90, 211, 41));
        QFont font13;
        font13.setPointSize(13);
        font13.setBold(true);
        homeBtn->setFont(font13);
        homeBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        homeBtn->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: qlineargradient(spread:pad, x1:0.307, y1:1, x2:1, y2:1, stop:0 rgba(149, 161, 255, 255), stop:1 rgba(99, 117, 253, 255));\n"
"border-radius: 10px;\n"
"color: #fff;\n"
"text-align: left;padding-left: 40px;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/img/img/home (1).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        homeBtn->setIcon(icon4);
        homeBtn->setIconSize(QSize(25, 25));
        staffBtn = new QPushButton(centralwidget);
        staffBtn->setObjectName("staffBtn");
        staffBtn->setGeometry(QRect(10, 140, 211, 41));
        staffBtn->setFont(font13);
        staffBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        staffBtn->setStyleSheet(QString::fromUtf8("text-align: left;padding-left: 40px;;border: none;\n"
"background-color: transparent;\n"
"border-radius: 10px;\n"
"color: rgb(195, 195, 195);"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/img/img/team.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        staffBtn->setIcon(icon5);
        staffBtn->setIconSize(QSize(25, 25));
        cusBtn = new QPushButton(centralwidget);
        cusBtn->setObjectName("cusBtn");
        cusBtn->setGeometry(QRect(10, 190, 211, 41));
        cusBtn->setFont(font13);
        cusBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        cusBtn->setStyleSheet(QString::fromUtf8("text-align: left;padding-left: 40px;;border: none;\n"
"background-color: transparent;\n"
"border-radius: 10px;\n"
"color: rgb(195, 195, 195);"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/img/img/customer.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cusBtn->setIcon(icon6);
        cusBtn->setIconSize(QSize(25, 25));
        prdBtn = new QPushButton(centralwidget);
        prdBtn->setObjectName("prdBtn");
        prdBtn->setGeometry(QRect(10, 240, 211, 41));
        prdBtn->setFont(font13);
        prdBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        prdBtn->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: transparent;\n"
"border-radius: 10px;\n"
"color: rgb(195, 195, 195);\n"
"text-align: left;padding-left: 40px;"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/img/img/product-management.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        prdBtn->setIcon(icon7);
        prdBtn->setIconSize(QSize(30, 30));
        moneyBtn = new QPushButton(centralwidget);
        moneyBtn->setObjectName("moneyBtn");
        moneyBtn->setGeometry(QRect(10, 290, 211, 41));
        moneyBtn->setFont(font13);
        moneyBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        moneyBtn->setStyleSheet(QString::fromUtf8("text-align: left;padding-left: 40px;;border: none;\n"
"background-color: transparent;\n"
"border-radius: 10px;\n"
"color: rgb(195, 195, 195);"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/img/img/profit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        moneyBtn->setIcon(icon8);
        moneyBtn->setIconSize(QSize(25, 25));
        profileBtn = new QPushButton(centralwidget);
        profileBtn->setObjectName("profileBtn");
        profileBtn->setGeometry(QRect(10, 340, 211, 41));
        profileBtn->setFont(font13);
        profileBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        profileBtn->setStyleSheet(QString::fromUtf8("text-align: left;padding-left: 40px;border: none;background-color: transparent;border-radius: 10px;color: rgb(195, 195, 195);"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/img/img/user (1).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        profileBtn->setIcon(icon9);
        profileBtn->setIconSize(QSize(25, 25));
        findBtn = new QPushButton(centralwidget);
        findBtn->setObjectName("findBtn");
        findBtn->setGeometry(QRect(850, 20, 81, 41));
        findBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        findBtn->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: #ccc;\n"
"border-radius: 20px;\n"
"color: #ccc;"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/img/img/search.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        findBtn->setIcon(icon10);
        findBtn->setIconSize(QSize(20, 20));
        notifyBtn = new QPushButton(centralwidget);
        notifyBtn->setObjectName("notifyBtn");
        notifyBtn->setGeometry(QRect(970, 20, 41, 41));
        notifyBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        notifyBtn->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: #f7f7f7;\n"
"border:none;"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/img/img/bell.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        notifyBtn->setIcon(icon11);
        notifyBtn->setIconSize(QSize(20, 20));
        logo = new QLabel(centralwidget);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(0, 0, 229, 74));
        QFont font14;
        font14.setPointSize(30);
        font14.setWeight(QFont::ExtraBold);
        font14.setItalic(false);
        font14.setUnderline(false);
        font14.setStrikeOut(false);
        logo->setFont(font14);
        logo->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        logo->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color: #fff;\n"
"\n"
""));
        logo->setFrameShadow(QFrame::Shadow::Plain);
        logo->setLineWidth(1);
        logo->setPixmap(QPixmap(QString::fromUtf8(":/new/img/img/logoTest.PNG")));
        logo->setScaledContents(true);
        logOutBtn = new QPushButton(centralwidget);
        logOutBtn->setObjectName("logOutBtn");
        logOutBtn->setGeometry(QRect(40, 760, 150, 31));
        QFont font15;
        font15.setPointSize(9);
        font15.setBold(true);
        logOutBtn->setFont(font15);
        logOutBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        logOutBtn->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: qlineargradient(spread:pad, x1:0.307, y1:1, x2:1, y2:1, stop:0 rgba(149, 161, 255, 255), stop:1 rgba(99, 117, 253, 255));\n"
"border-radius: 15px;\n"
"color:#fff;\n"
""));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/new/img/img/logout.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        logOutBtn->setIcon(icon12);
        logOutBtn->setIconSize(QSize(20, 20));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 231, 71));
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(1020, 10, 211, 61));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        personBtn = new QPushButton(centralwidget);
        personBtn->setObjectName("personBtn");
        personBtn->setGeometry(QRect(1020, 20, 41, 41));
        personBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        personBtn->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: #f7f7f7;\n"
"border:none;"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/new/img/img/batman_hero_avatar_comics-512.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        personBtn->setIcon(icon13);
        personBtn->setIconSize(QSize(43, 43));
        admin->setCentralWidget(centralwidget);
        label->raise();
        status->raise();
        find->raise();
        nameProfile->raise();
        stackedWidget->raise();
        homeBtn->raise();
        staffBtn->raise();
        cusBtn->raise();
        prdBtn->raise();
        moneyBtn->raise();
        profileBtn->raise();
        findBtn->raise();
        notifyBtn->raise();
        logo->raise();
        logOutBtn->raise();
        pushButton->raise();
        personBtn->raise();
        pushButton_7->raise();

        retranslateUi(admin);
        QObject::connect(pushButton_7, &QPushButton::clicked, profileBtn, qOverload<>(&QPushButton::click));
        QObject::connect(prdBtn_2, &QPushButton::clicked, moneyBtn, qOverload<>(&QPushButton::click));
        QObject::connect(pushButton_2, &QPushButton::clicked, moneyBtn, qOverload<>(&QPushButton::click));
        QObject::connect(pushButton_3, &QPushButton::clicked, prdBtn, qOverload<>(&QPushButton::click));
        QObject::connect(pushButton_4, &QPushButton::clicked, cusBtn, qOverload<>(&QPushButton::click));
        QObject::connect(pushButton_6, &QPushButton::clicked, staffBtn, qOverload<>(&QPushButton::click));
        QObject::connect(pushButton, &QPushButton::clicked, homeBtn, qOverload<>(&QPushButton::click));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QMainWindow *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "MainWindow", nullptr));
        label->setText(QString());
        status->setText(QCoreApplication::translate("admin", "Trang Ch\341\273\247", nullptr));
        find->setPlaceholderText(QCoreApplication::translate("admin", "T\303\254m Ki\341\272\277m", nullptr));
        nameProfile->setText(QCoreApplication::translate("admin", "Tran Tam Nhu", nullptr));
        label_13->setText(QCoreApplication::translate("admin", "356", nullptr));
        label_14->setText(QCoreApplication::translate("admin", "T\341\273\225ng \304\220\306\241n H\303\240ng", nullptr));
        label_12->setText(QString());
        prdBtn_2->setText(QString());
        label_15->setText(QCoreApplication::translate("admin", "123", nullptr));
        label_16->setText(QCoreApplication::translate("admin", "T\341\273\225ng S\341\272\243n Ph\341\272\251m", nullptr));
        label_17->setText(QString());
        pushButton_3->setText(QString());
        label_18->setText(QCoreApplication::translate("admin", "54", nullptr));
        label_19->setText(QCoreApplication::translate("admin", "T\341\273\225ng Kh\303\241ch H\303\240ng", nullptr));
        label_20->setText(QString());
        pushButton_4->setText(QString());
        label_21->setText(QCoreApplication::translate("admin", "179.8 ", nullptr));
        label_22->setText(QCoreApplication::translate("admin", "Doanh Thu Th\303\241ng", nullptr));
        label_23->setText(QString());
        label_27->setText(QCoreApplication::translate("admin", "Tr", nullptr));
        pushButton_2->setText(QString());
        label_24->setText(QCoreApplication::translate("admin", "13", nullptr));
        label_25->setText(QCoreApplication::translate("admin", "T\341\273\225ng Nh\303\242n Vi\303\252n", nullptr));
        label_26->setText(QString());
        pushButton_6->setText(QString());
        label_2->setText(QCoreApplication::translate("admin", "\304\220\306\241n H\303\240ng Trong Th\303\241ng", nullptr));
        btn_2->setText(QCoreApplication::translate("admin", "2", nullptr));
        btn_nonLast->setText(QCoreApplication::translate("admin", "7", nullptr));
        pageLeft->setText(QString());
        btn_3->setText(QCoreApplication::translate("admin", "3", nullptr));
        btn_last->setText(QCoreApplication::translate("admin", "8", nullptr));
        pageRight->setText(QString());
        btn_1->setText(QCoreApplication::translate("admin", "1", nullptr));
        pushButton_5->setText(QCoreApplication::translate("admin", "...", nullptr));
        label_10->setText(QCoreApplication::translate("admin", "Hi\341\273\203n th\341\273\213 list \304\221\306\241n h\303\240ng", nullptr));
        label_8->setText(QString());
        label_3->setText(QCoreApplication::translate("admin", "Nh\303\242n vi\303\252n", nullptr));
        label_5->setText(QCoreApplication::translate("admin", "trang lo", nullptr));
        label_6->setText(QCoreApplication::translate("admin", "Sanr pham", nullptr));
        label_7->setText(QCoreApplication::translate("admin", "Doanh Thu", nullptr));
        label_4->setText(QString());
        label_9->setText(QCoreApplication::translate("admin", "S\341\273\255a Th\303\264ng Tin C\303\241 Nh\303\242n", nullptr));
        editAvtBtn->setText(QString());
        avtLabel->setText(QString());
        nameLabel->setText(QCoreApplication::translate("admin", "H\341\273\215 v\303\240 T\303\252n", nullptr));
        nameLb->setText(QCoreApplication::translate("admin", "Tran Tam Nhu", nullptr));
        idLabel->setText(QCoreApplication::translate("admin", "ID \304\220\304\203ng Nh\341\272\255p", nullptr));
        passLb->setText(QCoreApplication::translate("admin", "PS 00001", nullptr));
        emaiLb->setText(QCoreApplication::translate("admin", "unknown@gmail.dev.com", nullptr));
        emailLabel->setText(QCoreApplication::translate("admin", "Email", nullptr));
        passLabel->setText(QCoreApplication::translate("admin", "M\341\272\255t Kh\341\272\251u", nullptr));
        passLb_2->setText(QCoreApplication::translate("admin", "unknown", nullptr));
        addressLabel->setText(QCoreApplication::translate("admin", "\304\220\341\273\213a Ch\341\273\211", nullptr));
        addressLb->setText(QCoreApplication::translate("admin", "54 Nguy\341\273\205n L\306\260\306\241ng B\341\272\261ng - \304\220\303\240 N\341\272\265ng ", nullptr));
        countryLabel->setText(QCoreApplication::translate("admin", "Qu\341\273\221c Gia", nullptr));
        phoneLabel->setText(QCoreApplication::translate("admin", "S\341\273\221 \304\220i\341\273\207n Tho\341\272\241i", nullptr));
        phoneLb->setText(QCoreApplication::translate("admin", "0979.696.696", nullptr));
        otherLabel->setText(QCoreApplication::translate("admin", "Th\303\264ng Tin Kh\303\241c", nullptr));
        otherLb->setText(QCoreApplication::translate("admin", "S\341\273\237 Th\303\255ch: C\303\240i win d\341\272\241o.", nullptr));
        saveBtn->setText(QCoreApplication::translate("admin", "L\306\260u Th\303\264ng Tin", nullptr));
        country_Lb->setText(QCoreApplication::translate("admin", "Vi\341\273\207t Nam", nullptr));
        homeBtn->setText(QCoreApplication::translate("admin", "Trang Ch\341\273\247", nullptr));
        staffBtn->setText(QCoreApplication::translate("admin", "Nh\303\242n Vi\303\252n", nullptr));
        cusBtn->setText(QCoreApplication::translate("admin", "Kh\303\241ch H\303\240ng", nullptr));
        prdBtn->setText(QCoreApplication::translate("admin", "S\341\272\243n Ph\341\272\251m", nullptr));
        moneyBtn->setText(QCoreApplication::translate("admin", "Doanh Thu", nullptr));
        profileBtn->setText(QCoreApplication::translate("admin", "C\303\241 Nh\303\242n", nullptr));
        findBtn->setText(QString());
        notifyBtn->setText(QString());
        logo->setText(QString());
        logOutBtn->setText(QCoreApplication::translate("admin", "\304\220\304\203ng Xu\341\272\245t", nullptr));
        pushButton->setText(QString());
        pushButton_7->setText(QString());
        personBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
