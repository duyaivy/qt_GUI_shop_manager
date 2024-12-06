/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user
{
public:
    QWidget *centralwidget;
    QLineEdit *find;
    QPushButton *notifyBtn;
    QLabel *status;
    QLabel *nameProfile;
    QPushButton *findBtn;
    QPushButton *personBtn;
    QPushButton *logOutBtn;
    QPushButton *helpBtn;
    QPushButton *historyBtn;
    QPushButton *profileBtn;
    QPushButton *homeBtn;
    QPushButton *cartBtn;
    QLabel *logo;
    QStackedWidget *stackedWidget;
    QWidget *home;
    QWidget *productW;
    QLabel *label_43;
    QWidget *widget_9;
    QWidget *cartView;
    QLabel *label_27;
    QLabel *label_26;
    QWidget *cartWidget;
    QWidget *widget_5;
    QLabel *label_28;
    QLabel *moneyPreBuy;
    QLabel *label_42;
    QPushButton *pushButton_3;
    QWidget *preBuyW;
    QLabel *label_40;
    QWidget *widget_6;
    QPushButton *refeshInv_2;
    QWidget *historyView;
    QLabel *label_24;
    QLabel *label_25;
    QWidget *widget_3;
    QLabel *nameLabel_3;
    QLabel *nameLabel_2;
    QLabel *nameLabel_5;
    QLabel *nameLabel_4;
    QPushButton *refeshInv;
    QTableView *tableViewInvoiceCus;
    QComboBox *comboBox;
    QWidget *widget_7;
    QWidget *profileView;
    QLabel *avtLabel;
    QPushButton *editAvtBtn;
    QLabel *label_4;
    QWidget *widget;
    QLineEdit *phoneLb;
    QLabel *country_Lb;
    QLabel *nameLabel;
    QLineEdit *passLb_2;
    QLabel *phoneLabel;
    QLabel *countryLabel;
    QLabel *emailLabel;
    QLineEdit *emaiLb;
    QLabel *addressLabel;
    QLabel *idLabel;
    QLabel *otherLabel;
    QLabel *passLabel;
    QLabel *idLb;
    QLineEdit *nameLb;
    QLabel *country_Lb_3;
    QPushButton *saveBtn;
    QLineEdit *address;
    QLabel *statusProfile;
    QWidget *widget_8;
    QLabel *label_11;
    QWidget *helpView;
    QLabel *label_13;
    QLabel *label_5;
    QWidget *widget_2;
    QLabel *label_14;
    QPushButton *notifyBtn_2;
    QPushButton *notifyBtn_3;
    QLabel *label_15;
    QPushButton *notifyBtn_4;
    QLabel *label_16;
    QPushButton *notifyBtn_5;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QPushButton *notifyBtn_6;
    QPushButton *notifyBtn_7;
    QPushButton *notifyBtn_8;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLineEdit *lineEdit;
    QPushButton *notifyBtn_9;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_12;

    void setupUi(QMainWindow *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName("user");
        user->resize(1239, 839);
        user->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:repeat, x1:0, y1:1, x2:1, y2:1, stop:0 rgba(76, 93, 227, 255), stop:1 rgba(149, 160, 252, 255))"));
        centralwidget = new QWidget(user);
        centralwidget->setObjectName("centralwidget");
        find = new QLineEdit(centralwidget);
        find->setObjectName("find");
        find->setGeometry(QRect(480, 19, 471, 41));
        QFont font;
        font.setPointSize(11);
        font.setKerning(false);
        find->setFont(font);
        find->setFocusPolicy(Qt::FocusPolicy::ClickFocus);
        find->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color:rgb(239, 239, 239);\n"
"padding-left: 20px;\n"
"color:#000;"));
        notifyBtn = new QPushButton(centralwidget);
        notifyBtn->setObjectName("notifyBtn");
        notifyBtn->setGeometry(QRect(970, 19, 41, 41));
        notifyBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        notifyBtn->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: #f7f7f7;\n"
"border:none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/img/img/grocery-store.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        notifyBtn->setIcon(icon);
        notifyBtn->setIconSize(QSize(23, 23));
        status = new QLabel(centralwidget);
        status->setObjectName("status");
        status->setGeometry(QRect(230, 9, 1001, 60));
        QFont font1;
        font1.setPointSize(18);
        font1.setWeight(QFont::ExtraBold);
        status->setFont(font1);
        status->setStyleSheet(QString::fromUtf8("background-color:#fff;\n"
"color: blue ;\n"
"padding-left: 15px;"));
        nameProfile = new QLabel(centralwidget);
        nameProfile->setObjectName("nameProfile");
        nameProfile->setGeometry(QRect(1060, 19, 171, 41));
        QFont font2;
        font2.setPointSize(11);
        nameProfile->setFont(font2);
        nameProfile->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        nameProfile->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"padding-left: 10px;\n"
"color: #000;\n"
""));
        findBtn = new QPushButton(centralwidget);
        findBtn->setObjectName("findBtn");
        findBtn->setGeometry(QRect(870, 19, 81, 41));
        findBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        findBtn->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: #ccc;\n"
"border-radius: 20px;\n"
"color: #ccc;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/img/img/search.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        findBtn->setIcon(icon1);
        findBtn->setIconSize(QSize(20, 20));
        personBtn = new QPushButton(centralwidget);
        personBtn->setObjectName("personBtn");
        personBtn->setGeometry(QRect(1020, 19, 41, 41));
        personBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        personBtn->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: #f7f7f7;\n"
