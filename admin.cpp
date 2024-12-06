#include<qstring.h>
#include<qbuttongroup.h>
#include "admin.h"
#include "ui_admin.h"
#include"global.h"
#include "mainwindow.h"
#include"modalview.h"
#include <QStandardItemModel>
#include<qmessagebox.h>
#include"modalviews.h"
#include "QInputDialog"
bool isConnectedCus = false;
bool isInvoiceConect = false;
bool isPrdConnected = false;
bool isInvoiceConnectt = false;
admin::admin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::admin)
{
    ui->setupUi(this);
    setWindowTitle("AdminHome");
    setWindowIcon(QIcon(":/new/img/img/images.jpg"));
    //set name
    if(curEmployee!= nullptr){
        ui->nameProfile->setText(QString::fromStdString(curEmployee->getName()));
        setupProfilePage();
    }
    // set click cho cac nut
    setGroupBtn();
    setGroupBtnPage();
    setUpInvoiceViewHome();
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
        switch(id){
        case 1:{
            if(onLogin == nullptr || onLogin->getRole() != "MANAGER"){
                ui->homeBtn->click();
                QMessageBox msgBox;
                msgBox.setIcon(QMessageBox::Critical);
                msgBox.setWindowTitle("Lỗi phân quyền");
                msgBox.setText("Nhân viên không được vào tính năng này!");
                msgBox.setWindowIcon(QIcon(":/new/img/img/images.jpg")); // Đặt icon cho cửa sổ
                msgBox.exec();
            }else{
               setupStaffPage();
            }

            break;}
        case 2:{
            setupCusPage();
            break;
        }
        case 3:{
            setupProductPage();
            break;
        }
        case 4: {
            if(onLogin == nullptr || onLogin->getRole() != "MANAGER"){
                ui->homeBtn->click();
                QMessageBox msgBox;
                msgBox.setIcon(QMessageBox::Critical);
                msgBox.setWindowTitle("Lỗi phân quyền");
                msgBox.setText("Nhân viên không được vào tính năng này!");
                msgBox.setWindowIcon(QIcon(":/new/img/img/images.jpg")); // Đặt icon cho cửa sổ
                msgBox.exec();
            }else{
                 setupInvoicePage();
            }
            break;
        }
        case 5:{
            setupProfilePage();
            setupProfileInvoice();
        }
        default:{
            setUpInvoiceViewHome();
            break;
         }
        }

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

void admin::on_logOutBtn_clicked()
{
    this->close();
    MainWindow *mw = new MainWindow;
    mw->setAttribute(Qt::WA_DeleteOnClose);
    mw->show();
}

void admin::setUpInvoiceViewHome(){

    setupTableView(ui->tableViewInvoice);

    ui->cusQnt->setText(QString::number(Customer::getQuantityCus()));
    ui->staffQnt->setText(QString::number(Employee::getQuantityEmployee()));
    ui->invoiceQnt->setText(QString::number(Invoice::getInvoiceQuantity()));
    ui->productNum->setText(QString::number(Product::getPrdQuantity()));
}
void admin::setupTableView(QTableView *tableView) {
    // Tạo model cho TableView
    QStandardItemModel *model = new QStandardItemModel();

    // Đặt tiêu đề cột
    model->setHorizontalHeaderLabels({"ID", "Khách Hàng", "Nhân Viên", "Thời Gian","Tổng Giá Trị"});


    for (Invoice *i : Invoice::inv) {



        //
        QString id = QString::fromStdString(i->getInvoiceID());
        QString nameCus = QString::fromStdString(Customer::getCusById(i->getCustomerID())->getName());
        QString nameStaff =QString::fromStdString((Employee::getEmpById(i->getStaffID())->getName()));
        QString time =QString::fromStdString(i->getTime());
        QString money =QString::fromStdString(formatCurrency(i->getTotalPrice()*1.1));

        model->appendRow({new QStandardItem(id),
                          new QStandardItem(nameCus),
                          new QStandardItem(nameStaff),
                          new QStandardItem(time),
                          new QStandardItem(money)});

    }
    tableView->setModel(model);

    tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    tableView->resizeRowsToContents();
       // tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    tableView->setSelectionBehavior(QTableView::SelectRows);
    tableView->setEditTriggers(QTableView::NoEditTriggers);


}

void admin::setupStaffPage() {

    QStandardItemModel *model = static_cast<QStandardItemModel *>(ui->tableViewStaff->model());
    if (model == nullptr) {
        model = new QStandardItemModel(ui->tableViewStaff);
        model->setHorizontalHeaderLabels({"ID", "Họ và tên", "SĐT", "Email", "Ngày vào làm", "Đơn hàng", "Hành động"});
        ui->tableViewStaff->setModel(model);
    } else {
        model->removeRows(0, model->rowCount());
    }

    // Điền dữ liệu mới
    for (Person *p : Person::obj) {
        if(p->getDelete())continue;
        Employee *emp = dynamic_cast<Employee *>(p);


        if (emp) {
            if(emp->getRole()=="MANAGER") continue;
            QString email = QString::fromStdString(emp->getEmail());
            QString idEmp = QString::fromStdString(emp->getID());
            QString phone =QString::fromStdString(emp->getPhone());
            QString day =QString::fromStdString(emp->getDayToWork());
            QString name =QString::fromStdString(emp->getName());
            QString quantity =  QString::number(emp->getQuantityInvoice());// loi dong nay
            model->appendRow({
                new QStandardItem(idEmp),
                new QStandardItem(name),
                new QStandardItem(phone),
                new QStandardItem(email),
                new QStandardItem(day),
                new QStandardItem(quantity),
                new QStandardItem("Chi tiết")
            });
        }
    }
    ui->tableViewStaff->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
        ui->tableViewStaff->resizeRowsToContents();
        ui->tableViewStaff->setSelectionBehavior(QTableView::SelectRows);
        ui->tableViewStaff->setEditTriggers(QTableView::NoEditTriggers);
        // if(!isConnected){
        //     connect(ui->tableViewStaff, &QTableView::doubleClicked, this, &admin::onTableRowClicked);
        //     isConnected = true;
        // }
        if (!isConnected) {
            connect(ui->tableViewStaff, &QTableView::doubleClicked, this, [this](const QModelIndex &index) {
                onTableRowClicked(index, ui->tableViewStaff);
            });
            isConnected = true;
        }

    // Cập nhật thông tin thống kê
    ui->quantityStaff->setText(QString::number(Employee::getQuantityEmployee()));

    Employee *topEmp = Employee::getMaxRevenue();
    if (topEmp) {
        ui->topStaff->setText(QString::fromStdString(topEmp->getName()));
    } else {
        ui->topStaff->setText("Đang cập nhật");
    }
}

void admin::on_findStaffBtn_clicked()
{
    string text = (ui->findStaff->text()).toUtf8().constData();
    if(text!=""){
        QStandardItemModel *model = static_cast<QStandardItemModel *>(ui->tableViewStaff->model());
        if (model == nullptr) {
            model = new QStandardItemModel(ui->tableViewStaff);
            model->setHorizontalHeaderLabels({"ID", "Họ và tên", "SĐT", "Email", "Ngày vào làm", "Đơn hàng", "Hành động"});
            ui->tableViewStaff->setModel(model);
        } else {
            model->removeRows(0, model->rowCount());
        }

        // Điền dữ liệu mới
        string lowerWord = toLowerCase(text);



        for (Person *p : Person::obj) {
            if(p->getDelete()) continue;
            Employee *emp = dynamic_cast<Employee *>(p);

            if (emp) {
                if(emp->getRole()=="MANAGER") continue;
                string lowerName = toLowerCase(emp->getName());
                if (lowerName.find(lowerWord) != std::string::npos) {
                    QString email = QString::fromStdString(emp->getEmail());
                    QString idEmp = QString::fromStdString(emp->getID());
                    QString phone =QString::fromStdString(emp->getPhone());
                    QString day =QString::fromStdString(emp->getDayToWork());
                    QString name =QString::fromStdString(emp->getName());
                    QString quantity =  QString::number(emp->getQuantityInvoice());
                    model->appendRow({
                        new QStandardItem(idEmp),
                        new QStandardItem(name),
                        new QStandardItem(phone),
                        new QStandardItem(email),
                        new QStandardItem(day),
                        new QStandardItem(quantity),
                        new QStandardItem("Chi tiết")});
                }


            }
        }
        ui->tableViewStaff->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
        ui->tableViewStaff->resizeRowsToContents();
        ui->tableViewStaff->setSelectionBehavior(QTableView::SelectRows);
        ui->tableViewStaff->setEditTriggers(QTableView::NoEditTriggers);
        ui->findStaff->setText("");
    }
}


void admin::on_pushButton_9_clicked()
{
    setupStaffPage();
}


void admin::on_addStaffBtn_clicked()
{
    modalView *md = new modalView;
    md->setStackWidget(0);
    md->setAttribute(Qt::WA_DeleteOnClose);
    md->show();
}
void admin::onTableRowClicked(const QModelIndex &index, QTableView *tableView)
{
    if (!tableView) return;

    QStandardItemModel *model = static_cast<QStandardItemModel *>(tableView->model());
    if (!model) return;

    int row = index.row();
    int column = 0;

    // Lấy dữ liệu từ model
    QStandardItem *item = model->item(row, column);
    if (item) {

        string idSelect = item->text().toStdString();
         qDebug()<<idSelect;
        selectPer = Person::getPerById(idSelect);
         Person *p = Person::getPerById(idSelect);

       static modalView *md = nullptr;
        if(md == nullptr){
           md = new modalView;
        }

        md->setStackWidget(1);
        md->setupInforView(p);
        md->show();

    }
}

void admin::setupProfilePage(){
    ui->nameLb->setText(QString::fromStdString(curEmployee->getName()));
    ui->idLb->setText(QString::fromStdString(curEmployee->getID()));
    ui->emaiLb->setText(QString::fromStdString(curEmployee->getEmail()));
    ui->passLb_2->setText(QString::fromStdString(curEmployee->getPass()));
    ui->phoneLb->setText(QString::fromStdString(curEmployee->getPhone()));
}
void admin::setupCusPage(){

    QStandardItemModel *modeli = static_cast<QStandardItemModel *>(ui->tableViewCus->model());
    if (modeli == nullptr) {
        modeli = new QStandardItemModel(ui->tableViewCus);
        modeli->setHorizontalHeaderLabels({"ID", "Họ và tên", "SĐT", "Địa chỉ", "Đơn hàng", "Hành động"});
        ui->tableViewCus->setModel(modeli);
    } else {

      modeli->removeRows(0, modeli->rowCount());
    }

    // Điền dữ liệu mới
    for (Person *p : Person::obj) {
        if(p->getDelete())continue;
        Customer *cus = dynamic_cast<Customer *>(p);
        if (cus) {

            QString address = QString::fromStdString(cus->getAddress());
            QString idCus = QString::fromStdString(cus->getID());
            QString phone =QString::fromStdString(cus->getPhone());
            QString name =QString::fromStdString(cus->getName());
            QString quantity =  QString::number(cus->getQuantityInvoice());
            modeli->appendRow({
                new QStandardItem(idCus),
                new QStandardItem(name),
                new QStandardItem(phone),
                new QStandardItem(address),
                new QStandardItem(quantity),
                new QStandardItem("Chi tiết")
            });
        }
    }
    ui->tableViewCus->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableViewCus->resizeRowsToContents();
    ui->tableViewCus->setSelectionBehavior(QTableView::SelectRows);
    ui->tableViewCus->setEditTriggers(QTableView::NoEditTriggers);
    // if(!isConnectedCus){
    //     connect(ui->tableViewCus, &QTableView::doubleClicked, this, &admin::onTableRowClicked);
    //     isConnectedCus = true;
    // }
    if (!isConnectedCus) {
        connect(ui->tableViewCus, &QTableView::doubleClicked, this, [this](const QModelIndex &index) {
            onTableRowClicked(index, ui->tableViewCus);
        });
        isConnectedCus = true;
    }

    // Cập nhật thông tin thống kê

    QString number =QString::number(Customer::getQuantityCus());
    ui->quantityCus->setText(number);

    Customer *topEmp = Customer::getMaxCus();
    if (topEmp) {
        ui->topCus->setText(QString::fromStdString(topEmp->getName()));
    } else {
        ui->topCus->setText("Đang cập nhật");
    }


}

void admin::on_refeshCusPage_clicked()
{
    setupCusPage();
}

void admin::on_findCusBtn_clicked()
{
    string text = (ui->findCus->text()).toUtf8().constData();
    ui->findCus->setText("");
    if(text!=""){
        QStandardItemModel *model = static_cast<QStandardItemModel *>(ui->tableViewCus->model());
        if (model == nullptr) {
            model = new QStandardItemModel(ui->tableViewCus);
            model->setHorizontalHeaderLabels({"ID", "Họ và tên", "SĐT", "Email", "Ngày vào làm", "Đơn hàng", "Hành động"});
            ui->tableViewCus->setModel(model);
        } else {
            model->removeRows(0, model->rowCount());
        }

        // Điền dữ liệu mới
        string lowerWord = toLowerCase(text);

        QStandardItemModel *modeli = static_cast<QStandardItemModel *>(ui->tableViewCus->model());
        if (modeli == nullptr) {
            modeli = new QStandardItemModel(ui->tableViewCus);
            modeli->setHorizontalHeaderLabels({"ID", "Họ và tên", "SĐT", "Địa chỉ", "Đơn hàng", "Hành động"});
            ui->tableViewCus->setModel(modeli);
        } else {

            modeli->removeRows(0, modeli->rowCount());
        }

        // Điền dữ liệu mới
        for (Person *p : Person::obj) {
            if(p->getDelete())continue;
            Customer *cus = dynamic_cast<Customer *>(p);
            if (cus) {
                string lowerName = toLowerCase(cus->getName());
                if (lowerName.find(lowerWord) != std::string::npos) {
                    QString address = QString::fromStdString(cus->getAddress());
                    QString idCus = QString::fromStdString(cus->getID());
                    QString phone =QString::fromStdString(cus->getPhone());
                    QString name =QString::fromStdString(cus->getName());
                    QString quantity =  QString::number(cus->getQuantityInvoice());
                     modeli->appendRow({
                        new QStandardItem(idCus),
                        new QStandardItem(name),
                        new QStandardItem(phone),
                        new QStandardItem(address),
                        new QStandardItem(quantity),
                        new QStandardItem("Chi tiết")
                });
                }
            }
        }
        ui->tableViewCus->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
        ui->tableViewCus->resizeRowsToContents();
        ui->tableViewCus->setSelectionBehavior(QTableView::SelectRows);
        ui->tableViewCus->setEditTriggers(QTableView::NoEditTriggers);
        // if(!isConnectedCus){
        //     connect(ui->tableViewCus, &QTableView::doubleClicked, this, &admin::onTableRowClicked);
        //     isConnectedCus = true;
        // }
        if (!isConnectedCus) {
            connect(ui->tableViewCus, &QTableView::doubleClicked, this, [this](const QModelIndex &index) {
                onTableRowClicked(index, ui->tableViewCus);
            });
            isConnectedCus = true;
        }
    }
}

void admin::setupInvoicePage(){
    QStandardItemModel *modeliz = static_cast<QStandardItemModel *>(ui->tableViewInvoice_2->model());
    if (modeliz == nullptr) {
        modeliz = new QStandardItemModel(ui->tableViewCus);
        modeliz->setHorizontalHeaderLabels({"ID", "Khách hàng", "Nhân viên", "Thời gian", "Thanh toán", "Trạng thái"});
        ui->tableViewCus->setModel(modeliz);
    } else {

        modeliz->removeRows(0, modeliz->rowCount());
    }
    for (Invoice *i : Invoice::inv) {
        QString id = QString::fromStdString(i->getInvoiceID());
        QString nameCus = QString::fromStdString(Customer::getCusById(i->getCustomerID())->getName());
        QString nameStaff =QString::fromStdString((Employee::getEmpById(i->getStaffID())->getName()));
        QString time =QString::fromStdString(i->getTime());
        QString money =QString::fromStdString(formatCurrency(i->getTotalPrice()*1.1));
        QString status;
        if(i->getStatus()){
            status = "Đã thanh toán";
        }else{
            status = "Chưa thanh toán";
        }
        modeliz->appendRow({new QStandardItem(id),
                          new QStandardItem(nameCus),
                          new QStandardItem(nameStaff),
                          new QStandardItem(time),
                          new QStandardItem(money),
                          new QStandardItem(status)
        });

    }
    ui->tableViewInvoice_2->setModel(modeliz);


    if (!isInvoiceConect) {
        connect(ui->tableViewInvoice_2, &QTableView::doubleClicked, this, [this](const QModelIndex &index) {
            onTableInvoiceClicked(index, ui->tableViewInvoice_2);
        });
        isInvoiceConect = true;
    }
    ui->tableViewInvoice_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableViewInvoice_2->resizeRowsToContents();
    ui->tableViewInvoice_2->setSelectionBehavior(QTableView::SelectRows);
    ui->tableViewInvoice_2->setEditTriggers(QTableView::NoEditTriggers);

    // Cập nhật thông tin thống kê
    QString soluong = QString::number(Invoice::getInvoiceQuantity());
    QString money = QString::fromStdString(formatCurrency(Invoice::getRevenue()));
    QString profit = QString::fromStdString(formatCurrency(Invoice::getRevenue()*0.2));
    ui->quantityInv->setText(soluong);
    ui->moneyInv->setText(money);
    ui->topCus_2->setText(profit);

}

void admin::on_refeshInv_clicked()
{
    setupInvoicePage();
}


void admin::on_findInvBtn_clicked()
{
    string text = (ui->findInv->text()).toUtf8().constData();
    ui->findInv->setText("");
    if(text!=""){

    QStandardItemModel *modeliz = static_cast<QStandardItemModel *>(ui->tableViewInvoice_2->model());
    if (modeliz == nullptr) {
        modeliz = new QStandardItemModel(ui->tableViewCus);
        modeliz->setHorizontalHeaderLabels({"ID", "Khách hàng", "Nhân viên", "Thời gian", "Thanh toán", "Trạng thái"});
        ui->tableViewCus->setModel(modeliz);
    } else {

        modeliz->removeRows(0, modeliz->rowCount());
    }
    string lowerWord = toLowerCase(text);
    for (Invoice *i : Invoice::inv) {
        string lowerName = toLowerCase(Customer::getCusById(i->getCustomerID())->getName());
        string lowerName2 = toLowerCase(Employee::getEmpById(i->getStaffID())->getName());
        if(lowerName.find(lowerWord) != std::string::npos ||lowerName2.find(lowerWord) != std::string::npos ){
                QString id = QString::fromStdString(i->getInvoiceID());
                QString nameCus = QString::fromStdString(Customer::getCusById(i->getCustomerID())->getName());
                QString nameStaff =QString::fromStdString((Employee::getEmpById(i->getStaffID())->getName()));
                QString time =QString::fromStdString(i->getTime());
                QString money =QString::fromStdString(formatCurrency(i->getTotalPrice()*1.1));
                QString status;
                if(i->getStatus()){
                    status = "Đã thanh toán";
                }else{
                    status = "Chưa thanh toán";
                }
                modeliz->appendRow({new QStandardItem(id),
                    new QStandardItem(nameCus),
                    new QStandardItem(nameStaff),
                    new QStandardItem(time),
                    new QStandardItem(money),
                    new QStandardItem(status)
                });

            }
            ui->tableViewInvoice_2->setModel(modeliz);
            if (!isInvoiceConect) {
                connect(ui->tableViewInvoice_2, &QTableView::doubleClicked, this, [this](const QModelIndex &index) {
                    onTableInvoiceClicked(index, ui->tableViewInvoice_2);
                });
                isInvoiceConect = true;
            }


            ui->tableViewInvoice_2->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
            ui->tableViewInvoice_2->resizeRowsToContents();
            ui->tableViewInvoice_2->setSelectionBehavior(QTableView::SelectRows);
            ui->tableViewInvoice_2->setEditTriggers(QTableView::NoEditTriggers);
        }
    }
}

void admin::onTableInvoiceClicked(const QModelIndex &index, QTableView *tableView)
{
    if (!tableView) return;

    QStandardItemModel *model = static_cast<QStandardItemModel *>(tableView->model());
    if (!model) return;

    int row = index.row();
    int column = 0;

    // Lấy dữ liệu từ model
    QStandardItem *item = model->item(row, column);
    if (item) {

        string idSelect = item->text().toStdString();
        // selectInv = Invoice::getInvoiceByID(idSelect);
        // Invoice *i = Invoice::getInvoiceByID(idSelect);
        qDebug()<<idSelect;
        static modalViews *mdz = nullptr;
        if(mdz == nullptr){
            mdz = new modalViews;
        }
        mdz->setStackWidget(0);
        mdz->setupInvoiceView(idSelect);
        mdz->show();



    }
}
void admin::setupProductPage(){
    QString soluong = QString::number(Product::getPrdQuantity());
    QString sell = QString::number(Product::getAllSell());
    QString returnn = QString::number(Product::getAllReturn());
    ui->quantityPrd_2->setText(soluong);
    ui->sellQnt->setText(sell);
    ui->returnQnt->setText(returnn);


    QStandardItemModel *modelizt = static_cast<QStandardItemModel *>(ui->tableViewCus_2->model());
    if (modelizt == nullptr) {
        modelizt = new QStandardItemModel(ui->tableViewCus_2);
        modelizt->setHorizontalHeaderLabels({"ID", "Tên sản phẩm", "Hãng","Giá nhập","Giá bán", "Số lượng nhập", "Số lượng bán" });
        ui->tableViewCus_2->setModel(modelizt);
    } else {

        modelizt->removeRows(0, modelizt->rowCount());
    }
    for (Product *i : Product::prd) {
        if(i->getDelete()) continue;
        QString id = QString::fromStdString(i->getPrdID());
        QString nameProduct = QString::fromStdString(i->getPrdName());
        QString branch =QString::fromStdString(i->getPrdBranch());
        QString importMoney =QString::fromStdString(formatCurrency(i->getImportPrice()));
        QString unitMoney =QString::fromStdString(formatCurrency(i->getUnitPrice()));
        QString qnt =QString::number(i->getQuantity());
        QString qntSell =QString::number(i->getQuantitySell());


        modelizt->appendRow({
            new QStandardItem(id),
            new QStandardItem(nameProduct),
            new QStandardItem(branch),
            new QStandardItem(importMoney),
            new QStandardItem(unitMoney),
            new QStandardItem(qnt),
            new QStandardItem(qntSell)
        });

    }
    ui->tableViewCus_2->setModel(modelizt);


    if (!isPrdConnected) {
        connect(ui->tableViewCus_2, &QTableView::doubleClicked, this, [this](const QModelIndex &index) {
            onTableProductClicked(index, ui->tableViewCus_2);
        });
        isPrdConnected = true;
    }
    ui->tableViewCus_2->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableViewCus_2->resizeRowsToContents();
    ui->tableViewCus_2->setSelectionBehavior(QTableView::SelectRows);
    ui->tableViewCus_2->setEditTriggers(QTableView::NoEditTriggers);


}

void admin::on_refeshCusPage_2_clicked()
{
    setupProductPage();
}





void admin::on_findCusBtn_2_clicked()
{
    string text = (ui->findPrd->text()).toUtf8().constData();
    if(text!=""){
        QStandardItemModel *modelizt = static_cast<QStandardItemModel *>(ui->tableViewCus_2->model());
        if (modelizt == nullptr) {
            modelizt = new QStandardItemModel(ui->tableViewCus_2);
            modelizt->setHorizontalHeaderLabels({"ID", "Tên sản phẩm", "Hãng","Giá nhập","Giá bán", "Số lượng nhập", "Số lượng bán" });
            ui->tableViewCus_2->setModel(modelizt);
        } else {

            modelizt->removeRows(0, modelizt->rowCount());
        }
        string lowerWord = toLowerCase(text);
        for (Product *i : Product::prd) {
             if(i->getDelete()) continue;
            string lowerCase = toLowerCase(i->getPrdName());
            if(lowerCase.find(lowerWord) != std::string::npos){
            QString id = QString::fromStdString(i->getPrdID());
            QString nameProduct = QString::fromStdString(i->getPrdName());
            QString branch =QString::fromStdString(i->getPrdBranch());
            QString importMoney =QString::fromStdString(formatCurrency(i->getImportPrice()));
            QString unitMoney =QString::fromStdString(formatCurrency(i->getUnitPrice()));
            QString qnt =QString::number(i->getQuantity());
            QString qntSell =QString::number(i->getQuantitySell());


            modelizt->appendRow({
                new QStandardItem(id),
                new QStandardItem(nameProduct),
                new QStandardItem(branch),
                new QStandardItem(importMoney),
                new QStandardItem(unitMoney),
                new QStandardItem(qnt),
                new QStandardItem(qntSell)
            });
            }
        }
        ui->tableViewCus_2->setModel(modelizt);
        if (!isPrdConnected) {
            connect(ui->tableViewCus_2, &QTableView::doubleClicked, this, [this](const QModelIndex &index) {
                onTableProductClicked(index, ui->tableViewCus_2);
            });
            isPrdConnected = true;
        }


        ui->tableViewCus_2->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
        ui->tableViewCus_2->resizeRowsToContents();
        ui->tableViewCus_2->setSelectionBehavior(QTableView::SelectRows);
        ui->tableViewCus_2->setEditTriggers(QTableView::NoEditTriggers);

        ui->findPrd->setText("");
    }
}


void admin::on_comboBox_currentIndexChanged(int index)
{
    QString currentText = ui->comboBox->currentText();
    string text = currentText.toStdString();
    if(text!=""&& text!="Chọn Hãng"){
        QStandardItemModel *modelizt = static_cast<QStandardItemModel *>(ui->tableViewCus_2->model());
        if (modelizt == nullptr) {
            modelizt = new QStandardItemModel(ui->tableViewCus_2);
            modelizt->setHorizontalHeaderLabels({"ID", "Tên sản phẩm", "Hãng","Giá nhập","Giá bán", "Số lượng nhập", "Số lượng bán" });
            ui->tableViewCus_2->setModel(modelizt);
        } else {

            modelizt->removeRows(0, modelizt->rowCount());
        }
        string lowerWord = toLowerCase(text);
        for (Product *i : Product::prd) {
             if(i->getDelete()) continue;
            string lowerCase = toLowerCase(i->getPrdBranch());
            if(lowerCase.find(lowerWord) != std::string::npos){
                QString id = QString::fromStdString(i->getPrdID());
                QString nameProduct = QString::fromStdString(i->getPrdName());
                QString branch =QString::fromStdString(i->getPrdBranch());
                QString importMoney =QString::fromStdString(formatCurrency(i->getImportPrice()));
                QString unitMoney =QString::fromStdString(formatCurrency(i->getUnitPrice()));
                QString qnt =QString::number(i->getQuantity());
                QString qntSell =QString::number(i->getQuantitySell());


                modelizt->appendRow({
                    new QStandardItem(id),
                    new QStandardItem(nameProduct),
                    new QStandardItem(branch),
                    new QStandardItem(importMoney),
                    new QStandardItem(unitMoney),
                    new QStandardItem(qnt),
                    new QStandardItem(qntSell)
                });
            }
        }
        ui->tableViewCus_2->setModel(modelizt);


        if (!isPrdConnected) {
            connect(ui->tableViewCus_2, &QTableView::doubleClicked, this, [this](const QModelIndex &index) {
                onTableProductClicked(index, ui->tableViewCus_2);
            });
            isPrdConnected = true;
        }
        ui->tableViewCus_2->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
        ui->tableViewCus_2->resizeRowsToContents();
        ui->tableViewCus_2->setSelectionBehavior(QTableView::SelectRows);
        ui->tableViewCus_2->setEditTriggers(QTableView::NoEditTriggers);

    }
}
void admin::onTableProductClicked(const QModelIndex &index, QTableView *tableView){
    if (!tableView) return;

    QStandardItemModel *model = static_cast<QStandardItemModel *>(tableView->model());
    if (!model) return;

    int row = index.row();
    int column = 0;

    // Lấy dữ liệu từ model
    QStandardItem *item = model->item(row, column);
    if (item) {

        string idSelect = item->text().toStdString();
        qDebug()<<idSelect;
        curProduct = Product::getPrdByID(idSelect);


        static modalViews *md = nullptr;
        if(md == nullptr){
            md = new modalViews;
        }

        md->setStackWidget(2);
        md->setupPrdAdminPage(curProduct);
        md->show();
    }

}

void admin::on_addCusBtn_2_clicked()
{
    modalViews *md = new modalViews;
    md->setStackWidget(3);
    md->show();
}


void admin::on_saveBtn_clicked()
{
    bool ok;
    QInputDialog dialog;
    QString text = dialog.getText(
        this,
        "Xác nhận",
        "Vui lòng nhập mật khẩu\nđể thay đổi thông tin:",
        QLineEdit::Normal,
        "",
        &ok
        );
    if (ok && !text.isEmpty()) {
        if(text.toStdString() == onLogin->getPass()){
            string name = ui->nameLabel->text().toStdString();
            string pass = ui->passLb_2->text().toStdString();
            string email = ui->emaiLb->text().toStdString();
            string phone = ui->phoneLb->text().toStdString();
            onLogin->setEmail(email);
            onLogin->setName(name);
            onLogin->setPass(pass);
            onLogin->setPhone(phone);
            ui->statusProfile->setText("Thay đổi thông tin thành công!");
        }else{
            ui->statusProfile->setText("Nhập mật khẩu sai! Nhập lại.");
        }
    }
}


void admin::on_comboBox_2_currentIndexChanged(int index)
{
    QString currentText = ui->comboBox_2->currentText();
    string text = currentText.toStdString();
    if(text!=""&& text!="Trạng thái hoá đơn"){


        QStandardItemModel *modeliz = static_cast<QStandardItemModel *>(ui->tableViewInvoiceCus->model());
        if (modeliz == nullptr) {
            modeliz = new QStandardItemModel(ui->tableViewInvoiceCus);
            modeliz->setHorizontalHeaderLabels({"ID", "Khách hàng", "Thời gian", "Thanh toán", "Trạng thái"});
            ui->tableViewInvoiceCus->setModel(modeliz);
        } else {

            modeliz->removeRows(0, modeliz->rowCount());
        }

        string lowerWord = toLowerCase(text);
        for (Invoice *i : curEmployee->invoiceList) {
            if(text == "Đã thanh toán" && i->getStatus() == 0) continue;
            if(text == "Chưa thanh toán" && i->getStatus() == 1) continue;
            QString id = QString::fromStdString(i->getInvoiceID());
            QString nameCus =QString::fromStdString((Customer::getCusById(i->getCustomerID())->getName()));
            QString time =QString::fromStdString(i->getTime());
            QString money =QString::fromStdString(formatCurrency(i->getTotalPrice()*1.1));
            QString status;
            if(i->getStatus()){
                status = "Đã thanh toán";
            }else{
                status = "Chưa thanh toán";
            }
            modeliz->appendRow({new QStandardItem(id),
                new QStandardItem(nameCus),
                new QStandardItem(time),
                new QStandardItem(money),
                new QStandardItem(status)
            });

        }
        ui->tableViewInvoiceCus->setModel(modeliz);


        if (!isInvoiceConnectt) {
            connect(ui->tableViewInvoiceCus, &QTableView::doubleClicked, this, [this](const QModelIndex &index) {
                onTableInvoiceClicked(index, ui->tableViewInvoiceCus);
            });
            isInvoiceConnectt = true;
        }
        ui->tableViewInvoiceCus->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui->tableViewInvoiceCus->resizeRowsToContents();
        ui->tableViewInvoiceCus->setSelectionBehavior(QTableView::SelectRows);
        ui->tableViewInvoiceCus->setEditTriggers(QTableView::NoEditTriggers);
    }

}

void admin::setupProfileInvoice(){
    QStandardItemModel *modeliz = static_cast<QStandardItemModel *>(ui->tableViewInvoiceCus->model());
    if (modeliz == nullptr) {
        modeliz = new QStandardItemModel(ui->tableViewInvoiceCus);
        modeliz->setHorizontalHeaderLabels({"ID", "Khách hàng", "Thời gian", "Thanh toán", "Trạng thái"});
        ui->tableViewInvoiceCus->setModel(modeliz);
    } else {

        modeliz->removeRows(0, modeliz->rowCount());
    }
    for (Invoice *i : curEmployee->invoiceList) {
        QString id = QString::fromStdString(i->getInvoiceID());
        QString nameCus =QString::fromStdString((Customer::getCusById(i->getCustomerID())->getName()));
        QString time =QString::fromStdString(i->getTime());
        QString money =QString::fromStdString(formatCurrency(i->getTotalPrice()*1.1));
        QString status;
        if(i->getStatus()){
            status = "Đã thanh toán";
        }else{
            status = "Chưa thanh toán";
        }
        modeliz->appendRow({new QStandardItem(id),
            new QStandardItem(nameCus),
            new QStandardItem(time),
            new QStandardItem(money),
            new QStandardItem(status)
        });
    }
    ui->tableViewInvoiceCus->setModel(modeliz);
    if (!isInvoiceConnectt) {
        connect(ui->tableViewInvoiceCus, &QTableView::doubleClicked, this, [this](const QModelIndex &index) {
            onTableInvoiceClicked(index, ui->tableViewInvoiceCus);
        });
        isInvoiceConnectt = true;
    }
    ui->tableViewInvoiceCus->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableViewInvoiceCus->resizeRowsToContents();
    ui->tableViewInvoiceCus->setSelectionBehavior(QTableView::SelectRows);
    ui->tableViewInvoiceCus->setEditTriggers(QTableView::NoEditTriggers);
}

void admin::on_refeshInv_3_clicked()
{
    setupProductPage();
    setupProfileInvoice();
}

