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

    Person *curP = nullptr;

    int isLogin = Person::login((ui->id->text()).toStdString(),(ui->pw->text()).toStdString(), curP);
    if(isLogin){
        ui->loginStatus->setText("Đăng Nhập Thành Công!");
        curP->getDelete();
        {
            // xu li sua dang nhap
            if(curP->getRole() == "CUSTOMER"){
                 curCustomer = dynamic_cast<Customer*>(curP);
                onLogin = curCustomer;
                 user *userHome = new user();
                userHome->setAttribute(Qt::WA_DeleteOnClose);
                userHome->show();
                this->close();
            }else{
               curEmployee = dynamic_cast<Employee*>(curP);
                onLogin = curEmployee;
                this->close();
                        admin *adminHome = new admin();
                        adminHome->setAttribute(Qt::WA_DeleteOnClose);
                        adminHome->show();
            }

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

void MainWindow::on_registerBtn_clicked(){
    string email = (ui->email->text()).toStdString();
    string address = (ui->address->text()).toStdString();
    string phone = (ui->phone->text()).toStdString();
    string name =   (ui->name->text()).toStdString();
    string password = (ui->password->text()).toStdString();
    if(email=="" || name=="" ||address==""||phone =="" || password==""){
        ui->loginStatus_2->setText("Các trường không được để trống");
    }else if(password!= (ui->re_password->text()).toStdString()){
        ui->loginStatus_2->setText("Mật khẩu nhập lại không khớp");
    }else{
        Customer *cus = new Customer(name,phone,email,password,false,address);
        Person::obj.push_back(cus);
        ui->loginStatus_2->setText("Đăng ký Khách Hàng thành công!");
        ui->address->setText("");
        ui->password->setText("");
        ui->phone->setText("");
        ui->name->setText("");
        ui->email->setText("");
        ui->re_password->setText("");
    }
}