"border:none;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/img/img/batman_hero_avatar_comics-512.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        personBtn->setIcon(icon2);
        personBtn->setIconSize(QSize(43, 43));
        logOutBtn = new QPushButton(centralwidget);
        logOutBtn->setObjectName("logOutBtn");
        logOutBtn->setGeometry(QRect(40, 770, 150, 31));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        logOutBtn->setFont(font3);
        logOutBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        logOutBtn->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: qlineargradient(spread:pad, x1:0.307, y1:1, x2:1, y2:1, stop:0 rgba(149, 161, 255, 255), stop:1 rgba(99, 117, 253, 255));\n"
"border-radius: 15px;\n"
"color:#fff;\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/img/img/logout.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        logOutBtn->setIcon(icon3);
        logOutBtn->setIconSize(QSize(20, 20));
        helpBtn = new QPushButton(centralwidget);
        helpBtn->setObjectName("helpBtn");
        helpBtn->setGeometry(QRect(10, 300, 211, 41));
        QFont font4;
        font4.setPointSize(13);
        font4.setBold(true);
        helpBtn->setFont(font4);
        helpBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        helpBtn->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: transparent;\n"
"border-radius: 10px;\n"
"color: rgb(195, 195, 195);\n"
"text-align: left;padding-left: 40px;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/img/img/question.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        helpBtn->setIcon(icon4);
        helpBtn->setIconSize(QSize(25, 25));
        historyBtn = new QPushButton(centralwidget);
        historyBtn->setObjectName("historyBtn");
        historyBtn->setGeometry(QRect(10, 200, 211, 41));
        historyBtn->setFont(font4);
        historyBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        historyBtn->setStyleSheet(QString::fromUtf8("text-align: left;padding-left: 40px;;border: none;\n"
"background-color: transparent;\n"
"border-radius: 10px;\n"
"color: rgb(195, 195, 195);"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/img/img/history.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        historyBtn->setIcon(icon5);
        historyBtn->setIconSize(QSize(28, 28));
        profileBtn = new QPushButton(centralwidget);
        profileBtn->setObjectName("profileBtn");
        profileBtn->setGeometry(QRect(10, 250, 211, 41));
        profileBtn->setFont(font4);
        profileBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        profileBtn->setStyleSheet(QString::fromUtf8("text-align: left;padding-left: 40px;border: none;background-color: transparent;border-radius: 10px;color: rgb(195, 195, 195);"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/img/img/user (1).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        profileBtn->setIcon(icon6);
        profileBtn->setIconSize(QSize(25, 25));
        homeBtn = new QPushButton(centralwidget);
        homeBtn->setObjectName("homeBtn");
        homeBtn->setGeometry(QRect(10, 100, 211, 41));
        homeBtn->setFont(font4);
        homeBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        homeBtn->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: qlineargradient(spread:pad, x1:0.307, y1:1, x2:1, y2:1, stop:0 rgba(149, 161, 255, 255), stop:1 rgba(99, 117, 253, 255));\n"
"border-radius: 10px;\n"
"color: #fff;\n"
"text-align: left;padding-left: 40px;"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/img/img/home (1).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        homeBtn->setIcon(icon7);
        homeBtn->setIconSize(QSize(25, 25));
        cartBtn = new QPushButton(centralwidget);
        cartBtn->setObjectName("cartBtn");
        cartBtn->setGeometry(QRect(10, 150, 211, 41));
        cartBtn->setFont(font4);
        cartBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        cartBtn->setStyleSheet(QString::fromUtf8("text-align: left;padding-left: 40px;;border: none;\n"
"background-color: transparent;\n"
"border-radius: 10px;\n"
"color: rgb(195, 195, 195);"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/img/img/shopping-cart.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cartBtn->setIcon(icon8);
        cartBtn->setIconSize(QSize(25, 25));
        logo = new QLabel(centralwidget);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(0, 0, 229, 74));
        QFont font5;
        font5.setPointSize(30);
        font5.setWeight(QFont::ExtraBold);
        font5.setItalic(false);
        font5.setUnderline(false);
        font5.setStrikeOut(false);
        logo->setFont(font5);
        logo->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        logo->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color: #fff;\n"
"\n"
""));
        logo->setFrameShadow(QFrame::Shadow::Plain);
        logo->setLineWidth(1);
        logo->setPixmap(QPixmap(QString::fromUtf8(":/new/img/img/logoTest.PNG")));
        logo->setScaledContents(true);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(230, 70, 1001, 761));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        home = new QWidget();
        home->setObjectName("home");
        productW = new QWidget(home);
        productW->setObjectName("productW");
        productW->setGeometry(QRect(10, 60, 981, 701));
        productW->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: #f9f9f9;\n"
"border-radius: 10px;"));
        label_43 = new QLabel(home);
        label_43->setObjectName("label_43");
        label_43->setGeometry(QRect(50, 14, 231, 41));
        QFont font6;
        font6.setPointSize(16);
        font6.setBold(true);
        label_43->setFont(font6);
        label_43->setStyleSheet(QString::fromUtf8("color: #396AFF;"));
        widget_9 = new QWidget(home);
        widget_9->setObjectName("widget_9");
        widget_9->setGeometry(QRect(30, 10, 941, 51));
        widget_9->setStyleSheet(QString::fromUtf8("background-color: #E7EDFF;\n"
""));
        stackedWidget->addWidget(home);
        widget_9->raise();
        productW->raise();
        label_43->raise();
        cartView = new QWidget();
        cartView->setObjectName("cartView");
        label_27 = new QLabel(cartView);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(20, 90, 601, 631));
        label_27->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 10px;"));
        label_26 = new QLabel(cartView);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(30, 20, 231, 41));
        label_26->setFont(font6);
        label_26->setStyleSheet(QString::fromUtf8("color: #396AFF;"));
        cartWidget = new QWidget(cartView);
        cartWidget->setObjectName("cartWidget");
        cartWidget->setGeometry(QRect(30, 100, 581, 611));
        widget_5 = new QWidget(cartView);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(640, 90, 341, 591));
        label_28 = new QLabel(widget_5);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(10, 20, 231, 41));
        label_28->setFont(font6);
        label_28->setStyleSheet(QString::fromUtf8("color: #333;\n"
""));
        moneyPreBuy = new QLabel(widget_5);
        moneyPreBuy->setObjectName("moneyPreBuy");
        moneyPreBuy->setGeometry(QRect(110, 410, 211, 31));
        moneyPreBuy->setFont(font6);
        moneyPreBuy->setStyleSheet(QString::fromUtf8("color: #396AFF;\n"
"qproperty-alignment: 'AlignRight';"));
        label_42 = new QLabel(widget_5);
        label_42->setObjectName("label_42");
        label_42->setGeometry(QRect(10, 410, 161, 31));
        QFont font7;
        font7.setPointSize(15);
        label_42->setFont(font7);
        label_42->setStyleSheet(QString::fromUtf8("color: #555;\n"
"qproperty-alignment: 'AlignLeft';"));
        pushButton_3 = new QPushButton(widget_5);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(160, 480, 161, 51));
        QFont font8;
        font8.setPointSize(13);
        font8.setWeight(QFont::DemiBold);
        pushButton_3->setFont(font8);
        pushButton_3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: #396AFF;\n"
