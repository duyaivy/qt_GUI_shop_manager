#include "modalview.h"
#include "ui_modalview.h"
#include"QButtonGroup"
#include <qfiledialog.h>
// #include "global.h"
#include <qmessagebox.h>
#include <QStandardItemModel>
using namespace std;

string address = "";
string s1 = "DE00001", s2 = "DE00002";
static cvector<string>tail = {s1,s2};
modalView::modalView(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::modalView)
{
    ui->setupUi(this);

    setWindowTitle("Modal");
    setWindowIcon(QIcon(":/new/img/img/images.jpg"));
    setGroupBtn();
    // setupInforView();
}

modalView::~modalView()
{
    delete ui;
}
void modalView::setPerson(Person * p){

}
void modalView::setGroupBtn(){

        QButtonGroup* buttonGroup = new QButtonGroup(this);
        buttonGroup->addButton(ui->handAdd, 0);
        buttonGroup->addButton(ui->fileAdd, 1);
        QString btnNotClick = "border:none;   background-color:transparent;color: #000;";
        QString btnOnClick = "border:none; background-color:transparent;color: #000;    border-bottom: 5px solid #396AFF;    font-weight:600;";
        // lien ket
        connect(buttonGroup, &QButtonGroup::buttonClicked, this, [=](QAbstractButton* button) {
            int id = buttonGroup->id(button); // Lấy id của nút được nhấn

            // Đặt lại trạng thái của các nút
            for (auto btn : buttonGroup->buttons()) {
                btn->setStyleSheet(btnNotClick);
            }
            button->setStyleSheet(btnOnClick);

            // chuyen den man hinh tuong ung
            ui->addStaffWitget->setCurrentIndex(id);

        });

        QButtonGroup* selectBtnGroup = new QButtonGroup(this);
        selectBtnGroup->addButton(ui->viewBtn, 0);
        selectBtnGroup->addButton(ui->updateBtn, 1);
        selectBtnGroup->addButton(ui->delBtn, 2);
        // lien ket
        connect(selectBtnGroup, &QButtonGroup::buttonClicked, this, [=](QAbstractButton* button) {
            int idz = selectBtnGroup->id(button); // Lấy id của nút được nhấn

            // Đặt lại trạng thái của các nút
            for (auto btn : selectBtnGroup->buttons()) {
                btn->setStyleSheet(btnNotClick);
            }
            button->setStyleSheet(btnOnClick);

            // chuyen den man hinh tuong ung
              ui->inforWidget->setCurrentIndex(idz);
            // xuli neu xoa doi tuong


            if(onLogin == nullptr || onLogin->getRole() != "MANAGER"){
                  QMessageBox msgBox;
                  msgBox.setIcon(QMessageBox::Critical);
                  msgBox.setWindowTitle("Lỗi phân quyền");
                  msgBox.setText("Nhân viên không được vào tính năng này!");
                  msgBox.setWindowIcon(QIcon(":/new/img/img/images.jpg")); // Đặt icon cho cửa sổ
                  msgBox.exec();
                }
            else{
            if(idz == 2){
                QMessageBox::StandardButton reply;
                reply = QMessageBox::question(this, "Xác nhận xoá", "Bạn có chắc chắn muốn xoá người này?\nSau khi xoá sẽ thoát khỏi modal.",
                QMessageBox::Yes | QMessageBox::No);

                if (reply == QMessageBox::Yes) {
                    selectPer->setDelete(1);
                    this->close();
                } else {
                    // xu li khi chon khong
                }
            }

    }

        });

}

void modalView::on_cancelBtn_clicked()
{
    this->close();
}


void modalView::on_saveBtn_clicked()
{

    string email = (ui->emaiLb->text()).toStdString();
    string phone = (ui->phoneLb->text()).toStdString();
    string name =   (ui->nameLb->text()).toStdString();
    string day =   (ui->dayLb->text()).toStdString();
    string password = (ui->passwordLb->text()).toStdString();
    if(email=="" || name=="" ||day==""||phone =="" || password==""){
        ui->statusAdd->setText("Các trường không được để trống!");
    }else if(password!= (ui->re_passwordLB->text()).toStdString()){
        ui->statusAdd->setText("Mật khẩu nhập lại không khớp!");
    }else{
        Employee *cus = new Employee(name,phone, email, password,"SALES",false,day);
        Person::obj.push_back(cus);
        ui->statusAdd->setText("Đăng ký Nhân Viên thành công!");
        ui->dayLb->setText("");
        ui->passwordLb->setText("");
        ui->phoneLb->setText("");
        ui->nameLb->setText("");
        ui->emaiLb->setText("");
        ui->re_passwordLB->setText("");
    }

}


