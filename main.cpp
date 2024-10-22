#include "./ui_mainwindow.h"
#include "mainwindow.h"
#include"global.h"
#include<QObject>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Login");
    setWindowIcon(QIcon(":/new/img/img/images.jpg"));

    // add su kien close cho 2 btn
    connect(ui->closeBtn, &QPushButton::clicked, this, &MainWindow::closeApp);
    connect(ui->closeBtn_2, &QPushButton::clicked, this, &MainWindow::closeApp);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked(){
    person p;
    int isLogin = person::login((ui->id->text()).toStdString(),(ui->pw->text()).toStdString(),&p);
    if(isLogin){
        ui->loginStatus->setText("Đăng Nhập Thành Công!");

        if(p.getRole() == "admin"){
            this->close();
            curPerson = &p;

            admin *adminHome = new admin();
            adminHome->setAttribute(Qt::WA_DeleteOnClose); // Đảm bảo adminHome tự hủy khi đóng
            adminHome->show();
        }

    }else{
      ui->loginStatus->setText("Sai ID hoặc Mật Khẩu!");
    }

}
void MainWindow::closeApp()
{
    this->close();
}


void MainWindow::on_signUpBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}
void MainWindow::on_returnLoginBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
Ui::MainWindow* MainWindow::getptr(){
    return ui;
}