"color: #fff;\n"
"border: none;\n"
"border-radius: 5px;"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/img/img/payment-method.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_3->setIcon(icon9);
        pushButton_3->setIconSize(QSize(26, 26));
        preBuyW = new QWidget(widget_5);
        preBuyW->setObjectName("preBuyW");
        preBuyW->setGeometry(QRect(0, 60, 331, 351));
        label_40 = new QLabel(cartView);
        label_40->setObjectName("label_40");
        label_40->setGeometry(QRect(630, 90, 351, 631));
        label_40->setStyleSheet(QString::fromUtf8("border-radius: 10px;background-color: #fff;\n"
""));
        widget_6 = new QWidget(cartView);
        widget_6->setObjectName("widget_6");
        widget_6->setGeometry(QRect(20, 10, 961, 61));
        widget_6->setStyleSheet(QString::fromUtf8("background-color: #E7EDFF;\n"
""));
        refeshInv_2 = new QPushButton(widget_6);
        refeshInv_2->setObjectName("refeshInv_2");
        refeshInv_2->setGeometry(QRect(900, 0, 51, 61));
        refeshInv_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        refeshInv_2->setStyleSheet(QString::fromUtf8("\n"
"background-color:#E7EDFF;\n"
"border-radius: 20px;"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/img/img/sync (1).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        refeshInv_2->setIcon(icon10);
        refeshInv_2->setIconSize(QSize(28, 28));
        stackedWidget->addWidget(cartView);
        widget_6->raise();
        label_40->raise();
        label_27->raise();
        label_26->raise();
        cartWidget->raise();
        widget_5->raise();
        historyView = new QWidget();
        historyView->setObjectName("historyView");
        label_24 = new QLabel(historyView);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(20, 100, 961, 641));
        label_24->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 20px;"));
        label_25 = new QLabel(historyView);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(50, 20, 231, 41));
        label_25->setFont(font6);
        label_25->setStyleSheet(QString::fromUtf8("color: #396AFF;"));
        widget_3 = new QWidget(historyView);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(60, 110, 881, 611));
        nameLabel_3 = new QLabel(widget_3);
        nameLabel_3->setObjectName("nameLabel_3");
        nameLabel_3->setGeometry(QRect(190, 16, 40, 21));
        QFont font9;
        font9.setPointSize(14);
        font9.setWeight(QFont::DemiBold);
        nameLabel_3->setFont(font9);
        nameLabel_3->setStyleSheet(QString::fromUtf8("color: black;"));
        nameLabel_2 = new QLabel(widget_3);
        nameLabel_2->setObjectName("nameLabel_2");
        nameLabel_2->setGeometry(QRect(10, 16, 41, 21));
        nameLabel_2->setFont(font9);
        nameLabel_2->setStyleSheet(QString::fromUtf8("color: black;"));
        nameLabel_5 = new QLabel(widget_3);
        nameLabel_5->setObjectName("nameLabel_5");
        nameLabel_5->setGeometry(QRect(260, 16, 111, 21));
        QFont font10;
        font10.setPointSize(14);
        font10.setBold(true);
        nameLabel_5->setFont(font10);
        nameLabel_5->setStyleSheet(QString::fromUtf8("color: #396AFF;"));
        nameLabel_4 = new QLabel(widget_3);
        nameLabel_4->setObjectName("nameLabel_4");
        nameLabel_4->setGeometry(QRect(60, 16, 111, 21));
        nameLabel_4->setFont(font10);
        nameLabel_4->setStyleSheet(QString::fromUtf8("color: #396AFF;"));
        refeshInv = new QPushButton(widget_3);
        refeshInv->setObjectName("refeshInv");
        refeshInv->setGeometry(QRect(388, 10, 41, 41));
        refeshInv->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        refeshInv->setStyleSheet(QString::fromUtf8("\n"
"background-color:#E7EDFF;\n"
"border-radius: 20px;"));
        refeshInv->setIcon(icon10);
        refeshInv->setIconSize(QSize(20, 20));
        tableViewInvoiceCus = new QTableView(widget_3);
        tableViewInvoiceCus->setObjectName("tableViewInvoiceCus");
        tableViewInvoiceCus->setGeometry(QRect(0, 60, 881, 551));
        tableViewInvoiceCus->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::PointingHandCursor)));
        tableViewInvoiceCus->setStyleSheet(QString::fromUtf8("\n"
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
"	padding:15px 0px 15px 35px;     \n"
" 	border-left: none;          \n"
"    border-right: none;         \n"
"    border-top: 1px solid #E6EFF5;        \n"
"}\n"
"QTableView::item:selected {\n"
"    background-color:#95a1ff;     \n"
"    color: white;                        \n"
"}\n"
"QScrollBar:horizontal, QScrollBar:vertical { height: 0px; width: 0px; }"));
        tableViewInvoiceCus->setAutoScroll(false);
        tableViewInvoiceCus->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableViewInvoiceCus->setShowGrid(false);
        tableViewInvoiceCus->setGridStyle(Qt::PenStyle::SolidLine);
        tableViewInvoiceCus->setWordWrap(true);
        tableViewInvoiceCus->setCornerButtonEnabled(true);
        tableViewInvoiceCus->horizontalHeader()->setVisible(true);
        tableViewInvoiceCus->horizontalHeader()->setMinimumSectionSize(10);
        tableViewInvoiceCus->horizontalHeader()->setDefaultSectionSize(100);
        tableViewInvoiceCus->horizontalHeader()->setHighlightSections(true);
        tableViewInvoiceCus->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableViewInvoiceCus->verticalHeader()->setVisible(true);
        tableViewInvoiceCus->verticalHeader()->setCascadingSectionResizes(true);
        comboBox = new QComboBox(widget_3);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(700, 8, 181, 41));
        comboBox->setFont(font2);
        comboBox->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        comboBox->setStyleSheet(QString::fromUtf8("/*color: #000;\n"
"padding-left: 10px;\n"
"background-color:#E7EDFF;\n"
"border-radius: 5px;*/\n"
"QComboBox {\n"
"border: none;\n"
"background-color:#E7EDFF;\n"
"padding-left: 10px;\n"
"border-radius: 2px;\n"
"color: #000;\n"
"}\n"
"\n"
"QComboBox::drop-down{\n"
"	image:url(:/new/img/img/down.png);\n"
"        width:16px;                                  \n"
"        height:16px;                              \n"
"	padding: 12px ;\n"
"}\n"
"\n"
"QComboBox::drop-down::on{\n"
"	image:url(:/new/img/img/up.png);\n"
"}\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #E7EDFF; /* M\303\240u n\341\273\201n */\n"
"    border: node;\n"
"    selection-background-color: #B0C4DE; /* M\303\240u n\341\273\201n khi hover */\n"
"    selection-color: #000; /* M\303\240u ch\341\273\257 khi hover */\n"
"    padding: 5px;\n"
"    color: #000;\n"
"    outline: none;\n"
"}"));
        widget_7 = new QWidget(historyView);
        widget_7->setObjectName("widget_7");
        widget_7->setGeometry(QRect(20, 10, 961, 61));
        widget_7->setStyleSheet(QString::fromUtf8("background-color: #E7EDFF;\n"
""));
        stackedWidget->addWidget(historyView);
        label_24->raise();
        widget_7->raise();
        label_25->raise();
        widget_3->raise();
        profileView = new QWidget();
        profileView->setObjectName("profileView");
        avtLabel = new QLabel(profileView);
        avtLabel->setObjectName("avtLabel");
        avtLabel->setGeometry(QRect(90, 130, 191, 191));
        avtLabel->setStyleSheet(QString::fromUtf8("border-radius: 90px;\n"
"background-color: #f7f7f7;\n"
"border:none;"));
        avtLabel->setPixmap(QPixmap(QString::fromUtf8(":/new/img/img/batman_hero_avatar_comics-512.png")));
        avtLabel->setScaledContents(true);
        editAvtBtn = new QPushButton(profileView);
        editAvtBtn->setObjectName("editAvtBtn");
        editAvtBtn->setGeometry(QRect(230, 280, 40, 40));
        editAvtBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        editAvtBtn->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: #f7f7f7;\n"