void modalView::on_choseBtn_clicked()
{

    QString filename = QFileDialog::getOpenFileName(
        this,
        tr("Open File"),
        "C://",
        "Excel file (*.csv);;Text File (*.txt);;All files (*.*)"
        );
   address = filename.toStdString();
    // Kiểm tra nếu không chọn file nào
    if (filename.isEmpty()) {
        ui->textBrowser->setText("Không có file nào được chọn.");
        return;
    }

    // Mở file được chọn (hoặc file cụ thể)
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        ui->textBrowser->setText("Không thể mở file.");
        return;
    }

    // Đọc nội dung file
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textBrowser->setText(text);

    // Đóng file
    file.close();
}


void modalView::on_addBtn_clicked()
{
    if(onLogin == nullptr || onLogin->getRole() != "MANAGER"){
        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setWindowTitle("Lỗi phân quyền");
        msgBox.setText("Nhân viên không được vào tính năng này!");
        msgBox.setWindowIcon(QIcon(":/new/img/img/images.jpg")); // Đặt icon cho cửa sổ
        msgBox.exec();
    }
    else{
    if(address!=""){
        if( Employee::loadFromFile(address)){
               ui->textBrowser->setText("Thêm Nhân viên thành công!");
        }else{
            ui->textBrowser->setText("Thêm Nhân viên thất bại!");
        }
    }else{
         ui->textBrowser->setText("Thất bại! Chọn file và thử lại.");
    }
}
}

void modalView::on_cancelBtn_3_clicked()
{
    this->close();
}

