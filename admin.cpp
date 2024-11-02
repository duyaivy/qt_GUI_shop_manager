#include<qstring.h>
#include<qbuttongroup.h>
#include "admin.h"
#include "ui_admin.h"
#include"global.h"
#include "mainwindow.h"

admin::admin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::admin)
{
    ui->setupUi(this);
    setWindowTitle("AdminHome");
    setWindowIcon(QIcon(":/new/img/img/images.jpg"));
    //set name
    if(curPerson){
        ui->nameProfile->setText(QString::fromStdString(curPerson->getName()));
    }
    // set click cho cac nut
    setGroupBtn();
    setGroupBtnPage();


}

admin::~admin()
{
    delete ui;
}
void admin::setGroupBtn(){
    QButtonGroup* buttonGroup = new QButtonGroup(this);
    buttonGroup->addButton(ui->homeBtn, 0); // gia su co cac nut: homeButton, employeeButton, customerButton
    buttonGroup->addButton(ui->staffBtn, 1);
    buttonGroup->addButton(ui->cusBtn, 2);
    buttonGroup->addButton(ui->prdBtn, 3);
    buttonGroup->addButton(ui->moneyBtn, 4);
    buttonGroup->addButton(ui->profileBtn, 5);
    QString btnNotClick = "text-align: left;padding-left: 40px;border: none;background-color: transparent;border-radius: 10px;color: rgb(195, 195, 195);font-size: 17px;";
    QString btnOnClick = " border: none;background-color: qlineargradient(spread:pad, x1:0.307, y1:1, x2:1, y2:1, stop:0 rgba(149, 161, 255, 255), stop:1 rgba(99, 117, 253, 255));border-radius: 10px;color: #fff; text-align: left;padding-left: 40px;";
    // lien ket
    connect(buttonGroup, &QButtonGroup::buttonClicked, this, [=](QAbstractButton* button) {
        int id = buttonGroup->id(button); // Lấy id của nút được nhấn

        // Đặt lại trạng thái của các nút
        for (auto btn : buttonGroup->buttons()) {
            btn->setStyleSheet(btnNotClick);
        }
        button->setStyleSheet(btnOnClick);

        // chuyen den man hinh tuong ung
        ui->status->setText(buttonGroup->button(id)->text());
        ui->stackedWidget->setCurrentIndex(id);
    });
}
void admin::setGroupBtnPage(){
    QButtonGroup* buttonGroup = new QButtonGroup(this);
    buttonGroup->addButton(ui->btn_1, 0);
    buttonGroup->addButton(ui->btn_2, 1);
    buttonGroup->addButton(ui->btn_3, 2);
    buttonGroup->addButton(ui->btn_nonLast, 3);
    buttonGroup->addButton(ui->btn_last, 4);

    QString btnNotClick = "background-color: transparent;color: rgb(35, 35, 35);border-radius: 2px;text-align: center;";
    QString btnOnClick = "background-color: rgb(115, 141, 255);color: #fff;border-radius: 2px;text-align: center;";
    // lien ket
    connect(buttonGroup, &QButtonGroup::buttonClicked, this, [=](QAbstractButton* button) {
        int id = buttonGroup->id(button);

        // Dat lai trang thai
        for (auto btn : buttonGroup->buttons()) {
            btn->setStyleSheet(btnNotClick);
        }
        button->setStyleSheet(btnOnClick);
        });
}
// void admin::connectLabel(){
//     connect(ui->logo, &QLabel::clicked, this, [this]() {
//         ui->homeBtn->click(); // Gọi click() của btnHome khi nhấn vào label

//     });
// }



void admin::on_logOutBtn_clicked()
{
    this->close();
    MainWindow *mw = new MainWindow;
    mw->setAttribute(Qt::WA_DeleteOnClose);
    mw->show();
}