"border:none;\n"
"background-color: rgb(55, 3, 225);"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/img/img/pencil.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        editAvtBtn->setIcon(icon11);
        editAvtBtn->setIconSize(QSize(22, 23));
        label_4 = new QLabel(profileView);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 90, 961, 651));
        label_4->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 20px;"));
        widget = new QWidget(profileView);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(320, 100, 621, 571));
        phoneLb = new QLineEdit(widget);
        phoneLb->setObjectName("phoneLb");
        phoneLb->setGeometry(QRect(60, 200, 241, 41));
        phoneLb->setFont(font2);
        phoneLb->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        phoneLb->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;"));
        country_Lb = new QLabel(widget);
        country_Lb->setObjectName("country_Lb");
        country_Lb->setGeometry(QRect(340, 290, 241, 41));
        QFont font11;
        font11.setPointSize(11);
        font11.setBold(false);
        country_Lb->setFont(font11);
        country_Lb->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        country_Lb->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;\n"
"color:black;"));
        nameLabel = new QLabel(widget);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(60, 80, 81, 21));
        QFont font12;
        font12.setPointSize(11);
        font12.setWeight(QFont::DemiBold);
        nameLabel->setFont(font12);
        nameLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        passLb_2 = new QLineEdit(widget);
        passLb_2->setObjectName("passLb_2");
        passLb_2->setGeometry(QRect(340, 200, 241, 41));
        passLb_2->setFont(font2);
        passLb_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        passLb_2->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;"));
        passLb_2->setEchoMode(QLineEdit::EchoMode::Password);
        phoneLabel = new QLabel(widget);
        phoneLabel->setObjectName("phoneLabel");
        phoneLabel->setGeometry(QRect(60, 170, 101, 21));
        phoneLabel->setFont(font12);
        phoneLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        countryLabel = new QLabel(widget);
        countryLabel->setObjectName("countryLabel");
        countryLabel->setGeometry(QRect(340, 260, 81, 21));
        countryLabel->setFont(font12);
        countryLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        emailLabel = new QLabel(widget);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setGeometry(QRect(60, 350, 81, 21));
        emailLabel->setFont(font12);
        emailLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        emaiLb = new QLineEdit(widget);
        emaiLb->setObjectName("emaiLb");
        emaiLb->setGeometry(QRect(60, 380, 241, 41));
        emaiLb->setFont(font2);
        emaiLb->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        emaiLb->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;"));
        addressLabel = new QLabel(widget);
        addressLabel->setObjectName("addressLabel");
        addressLabel->setGeometry(QRect(60, 260, 81, 21));
        addressLabel->setFont(font12);
        addressLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        idLabel = new QLabel(widget);
        idLabel->setObjectName("idLabel");
        idLabel->setGeometry(QRect(340, 80, 111, 21));
        idLabel->setFont(font12);
        idLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        otherLabel = new QLabel(widget);
        otherLabel->setObjectName("otherLabel");
        otherLabel->setGeometry(QRect(340, 350, 121, 21));
        otherLabel->setFont(font12);
        otherLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        passLabel = new QLabel(widget);
        passLabel->setObjectName("passLabel");
        passLabel->setGeometry(QRect(340, 170, 81, 21));
        passLabel->setFont(font12);
        passLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        idLb = new QLabel(widget);
        idLb->setObjectName("idLb");
        idLb->setGeometry(QRect(340, 110, 241, 41));
        idLb->setFont(font11);
        idLb->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        idLb->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;\n"
