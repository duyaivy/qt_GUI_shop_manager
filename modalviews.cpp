#include "modalviews.h"
#include "ui_modalviews.h"
#include "QStandardItem"
#include "qmessagebox.h"
#include "qfiledialog.h"
#include <QVBoxLayout>
string addressFile = "";
modalViews::modalViews(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::modalViews)
{
    ui->setupUi(this);
    setWindowTitle("Modal");
    setWindowIcon(QIcon(":/new/img/img/images.jpg"));
}

modalViews::~modalViews()
{
    delete ui;
}
void modalViews::setupInvoiceView(string &inv){

    Invoice *i = Invoice::getInvoiceByID(inv);
    if(i->getStatus() == false ){
        if(onLogin->getRole() == "CUSTOMER"){
            if (ui->buyWidget->layout() != nullptr) {
                delete ui->buyWidget->layout();
            }


            QPushButton *payButton = new QPushButton("Thanh toán hoá đơn", ui->buyWidget);
            payButton->setFixedSize(200, 40);
            payButton->setCursor(Qt::PointingHandCursor);

            payButton->setStyleSheet("color: #fff;background-color: #009ad9;padding-left:5px;border:none;font-size: 20px;");
            // Thêm vào layout của widget cha
            QVBoxLayout *layout = new QVBoxLayout(ui->buyWidget);
            layout->addWidget(payButton);
            ui->buyWidget->setLayout(layout);
            QObject::connect(payButton, &QPushButton::clicked, [this,inv]() {

                this->setStackWidget(4);
                this->setupPaymentPage(inv);

            });
        }
    }

    auto customer = Customer::getCusById(i->getCustomerID());
    QString name, phone, add;
    if (customer) {
        name = QString::fromStdString(customer->getName());
        phone = QString::fromStdString(customer->getPhone());
        add = QString::fromStdString(customer->getAddress());
    } else {
        name = "Unknown";
        phone = "Unknown";
        add = "Unknown";
    }

    QString idInv = QString::fromStdString(i->getInvoiceID());
    QString idStaff = QString::fromStdString(i->getStaffID());
    QString time = QString::fromStdString(i->getTime());
    long long int price = i->getTotalPrice();

    ui->nameCus->setText(name);
    ui->phoneCus->setText(phone);
    ui->addressCus->setText(add);
    ui->staffID->setText(idStaff);
    ui->timeInvoice->setText(time);
    ui->invoiceID->setText(idInv);

    // Đảm bảo formatCurrency không gặp lỗi
    try {
        ui->price->setText(QString::fromStdString(formatCurrency(price)));
        ui->reprice->setText(QString::fromStdString(formatCurrency(price * 0.1)));
        ui->totalMoney->setText(QString::fromStdString(formatCurrency(price * 1.1)));
    } catch (const std::exception &e) {
        ui->price->setText("Error");
        ui->reprice->setText("Error");
        ui->totalMoney->setText("Error");
    }

    QStandardItemModel *modelv = static_cast<QStandardItemModel *>(ui->tableView->model());
    if (!modelv) {
        modelv = new QStandardItemModel(ui->tableView);
        ui->tableView->setModel(modelv);
    } else {
        modelv->clear(); // Xóa dữ liệu cũ thay vì xóa từng hàng
    }
    modelv->setHorizontalHeaderLabels({"Mục", "Số lượng", "Đơn giá", "Thành tiền"});

    // Điền dữ liệu vào model, kiểm tra nullptr cho mỗi InvoiceDetail
    for (InvoiceDetail *detaill : i->invDetail) {
        if (detaill) {
            QString product = QString::fromStdString(Product::getPrdByID(detaill->getPrdID())->getPrdName());
            QString qtn = QString::number(detaill->getQuantity());
            QString money = QString::fromStdString(formatCurrency(Product::getPrdByID(detaill->getPrdID())->getUnitPrice()));
            QString price = QString::fromStdString(formatCurrency(detaill->getPrice()));

            modelv->appendRow({
                new QStandardItem(product),
                new QStandardItem(qtn),
                new QStandardItem(money),
                new QStandardItem(price)
            });
        }
    }

    // Cấu hình tableView
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->resizeRowsToContents();
    ui->tableView->setSelectionBehavior(QTableView::SelectRows);
    ui->tableView->setEditTriggers(QTableView::NoEditTriggers);
}