void modalView::setStackWidget(int i){
    if(i>2){
         ui->stackedWidget->setCurrentIndex(0);
    }else{
        ui->stackedWidget->setCurrentIndex(i);
    }

}
void modalView::setupInforView(Person *p){
    if(p == nullptr||p->getDelete() == true){
        if(ui->stackedWidget->currentIndex() == 1){
            QMessageBox::critical(this, "Lỗi truy cập", "Người này đã bị xoá!");
            this->close();
        }
    }else{
        static cvector<string> *hang = nullptr;


        QString name = QString::fromStdString(p->getName());
        QString phone = QString::fromStdString(p->getPhone());
        QString email = QString::fromStdString(p->getEmail());
        QString pass = QString::fromStdString(p->getPass());
        // view
        ui->name->setText(name);
        ui->phone->setText(phone);
        ui->emailText->setText(email);
        ui->lineEdit->setText(pass);
        // update
        ui->nameUpdate->setText(name);
        ui->phoneUpdate->setText(phone);
        ui->emailUpdate->setText(email);
        ui->passUpdate->setText(pass);
        ui->repassUpdate->setText(pass);


        //invoice
        QStandardItemModel *modell = static_cast<QStandardItemModel *>(ui->tableViewInvoice->model());
        if (modell == nullptr) {
            modell = new QStandardItemModel(ui->tableViewInvoice);
            modell->setHorizontalHeaderLabels({"ID", "Thời gian", "Thành tiền"});
            ui->tableViewInvoice->setModel(modell);
        } else {
            modell->removeRows(0, modell->rowCount());
        }

        // Điền dữ liệu mới


        for (  Invoice *emp: selectPer->invoiceList) {

            if (emp) {
                QString id = QString::fromStdString(emp->getInvoiceID());
                QString time = QString::fromStdString(emp->getTime());
                QString price =QString::fromStdString(formatCurrency(emp->getTotalPrice()*1.1));

                modell->appendRow({
                    new QStandardItem(id),
                    new QStandardItem(time),
                    new QStandardItem(price),
                });

            }
        }
        ui->tableViewInvoice->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
        ui->tableViewInvoice->resizeRowsToContents();
        ui->tableViewInvoice->setSelectionBehavior(QTableView::SelectRows);
        ui->tableViewInvoice->setEditTriggers(QTableView::NoEditTriggers);



        if(p->getRole()== "CUSTOMER"){
            Customer *c = dynamic_cast<Customer*>(p);



            QString address = QString::fromStdString(c->getAddress());
            // view
            ui->changeLabel->setText("Địa chỉ");
            ui->changeText->setText(address);
            //update
            ui->changeUpdate->setText(address);
            ui->changeUpdateLabel->setText("Địa chỉ");

            // // cart
            QStandardItemModel *modelz = static_cast<QStandardItemModel *>(ui->tableViewCart->model());
            if (modelz == nullptr) {
                modelz = new QStandardItemModel(ui->tableViewCart);
                modelz->setHorizontalHeaderLabels({"Sản phẩm", "Số lượng", "Thành tiền"});
                ui->tableViewCart->setModel(modelz);
            } else {
                modelz->removeRows(0, modelz->rowCount());
            }

            // Điền dữ liệu mới
            for (InvoiceDetail *emp : c->cart) {

                if (emp) {

                    QString id = QString::fromStdString(Product::getPrdByID(emp->getPrdID())->getPrdName());
                    QString time = QString::number(emp->getQuantity());
                    QString price =QString::fromStdString(formatCurrency(emp->getPrice()));

                    modelz->appendRow({
                        new QStandardItem(id),
                        new QStandardItem(time),
                        new QStandardItem(price),
                    });

                }
            }
            ui->tableViewCart->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
            ui->tableViewCart->resizeRowsToContents();
            ui->tableViewCart->setSelectionBehavior(QTableView::SelectRows);
            ui->tableViewCart->setEditTriggers(QTableView::NoEditTriggers);

            // delete c;
        }else if(p->getRole()=="SALES"){
            Employee *c = dynamic_cast<Employee*>(p);
            QString day = QString::fromStdString(c->getDayToWork());
            //view
            ui->changeLabel->setText("Ngày vào làm");
            ui->changeText->setText(day);
            //update
            ui->changeUpdate->setText(day);
            ui->changeUpdateLabel->setText("Ngày vào làm");

        }

    }
}

void modalView::on_saveBtn_2_clicked()
{       if(onLogin == nullptr || onLogin->getRole() != "MANAGER"){
        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setWindowTitle("Lỗi phân quyền");
        msgBox.setText("Nhân viên không được vào tính năng này!");
        msgBox.setWindowIcon(QIcon(":/new/img/img/images.jpg")); // Đặt icon cho cửa sổ
        msgBox.exec();
    }
    else{
    string name = ( ui->nameUpdate->text()).toStdString();
    string phone = ( ui->phoneUpdate->text()).toStdString();
    string email = ( ui->emailUpdate->text()).toStdString();
    string pass = ( ui->passUpdate->text()).toStdString();
    string repass = ( ui->repassUpdate->text()).toStdString();
    if(pass == repass){
        if(selectPer->getRole()== "CUSTOMER"){
            Customer *c = dynamic_cast<Customer*>(selectPer);
            if(c){
                string address = ( ui->changeUpdate->text()).toStdString();
                c->setName(name);   c->setPass(pass);
                c->setEmail(email);  c->setPhone(phone);c->setAddress(address);
                ui->statusUpdate->setText("Chỉnh sửa thành công!");
                setupInforView(selectPer);

            }


        }else if(selectPer->getRole()== "SALES"){
            Employee *c = dynamic_cast<Employee*>(selectPer);
            if(c){
                string day = ( ui->changeUpdate->text()).toStdString();
                c->setName(name);   c->setPass(pass);
                c->setEmail(email);  c->setPhone(phone);c->setDayToWork(day);
                ui->statusUpdate->setText("Chỉnh sửa thành công!");
                setupInforView(selectPer);
            }

        }
    }else{
        ui->statusUpdate->setText("Nhập lại mật khẩu không chính xác!");
    }


    }
}


void modalView::on_cancelBtn_2_clicked()
{
    this->close();
}