"color:black;"));
        nameLb = new QLineEdit(widget);
        nameLb->setObjectName("nameLb");
        nameLb->setGeometry(QRect(60, 110, 241, 41));
        nameLb->setFont(font2);
        nameLb->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        nameLb->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;"));
        country_Lb_3 = new QLabel(widget);
        country_Lb_3->setObjectName("country_Lb_3");
        country_Lb_3->setGeometry(QRect(340, 380, 241, 41));
        country_Lb_3->setFont(font11);
        country_Lb_3->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        country_Lb_3->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;\n"
"color:black;"));
        saveBtn = new QPushButton(widget);
        saveBtn->setObjectName("saveBtn");
        saveBtn->setGeometry(QRect(400, 480, 181, 41));
        saveBtn->setFont(font2);
        saveBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        saveBtn->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: #f7f7f7;\n"
"border:none;\n"
"background-color: rgb(55, 3, 225);\n"
"text-align: left;\n"
"padding-left: 35px;\n"
"color: #fff;"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/new/img/img/diskette.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        saveBtn->setIcon(icon12);
        saveBtn->setIconSize(QSize(22, 23));
        address = new QLineEdit(widget);
        address->setObjectName("address");
        address->setGeometry(QRect(60, 290, 241, 41));
        address->setFont(font2);
        address->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        address->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;"));
        statusProfile = new QLabel(widget);
        statusProfile->setObjectName("statusProfile");
        statusProfile->setGeometry(QRect(60, 430, 521, 31));
        QFont font13;
        font13.setPointSize(15);
        font13.setBold(true);
        statusProfile->setFont(font13);
        statusProfile->setStyleSheet(QString::fromUtf8("color: red;"));
        widget_8 = new QWidget(profileView);
        widget_8->setObjectName("widget_8");
        widget_8->setGeometry(QRect(20, 10, 961, 61));
        widget_8->setStyleSheet(QString::fromUtf8("background-color: #E7EDFF;\n"
""));
        label_11 = new QLabel(widget_8);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 10, 231, 41));
        label_11->setFont(font10);
        label_11->setStyleSheet(QString::fromUtf8("color: #396AFF;\n"
""));
        stackedWidget->addWidget(profileView);
        widget_8->raise();
        label_4->raise();
        avtLabel->raise();
        editAvtBtn->raise();
        widget->raise();
        helpView = new QWidget();
        helpView->setObjectName("helpView");
        label_13 = new QLabel(helpView);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(20, 20, 961, 721));
        label_13->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 30px;"));
        label_5 = new QLabel(helpView);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(270, 30, 471, 91));
        QFont font14;
        font14.setPointSize(18);
        font14.setWeight(QFont::DemiBold);
        label_5->setFont(font14);
        label_5->setStyleSheet(QString::fromUtf8("color:#000;\n"
""));
        label_5->setWordWrap(true);
        widget_2 = new QWidget(helpView);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(40, 140, 491, 561));
        label_14 = new QLabel(widget_2);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 30, 461, 51));
        QFont font15;
        font15.setPointSize(13);
        label_14->setFont(font15);
        label_14->setStyleSheet(QString::fromUtf8("border: 1px solid #eee;\n"
"color: #555;\n"
"padding-left:15px; "));
        notifyBtn_2 = new QPushButton(widget_2);
        notifyBtn_2->setObjectName("notifyBtn_2");
        notifyBtn_2->setGeometry(QRect(430, 40, 31, 31));
        QFont font16;
        font16.setPointSize(5);
        notifyBtn_2->setFont(font16);
        notifyBtn_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        notifyBtn_2->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color:#E7EDFF;\n"
