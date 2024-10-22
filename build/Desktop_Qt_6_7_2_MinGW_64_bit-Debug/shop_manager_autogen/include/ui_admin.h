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
    QLabel *label_2;
    QWidget *staff;
    QLabel *label_3;
    QWidget *customer;
    QLabel *label_5;
    QWidget *product;
    QLabel *label_6;
    QWidget *money;
    QLabel *label_7;
    QWidget *profile;
    QLabel *label_8;
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
    QLineEdit *countryLb;
    QLabel *phoneLabel;
    QLineEdit *phoneLb;
    QLabel *otherLabel;
    QLineEdit *otherLb;
    QPushButton *saveBtn;
    QPushButton *homeBtn;
    QPushButton *staffBtn;
    QPushButton *personBtn;
    QPushButton *cusBtn;
    QPushButton *prdBtn;
    QPushButton *moneyBtn;
    QPushButton *profileBtn;
    QPushButton *findBtn;
    QPushButton *notifyBtn;
    QLabel *logoLabel_2;
    QPushButton *logOutBtn;

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
        label_2 = new QLabel(home);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(390, 200, 451, 191));
        label_2->setStyleSheet(QString::fromUtf8("color:#000;"));
        stackedWidget->addWidget(home);
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
        label_8 = new QLabel(profile);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(460, 0, 49, 16));
        label_8->setStyleSheet(QString::fromUtf8("color: black;"));
        label_4 = new QLabel(profile);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 20, 961, 711));
        label_4->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 30px;"));
        label_9 = new QLabel(profile);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(70, 50, 231, 41));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        label_9->setFont(font4);
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
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/img/img/pencil.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        editAvtBtn->setIcon(icon);
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
        QFont font5;
        font5.setPointSize(11);
        font5.setWeight(QFont::DemiBold);
        nameLabel->setFont(font5);
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
        idLabel->setFont(font5);
        idLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        passLb = new QLabel(profile);
        passLb->setObjectName("passLb");
        passLb->setGeometry(QRect(660, 180, 241, 41));
        QFont font6;
        font6.setPointSize(11);
        font6.setBold(false);
        passLb->setFont(font6);
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
        emailLabel->setFont(font5);
        emailLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        passLabel = new QLabel(profile);
        passLabel->setObjectName("passLabel");
        passLabel->setGeometry(QRect(660, 240, 81, 21));
        passLabel->setFont(font5);
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
        addressLabel->setFont(font5);
        addressLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        addressLb = new QLineEdit(profile);
        addressLb->setObjectName("addressLb");
        addressLb->setGeometry(QRect(380, 360, 241, 41));
        QFont font7;
        font7.setPointSize(10);
        addressLb->setFont(font7);
        addressLb->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        addressLb->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;"));
        countryLabel = new QLabel(profile);
        countryLabel->setObjectName("countryLabel");
        countryLabel->setGeometry(QRect(660, 330, 81, 21));
        countryLabel->setFont(font5);
        countryLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        countryLb = new QLineEdit(profile);
        countryLb->setObjectName("countryLb");
        countryLb->setGeometry(QRect(660, 360, 241, 41));
        countryLb->setFont(font2);
        countryLb->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        countryLb->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;"));
        phoneLabel = new QLabel(profile);
        phoneLabel->setObjectName("phoneLabel");
        phoneLabel->setGeometry(QRect(380, 420, 101, 21));
        phoneLabel->setFont(font5);
        phoneLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        phoneLb = new QLineEdit(profile);
        phoneLb->setObjectName("phoneLb");
        phoneLb->setGeometry(QRect(380, 450, 241, 41));
        phoneLb->setFont(font7);
        phoneLb->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        phoneLb->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: #000;\n"
"border: 1px solid #ccc;\n"
"padding-left: 10px;"));
        otherLabel = new QLabel(profile);
        otherLabel->setObjectName("otherLabel");
        otherLabel->setGeometry(QRect(660, 420, 121, 21));
        otherLabel->setFont(font5);
        otherLabel->setStyleSheet(QString::fromUtf8("color: black;"));
        otherLb = new QLineEdit(profile);
        otherLb->setObjectName("otherLb");
        otherLb->setGeometry(QRect(660, 450, 241, 41));
        otherLb->setFont(font7);
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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/img/img/diskette.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        saveBtn->setIcon(icon1);
        saveBtn->setIconSize(QSize(22, 23));
        stackedWidget->addWidget(profile);
        label_8->raise();
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
        countryLb->raise();
        phoneLabel->raise();
        phoneLb->raise();
        otherLabel->raise();
        otherLb->raise();
        saveBtn->raise();
        homeBtn = new QPushButton(centralwidget);
        homeBtn->setObjectName("homeBtn");
        homeBtn->setGeometry(QRect(10, 90, 211, 41));
        QFont font8;
        font8.setPointSize(13);
        font8.setBold(true);
        homeBtn->setFont(font8);
        homeBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        homeBtn->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: qlineargradient(spread:pad, x1:0.307, y1:1, x2:1, y2:1, stop:0 rgba(149, 161, 255, 255), stop:1 rgba(99, 117, 253, 255));\n"