void modalViews::setupPrdAdminPage(Product *p){
    if(ui->stackedWidget->currentIndex() == 2){
        if(p == nullptr ||p->getDelete()){
            QMessageBox msgBox;
            msgBox.setWindowTitle("Lỗi");
            msgBox.setText("Sản phẩm này đã bị xoá!");
            msgBox.setIcon(QMessageBox::Critical);
            msgBox.setStandardButtons(QMessageBox::Ok);
            msgBox.exec();
        }else{
            QString name = QString::fromStdString(p->getPrdName());
            QString id = QString::fromStdString(p->getPrdID());
            QString branch = QString::fromStdString(p->getPrdBranch());
            QString detail = QString::fromStdString(p->getPrdDetail());
            QString importPrice = QString::fromStdString(formatCurrency(p->getImportPrice()));
            QString unitPrice = QString::fromStdString(formatCurrency(p->getUnitPrice()));
            QString importPricez = QString::number(p->getImportPrice());
            QString unitPricez = QString::number(p->getUnitPrice());
            QString quantity = QString::number(p->getQuantity());
            QString quantitySell = QString::number(p->getQuantitySell());
            QString quantityReturn =  QString::number(p->getQuantity() - p->getQuantitySell());

            //update

            ui->branchU->setText(branch);
            ui->detailU->setText(detail);
            ui->importPriceU->setText(importPricez);
            ui->priceU->setText(unitPricez);
            ui->nameUpdate->setText(name);
            ui->qntU->setText(quantity);
            ui->sellU->setText(quantitySell);
            //view
            ui->idPrd->setText(id);
            ui->branchPrd->setText(branch);
            ui->branchPrd_2->setText(detail);
            ui->importPrice->setText(importPrice);
            ui->pricePrdAd->setText(unitPrice);
            ui->namePrd_2->setText(name);
            ui->sellQnt->setText(quantity);
            ui->returnQnt_3->setText(quantityReturn);
        }
    }

}

void modalViews::setStackWidget(int i){
    if(i>4){
        ui->stackedWidget->setCurrentIndex(0);
    }else{
        ui->stackedWidget->setCurrentIndex(i);
    }

}



void modalViews::on_cancelBtn_2_clicked()
{
    this->close();
}


void modalViews::on_updateBtn_clicked()
{       if(onLogin == nullptr || onLogin->getRole() != "MANAGER"){
        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setWindowTitle("Lỗi phân quyền");
        msgBox.setText("Nhân viên không được vào tính năng này!");
        msgBox.setWindowIcon(QIcon(":/new/img/img/images.jpg")); // Đặt icon cho cửa sổ
        msgBox.exec();
    }
    else{
    string brand =  ui->branchU->text().toStdString();
    string detail =  ui->detailU->toPlainText().toStdString();
    long long imPrice = ui->importPriceU->text().toLongLong();
    long long price =  ui->priceU->text().toLongLong();
    string name = ui->nameUpdate->text().toStdString();
    int quantity =ui->qntU->text().toInt();
    int quantitySell =ui->sellU->text().toInt();

    if(quantity <1 || quantitySell<0 ||price <imPrice || brand.empty() || detail.empty() ||name.empty()){
     ui->statusUpdate->setText("Giá trị nhập liệu không hợp lệ!");
    }else{
        //ok
        curProduct->setImportPrice(imPrice);
        curProduct->setUnitPrice(price);
        curProduct->setQuantity(quantity);
        curProduct->setQuantitySell(quantitySell);
        curProduct->setName(name);
        curProduct->setBrand(brand);
        curProduct->setDetail(detail);
        ui->statusUpdate->setText("Chỉnh sửa thành công!");
        setupPrdAdminPage(curProduct);
    }

    }

}