"border:none;"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/new/img/img/plus (1).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        notifyBtn_2->setIcon(icon13);
        notifyBtn_2->setIconSize(QSize(20, 20));
        notifyBtn_3 = new QPushButton(widget_2);
        notifyBtn_3->setObjectName("notifyBtn_3");
        notifyBtn_3->setGeometry(QRect(430, 110, 31, 31));
        notifyBtn_3->setFont(font16);
        notifyBtn_3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        notifyBtn_3->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color:#E7EDFF;\n"
"border:none;"));
        notifyBtn_3->setIcon(icon13);
        notifyBtn_3->setIconSize(QSize(20, 20));
        label_15 = new QLabel(widget_2);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 100, 461, 51));
        label_15->setFont(font15);
        label_15->setStyleSheet(QString::fromUtf8("border: 1px solid #eee;\n"
"color: #555;\n"
"padding-left:15px; "));
        notifyBtn_4 = new QPushButton(widget_2);
        notifyBtn_4->setObjectName("notifyBtn_4");
        notifyBtn_4->setGeometry(QRect(430, 180, 31, 31));
        notifyBtn_4->setFont(font16);
        notifyBtn_4->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        notifyBtn_4->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color:#E7EDFF;\n"
"border:none;"));
        notifyBtn_4->setIcon(icon13);
        notifyBtn_4->setIconSize(QSize(20, 20));
        label_16 = new QLabel(widget_2);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(10, 170, 461, 51));
        label_16->setFont(font15);
        label_16->setStyleSheet(QString::fromUtf8("border: 1px solid #eee;\n"
"color: #555;\n"
"padding-left:15px; "));
        notifyBtn_5 = new QPushButton(widget_2);
        notifyBtn_5->setObjectName("notifyBtn_5");
        notifyBtn_5->setGeometry(QRect(430, 250, 31, 31));
        notifyBtn_5->setFont(font16);
        notifyBtn_5->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        notifyBtn_5->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color:#E7EDFF;\n"
"border:none;"));
        notifyBtn_5->setIcon(icon13);
        notifyBtn_5->setIconSize(QSize(20, 20));
        label_17 = new QLabel(widget_2);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(10, 240, 461, 51));
        label_17->setFont(font15);
        label_17->setStyleSheet(QString::fromUtf8("border: 1px solid #eee;\n"
"color: #555;\n"
"padding-left:15px; "));
        label_18 = new QLabel(widget_2);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(10, 450, 461, 51));
        label_18->setFont(font15);
        label_18->setStyleSheet(QString::fromUtf8("border: 1px solid #eee;\n"
"color: #555;\n"
"padding-left:15px; "));
        label_19 = new QLabel(widget_2);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(10, 310, 461, 51));
        label_19->setFont(font15);
        label_19->setStyleSheet(QString::fromUtf8("border: 1px solid #eee;\n"
"color: #555;\n"
"padding-left:15px; "));
        label_20 = new QLabel(widget_2);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(10, 380, 461, 51));
        label_20->setFont(font15);
        label_20->setStyleSheet(QString::fromUtf8("border: 1px solid #eee;\n"
"color: #555;\n"
"padding-left:15px; "));
        notifyBtn_6 = new QPushButton(widget_2);
        notifyBtn_6->setObjectName("notifyBtn_6");
        notifyBtn_6->setGeometry(QRect(430, 320, 31, 31));
        notifyBtn_6->setFont(font16);
        notifyBtn_6->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        notifyBtn_6->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color:#E7EDFF;\n"
"border:none;"));
        notifyBtn_6->setIcon(icon13);
        notifyBtn_6->setIconSize(QSize(20, 20));
        notifyBtn_7 = new QPushButton(widget_2);
        notifyBtn_7->setObjectName("notifyBtn_7");
        notifyBtn_7->setGeometry(QRect(430, 390, 31, 31));
        notifyBtn_7->setFont(font16);
        notifyBtn_7->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        notifyBtn_7->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color:#E7EDFF;\n"