"border-radius: 10px;\n"
"color: #fff;\n"
"text-align: left;padding-left: 40px;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/img/img/home (1).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        homeBtn->setIcon(icon2);
        homeBtn->setIconSize(QSize(25, 25));
        staffBtn = new QPushButton(centralwidget);
        staffBtn->setObjectName("staffBtn");
        staffBtn->setGeometry(QRect(10, 140, 211, 41));
        staffBtn->setFont(font8);
        staffBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        staffBtn->setStyleSheet(QString::fromUtf8("text-align: left;padding-left: 40px;;border: none;\n"
"background-color: transparent;\n"
"border-radius: 10px;\n"
"color: rgb(195, 195, 195);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/img/img/team.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        staffBtn->setIcon(icon3);
        staffBtn->setIconSize(QSize(25, 25));
        personBtn = new QPushButton(centralwidget);
        personBtn->setObjectName("personBtn");
        personBtn->setGeometry(QRect(1020, 20, 41, 41));
        personBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        personBtn->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: #f7f7f7;\n"
"border:none;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/img/img/batman_hero_avatar_comics-512.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        personBtn->setIcon(icon4);
        personBtn->setIconSize(QSize(43, 43));
        cusBtn = new QPushButton(centralwidget);
        cusBtn->setObjectName("cusBtn");
        cusBtn->setGeometry(QRect(10, 190, 211, 41));
        cusBtn->setFont(font8);
        cusBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        cusBtn->setStyleSheet(QString::fromUtf8("text-align: left;padding-left: 40px;;border: none;\n"
"background-color: transparent;\n"
"border-radius: 10px;\n"
"color: rgb(195, 195, 195);"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/img/img/customer.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cusBtn->setIcon(icon5);
        cusBtn->setIconSize(QSize(25, 25));
        prdBtn = new QPushButton(centralwidget);
        prdBtn->setObjectName("prdBtn");
        prdBtn->setGeometry(QRect(10, 240, 211, 41));
        prdBtn->setFont(font8);
        prdBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        prdBtn->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: transparent;\n"
"border-radius: 10px;\n"
"color: rgb(195, 195, 195);\n"
"text-align: left;padding-left: 40px;"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/img/img/product-management.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        prdBtn->setIcon(icon6);
        prdBtn->setIconSize(QSize(30, 30));
        moneyBtn = new QPushButton(centralwidget);
        moneyBtn->setObjectName("moneyBtn");
        moneyBtn->setGeometry(QRect(10, 290, 211, 41));
        moneyBtn->setFont(font8);
        moneyBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        moneyBtn->setStyleSheet(QString::fromUtf8("text-align: left;padding-left: 40px;;border: none;\n"
"background-color: transparent;\n"
"border-radius: 10px;\n"
"color: rgb(195, 195, 195);"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/img/img/profit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        moneyBtn->setIcon(icon7);
        moneyBtn->setIconSize(QSize(25, 25));
        profileBtn = new QPushButton(centralwidget);
        profileBtn->setObjectName("profileBtn");
        profileBtn->setGeometry(QRect(10, 340, 211, 41));
        profileBtn->setFont(font8);
        profileBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        profileBtn->setStyleSheet(QString::fromUtf8("text-align: left;padding-left: 40px;border: none;background-color: transparent;border-radius: 10px;color: rgb(195, 195, 195);"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/img/img/user (1).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        profileBtn->setIcon(icon8);
        profileBtn->setIconSize(QSize(25, 25));
        findBtn = new QPushButton(centralwidget);
        findBtn->setObjectName("findBtn");
        findBtn->setGeometry(QRect(850, 20, 81, 41));
        findBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        findBtn->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: #ccc;\n"
"border-radius: 20px;\n"
"color: #ccc;"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/img/img/magnifying-glass.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        findBtn->setIcon(icon9);
        findBtn->setIconSize(QSize(20, 20));
        notifyBtn = new QPushButton(centralwidget);
        notifyBtn->setObjectName("notifyBtn");
        notifyBtn->setGeometry(QRect(970, 20, 41, 41));
        notifyBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        notifyBtn->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"background-color: #f7f7f7;\n"
"border:none;"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/img/img/bell.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        notifyBtn->setIcon(icon10);
        notifyBtn->setIconSize(QSize(20, 20));
        logoLabel_2 = new QLabel(centralwidget);
        logoLabel_2->setObjectName("logoLabel_2");
        logoLabel_2->setGeometry(QRect(0, 0, 229, 74));
        QFont font9;
        font9.setPointSize(30);
        font9.setWeight(QFont::ExtraBold);
        font9.setItalic(false);
        font9.setUnderline(false);
        font9.setStrikeOut(false);
        logoLabel_2->setFont(font9);
        logoLabel_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        logoLabel_2->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color: #fff;\n"
"\n"
""));
        logoLabel_2->setFrameShadow(QFrame::Shadow::Plain);
        logoLabel_2->setLineWidth(1);
        logoLabel_2->setPixmap(QPixmap(QString::fromUtf8(":/new/img/img/logoTest.PNG")));
        logoLabel_2->setScaledContents(true);
        logOutBtn = new QPushButton(centralwidget);
        logOutBtn->setObjectName("logOutBtn");
        logOutBtn->setGeometry(QRect(40, 760, 150, 31));
        QFont font10;
        font10.setPointSize(9);
        font10.setBold(true);
        logOutBtn->setFont(font10);
        logOutBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        logOutBtn->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: qlineargradient(spread:pad, x1:0.307, y1:1, x2:1, y2:1, stop:0 rgba(149, 161, 255, 255), stop:1 rgba(99, 117, 253, 255));\n"
"border-radius: 15px;\n"
"color:#fff;\n"
""));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/img/img/logout.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        logOutBtn->setIcon(icon11);
        logOutBtn->setIconSize(QSize(20, 20));
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
        personBtn->raise();
        findBtn->raise();
        notifyBtn->raise();
        logoLabel_2->raise();
        logOutBtn->raise();

        retranslateUi(admin);

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
        label_2->setText(QCoreApplication::translate("admin", "Trang ch\341\273\247", nullptr));
        label_3->setText(QCoreApplication::translate("admin", "Nh\303\242n vi\303\252n", nullptr));
        label_5->setText(QCoreApplication::translate("admin", "trang lo", nullptr));
        label_6->setText(QCoreApplication::translate("admin", "Sanr pham", nullptr));
        label_7->setText(QCoreApplication::translate("admin", "Doanh Thu", nullptr));
        label_8->setText(QCoreApplication::translate("admin", "Ca nhan", nullptr));
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
        countryLb->setText(QCoreApplication::translate("admin", "Vi\341\273\207t Nam", nullptr));
        phoneLabel->setText(QCoreApplication::translate("admin", "S\341\273\221 \304\220i\341\273\207n Tho\341\272\241i", nullptr));
        phoneLb->setText(QCoreApplication::translate("admin", "0979.696.696", nullptr));
        otherLabel->setText(QCoreApplication::translate("admin", "Th\303\264ng Tin Kh\303\241c", nullptr));
        otherLb->setText(QCoreApplication::translate("admin", "S\341\273\237 Th\303\255ch: C\303\240i win d\341\272\241o.", nullptr));
        saveBtn->setText(QCoreApplication::translate("admin", "L\306\260u Th\303\264ng Tin", nullptr));
        homeBtn->setText(QCoreApplication::translate("admin", "Trang Ch\341\273\247", nullptr));
        staffBtn->setText(QCoreApplication::translate("admin", "Nh\303\242n Vi\303\252n", nullptr));
        personBtn->setText(QString());
        cusBtn->setText(QCoreApplication::translate("admin", "Kh\303\241ch H\303\240ng", nullptr));
        prdBtn->setText(QCoreApplication::translate("admin", "S\341\272\243n Ph\341\272\251m", nullptr));
        moneyBtn->setText(QCoreApplication::translate("admin", "Doanh Thu", nullptr));
        profileBtn->setText(QCoreApplication::translate("admin", "C\303\241 Nh\303\242n", nullptr));
        findBtn->setText(QString());
        notifyBtn->setText(QString());
        logoLabel_2->setText(QString());
        logOutBtn->setText(QCoreApplication::translate("admin", "\304\220\304\203ng Xu\341\272\245t", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