void modalViews::on_cancelBtn_3_clicked()
{
    this->close();
}


void modalViews::on_deleteBtn_clicked()
{
    ui->tabWidget->setCurrentIndex(2);
}


void modalViews::on_pushButton_3_clicked()
{
     ui->tabWidget->setCurrentIndex(1);
}


void modalViews::on_updateBtn_2_clicked()
{
    curProduct->setDelete(1);
    QMessageBox::information(nullptr, "Thông báo", "Đã xoá thành công, thoát modal!");
    this->close();
}


void modalViews::on_updateBtn_5_clicked()
{       if(onLogin == nullptr || onLogin->getRole() != "MANAGER"){
        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setWindowTitle("Lỗi phân quyền");
        msgBox.setText("Nhân viên không được vào tính năng này!");
        msgBox.setWindowIcon(QIcon(":/new/img/img/images.jpg")); // Đặt icon cho cửa sổ
        msgBox.exec();
    }
    else{
    string brand =  ui->branchU_3->text().toStdString();
    string detail =  ui->detailU_3->toPlainText().toStdString();
    long long imPrice = ui->importPriceU_3->text().toLongLong();
    long long price =  ui->priceU_3->text().toLongLong();
    string name = ui->nameUpdate_3->text().toStdString();
    int quantity = ui->quantityImport->value();
    int quantitySell =ui->quantitySelll->value();


    if(quantity <1 || quantitySell<0||quantitySell > quantity ||price < imPrice || brand.empty() || detail.empty() ||name.empty()){

        ui->statusAdd->setText("Dữ liệu nhập vào không hợp lệ!");
    }else{
        //ok

        Product *p = new Product(name,brand,detail,price,imPrice,quantity,quantitySell,0);
        Product::prd.push_back(p);
        // delete p;
        ui->statusAdd->setText("Thêm sản phẩm mới thành công!");
    }
    }
}


void modalViews::on_choseBtn_clicked()
{
    QString filename = QFileDialog::getOpenFileName(
        this,
        tr("Open File"),
        "C://",
        "Excel file (*.csv);;Text File (*.txt);;All files (*.*)"
        );
    addressFile = filename.toStdString();
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


void modalViews::on_addBtn_clicked()
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
        if(addressFile!=""){
            if( Product::loadFromFile(addressFile)){
                ui->textBrowser->setText("Thêm sản phẩm thành công!");
            }else{
                ui->textBrowser->setText("Thêm sản phẩm thất bại!");
            }
        }else{
            ui->textBrowser->setText("Thất bại! Chọn file và thử lại.");
        }
    }
}


void modalViews::on_cancelBtn_7_clicked()
{
    this->close();
}


void modalViews::on_cancelBtn_6_clicked()
{
    this->close();
}

void modalViews::setupPrdUserPage(Product *p){
    if(ui->stackedWidget->currentIndex() == 1){
        if(p == nullptr ||p->getDelete()){
            QMessageBox msgBox;
            msgBox.setWindowTitle("Lỗi");
            msgBox.setText("Sản phẩm này đã bị xoá!");
            msgBox.setIcon(QMessageBox::Critical);
            msgBox.setStandardButtons(QMessageBox::Ok);
            msgBox.exec();
        }else{
            QString name = QString::fromStdString(p->getPrdName());
            QString branch = QString::fromStdString(p->getPrdBranch());
            QString detail = QString::fromStdString(p->getPrdDetail());
            QString unitPrice = QString::fromStdString(formatCurrency(p->getUnitPrice()));
            int qnt = p->getQuantity() - p->getQuantitySell();
            QString quantityReturn =  QString::number(qnt);


            ui->quantityBuy->setMaximum(qnt);
            ui->branchPrdz->setText(branch);
            ui->detailPrd->setText(detail);
            ui->pricePrd->setText(unitPrice);
            ui->namePrd->setText(name);
            ui->returnQnt->setText(quantityReturn);
        }
    }
}