"border:none;"));
        notifyBtn_7->setIcon(icon13);
        notifyBtn_7->setIconSize(QSize(20, 20));
        notifyBtn_8 = new QPushButton(widget_2);
        notifyBtn_8->setObjectName("notifyBtn_8");
        notifyBtn_8->setGeometry(QRect(430, 460, 31, 31));
        notifyBtn_8->setFont(font16);
        notifyBtn_8->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        notifyBtn_8->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color:#E7EDFF;\n"
"border:none;"));
        notifyBtn_8->setIcon(icon13);
        notifyBtn_8->setIconSize(QSize(20, 20));
        label_21 = new QLabel(helpView);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(640, 200, 251, 251));
        label_21->setPixmap(QPixmap(QString::fromUtf8(":/new/img/img/problem.png")));
        label_21->setScaledContents(true);
        label_22 = new QLabel(helpView);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(650, 490, 231, 41));
        QFont font17;
        font17.setPointSize(17);
        font17.setWeight(QFont::DemiBold);
        label_22->setFont(font17);
        label_22->setStyleSheet(QString::fromUtf8("color:#000;\n"
""));
        label_22->setWordWrap(true);
        label_23 = new QLabel(helpView);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(560, 530, 411, 41));
        label_23->setFont(font8);
        label_23->setStyleSheet(QString::fromUtf8("\n"
"color:#555;"));
        label_23->setWordWrap(true);
        lineEdit = new QLineEdit(helpView);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(560, 590, 371, 41));
        QFont font18;
        font18.setPointSize(10);
        lineEdit->setFont(font18);
        lineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid #ccc;\n"
"color: #555;\n"
"padding-left:15px"));
        notifyBtn_9 = new QPushButton(helpView);
        notifyBtn_9->setObjectName("notifyBtn_9");
        notifyBtn_9->setGeometry(QRect(895, 595, 31, 31));
        notifyBtn_9->setFont(font18);
        notifyBtn_9->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        notifyBtn_9->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color:#E7EDFF;\n"