void modalViews::on_cartBtn_clicked()
{
    if(curProduct == nullptr ||curProduct->getDelete()){
        QMessageBox msgBox;
        msgBox.setWindowTitle("Lỗi");
        msgBox.setText("Sản phẩm này đã bị xoá!");
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
    }else{
        int qnt = ui->quantityBuy->value();
        InvoiceDetail *newDetail = new InvoiceDetail("unknown", qnt,curProduct->getPrdID());
        InvoiceDetail::detail.push_back(newDetail);
        curCustomer->addCaft(newDetail->getDetailID());
        QMessageBox msgBox;
        msgBox.setWindowTitle("Thành công");
        msgBox.setText("Đã thêm vào giỏ hàng!");
        msgBox.setIcon(QMessageBox::Information);
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
    }
}


void modalViews::on_buyBtn_clicked()
{
    if(curProduct == nullptr ||curProduct->getDelete()){
        QMessageBox msgBox;
        msgBox.setWindowTitle("Lỗi");
        msgBox.setText("Sản phẩm này đã bị xoá!");
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
    }else{
        int qnt = ui->quantityBuy->value();
        InvoiceDetail *newDetail = new InvoiceDetail("unknown", qnt,curProduct->getPrdID());
        InvoiceDetail::detail.push_back(newDetail);
        string day = getTimeNow();

        Invoice *newInv = new Invoice(Notify::currentEmp,curCustomer->getID(), day,false, newDetail->getDetailID());
        Invoice::inv.push_back(newInv);

        newDetail->setInvoiceID(newInv->getInvoiceID());
        string invID = newInv->getInvoiceID();
        newInv->invDetail.push_back(newDetail);

        curCustomer->addInvoice(invID);
        this->setStackWidget(0);
        this->setupInvoiceView(invID);

    }
}


void modalViews::on_cancelBtn_10_clicked()
{
    this->close();
}


void modalViews::on_cancelBtn_9_clicked()
{
    this->close();
}
void modalViews::setupPaymentPage(string inv){
    Invoice *i = Invoice::getInvoiceByID(inv);
    if(i){
        QString id = QString::fromStdString(i->getInvoiceID());
        QString nameEmp = QString::fromStdString(Employee::getEmpById(i->getStaffID())->getName());
        QString money = QString::fromStdString(formatCurrency(i->getTotalPrice()*1.1));

        ui->money->setText(money);
        ui->money2->setText(money);
        ui->nameStaff->setText(nameEmp);
        ui->nameStaff2->setText(nameEmp);
        ui->idInv->setText(id);
        ui->idInv2->setText(id);
    }

}

void modalViews::on_addBtn_3_clicked()
{
    string id = ui->idInv->text().toStdString();
    Invoice *inv = Invoice::getInvoiceByID(id);
    Notify *noti = new Notify(id, Notify::currentEmp, inv->getTotalPrice()*1.1, false);
    Notify::noti.push_back(noti);

    QMessageBox msgBox;
    msgBox.setWindowTitle("Thành công");
    msgBox.setText("Đã gửi yêu cầu\nXác nhận thanh toán!");
    msgBox.setIcon(QMessageBox::Information);
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();
    Notify::saveToFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\dataNotify.csv");
    this->close();
}


void modalViews::on_addBtn_2_clicked()
{
    string id = ui->idInv->text().toStdString();
    Invoice *inv = Invoice::getInvoiceByID(id);
    Notify *noti = new Notify(id, Notify::currentEmp, inv->getTotalPrice()*1.1, false);
    Notify::noti.push_back(noti);


    QMessageBox msgBox;
    msgBox.setWindowTitle("Thành công");
    msgBox.setText("Đã gửi yêu cầu\nXác nhận thanh toán!");
    msgBox.setIcon(QMessageBox::Information);
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();
    Notify::saveToFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\dataNotify.csv");
    this->close();
}