"border:none;\n"
"color: blue;"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/new/img/img/send.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        notifyBtn_9->setIcon(icon14);
        notifyBtn_9->setIconSize(QSize(17, 18));
        stackedWidget->addWidget(helpView);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 231, 71));
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(1020, 10, 211, 60));
        pushButton_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(230, 20, 1001, 811));
        label_12->setStyleSheet(QString::fromUtf8("background-color:#f7f7f7;"));
        user->setCentralWidget(centralwidget);
        label_12->raise();
        status->raise();
        find->raise();
        notifyBtn->raise();
        nameProfile->raise();
        findBtn->raise();
        personBtn->raise();
        logOutBtn->raise();
        helpBtn->raise();
        historyBtn->raise();
        profileBtn->raise();
        homeBtn->raise();
        cartBtn->raise();
        logo->raise();
        stackedWidget->raise();
        pushButton->raise();
        pushButton_2->raise();

        retranslateUi(user);
        QObject::connect(notifyBtn, &QPushButton::clicked, cartBtn, qOverload<>(&QPushButton::click));
        QObject::connect(pushButton, &QPushButton::clicked, homeBtn, qOverload<>(&QPushButton::click));
        QObject::connect(pushButton_2, &QPushButton::clicked, profileBtn, qOverload<>(&QPushButton::click));

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QMainWindow *user)
    {
        user->setWindowTitle(QCoreApplication::translate("user", "MainWindow", nullptr));
        find->setPlaceholderText(QCoreApplication::translate("user", "T\303\254m Ki\341\272\277m", nullptr));
        notifyBtn->setText(QString());
        status->setText(QCoreApplication::translate("user", "Trang Ch\341\273\247", nullptr));
        nameProfile->setText(QCoreApplication::translate("user", "unknown person", nullptr));
        findBtn->setText(QString());
        personBtn->setText(QString());
        logOutBtn->setText(QCoreApplication::translate("user", "\304\220\304\203ng Xu\341\272\245t", nullptr));
        helpBtn->setText(QCoreApplication::translate("user", "H\341\273\227 Tr\341\273\243", nullptr));
        historyBtn->setText(QCoreApplication::translate("user", "L\341\273\213ch S\341\273\255 Mua ", nullptr));
        profileBtn->setText(QCoreApplication::translate("user", "C\303\241 Nh\303\242n", nullptr));
        homeBtn->setText(QCoreApplication::translate("user", "Trang Ch\341\273\247", nullptr));
        cartBtn->setText(QCoreApplication::translate("user", "Gi\341\273\217 H\303\240ng", nullptr));
        logo->setText(QString());
        label_43->setText(QCoreApplication::translate("user", "Danh m\341\273\245c s\341\272\243n ph\341\272\251m", nullptr));
        label_27->setText(QString());
        label_26->setText(QCoreApplication::translate("user", "Gi\341\273\217 h\303\240ng c\341\273\247a b\341\272\241n", nullptr));
        label_28->setText(QCoreApplication::translate("user", "\304\220\306\241n mua", nullptr));
        moneyPreBuy->setText(QCoreApplication::translate("user", "120.000.000VND", nullptr));
        label_42->setText(QCoreApplication::translate("user", "T\341\273\225ng c\341\273\231ng:", nullptr));
        pushButton_3->setText(QCoreApplication::translate("user", " Mua ngay", nullptr));
        label_40->setText(QString());
        refeshInv_2->setText(QString());
        label_24->setText(QString());
        label_25->setText(QCoreApplication::translate("user", "L\341\273\213ch s\341\273\255 mua h\303\240ng", nullptr));
        nameLabel_3->setText(QCoreApplication::translate("user", "\304\220\341\272\277n", nullptr));
        nameLabel_2->setText(QCoreApplication::translate("user", "T\341\273\253", nullptr));
        nameLabel_5->setText(QCoreApplication::translate("user", "01/12/2024", nullptr));
        nameLabel_4->setText(QCoreApplication::translate("user", "10/12/2023", nullptr));
        refeshInv->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("user", "Tr\341\272\241ng th\303\241i ho\303\241 \304\221\306\241n", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("user", "\304\220\303\243 thanh to\303\241n", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("user", "Ch\306\260a thanh to\303\241n", nullptr));

        avtLabel->setText(QString());
        editAvtBtn->setText(QString());
        label_4->setText(QString());
        phoneLb->setText(QCoreApplication::translate("user", "0979783398", nullptr));
        country_Lb->setText(QCoreApplication::translate("user", "Vi\341\273\207t Nam", nullptr));
        nameLabel->setText(QCoreApplication::translate("user", "H\341\273\215 v\303\240 T\303\252n", nullptr));
        passLb_2->setText(QCoreApplication::translate("user", "unknown", nullptr));
        phoneLabel->setText(QCoreApplication::translate("user", "S\341\273\221 \304\220i\341\273\207n Tho\341\272\241i", nullptr));
        countryLabel->setText(QCoreApplication::translate("user", "Qu\341\273\221c Gia", nullptr));
        emailLabel->setText(QCoreApplication::translate("user", "Email", nullptr));
        emaiLb->setText(QCoreApplication::translate("user", "unknown@gmail.dev.com", nullptr));
        addressLabel->setText(QCoreApplication::translate("user", "\304\220\341\273\213a Ch\341\273\211", nullptr));
        idLabel->setText(QCoreApplication::translate("user", "ID \304\220\304\203ng Nh\341\272\255p", nullptr));
        otherLabel->setText(QCoreApplication::translate("user", "Th\303\264ng Tin Kh\303\241c", nullptr));
        passLabel->setText(QCoreApplication::translate("user", "M\341\272\255t Kh\341\272\251u", nullptr));
        idLb->setText(QCoreApplication::translate("user", "CS 00000", nullptr));
        nameLb->setText(QCoreApplication::translate("user", "admin", nullptr));
        country_Lb_3->setText(QCoreApplication::translate("user", "Th\303\255ch c\303\240i win d\341\272\241o.", nullptr));
        saveBtn->setText(QCoreApplication::translate("user", "L\306\260u Th\303\264ng Tin", nullptr));
        address->setText(QCoreApplication::translate("user", "email@gmail.dev.com", nullptr));
        statusProfile->setText(QString());
        label_11->setText(QCoreApplication::translate("user", "S\341\273\255a Th\303\264ng Tin C\303\241 Nh\303\242n", nullptr));
        label_13->setText(QString());
        label_5->setText(QCoreApplication::translate("user", "H\341\273\207 th\341\273\221ng ch\304\203m s\303\263c kh\303\241ch h\303\240ng LapShop", nullptr));
        label_14->setText(QCoreApplication::translate("user", "L\303\240m sao \304\221\341\273\203 li\303\252n h\341\273\207 v\341\273\233i ch\303\272ng t\303\264i?", nullptr));
        notifyBtn_2->setText(QString());
        notifyBtn_3->setText(QString());
        label_15->setText(QCoreApplication::translate("user", "H\306\260\341\273\233ng d\341\272\253n ki\341\273\203m tra h\303\240ng khi nh\341\272\255n?", nullptr));
        notifyBtn_4->setText(QString());
        label_16->setText(QCoreApplication::translate("user", "L\303\240m sao \304\221\341\273\203 tr\341\272\243 h\303\240ng?", nullptr));
        notifyBtn_5->setText(QString());
        label_17->setText(QCoreApplication::translate("user", "T\303\264i kh\303\264ng th\341\273\203 ch\341\273\211nh s\341\273\255a th\303\264ng tin c\303\241 nh\303\242n.", nullptr));
        label_18->setText(QCoreApplication::translate("user", "H\306\260\341\273\233ng d\341\272\253n mua tr\341\272\243 g\303\263p", nullptr));
        label_19->setText(QCoreApplication::translate("user", "Ph\341\272\243n \303\241nh ch\341\272\245t l\306\260\341\273\243ng d\341\273\213ch v\341\273\245 c\341\273\247a LapShop.", nullptr));
        label_20->setText(QCoreApplication::translate("user", "T\303\264i c\303\263 th\341\273\203 n\303\242ng c\341\272\245p laptop \341\273\237 \304\221\303\242y kh\303\264ng?", nullptr));
        notifyBtn_6->setText(QString());
        notifyBtn_7->setText(QString());
        notifyBtn_8->setText(QString());
        label_21->setText(QString());
        label_22->setText(QCoreApplication::translate("user", "B\341\272\241n c\303\263 th\341\272\257c m\341\272\257c?", nullptr));
        label_23->setText(QCoreApplication::translate("user", "H\303\243y \304\221\341\272\267t c\303\242u h\341\273\217i cho ch\303\272ng t\303\264i \304\221\341\273\203 \304\221\306\260\341\273\243c gi\341\272\243i \304\221\303\241p.", nullptr));
        lineEdit->setText(QString());
        notifyBtn_9->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label_12->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
