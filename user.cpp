#include "user.h"
#include "ui_user.h"
#include "QButtonGroup"
#include <QGridLayout>
#include <QVBoxLayout>
#include <QScrollArea>
#include "modalviews.h"
#include <QVector>
#include <QSpinBox>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QInputDialog>
bool isInvoiceConnect = false;

user::user(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::user)
{
    ui->setupUi(this);
    setWindowTitle("AdminHome");
    setWindowIcon(QIcon(":/new/img/img/images.jpg"));
    if(curCustomer){
        ui->nameProfile->setText(QString::fromStdString(curCustomer->getName()));
    }
    setGroupBtn();
    addProducts(ui->productW);
}

user::~user()
{
    saveDataBase();
    delete ui;
}
void user::setGroupBtn()
{
    QButtonGroup* buttonGroup = new QButtonGroup(this);
    buttonGroup->addButton(ui->homeBtn, 0);
    buttonGroup->addButton(ui->cartBtn, 1);
    buttonGroup->addButton(ui->historyBtn, 2);
    buttonGroup->addButton(ui->profileBtn, 3);
    buttonGroup->addButton(ui->helpBtn, 4);

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
            populateCartWidget(ui->cartWidget);
            setupPreBuyWidget(ui->preBuyW);
            break;
        }
        case 2:{
            setupInvoiceCus();
            break;
        }
        case 3:{
            setupProfileCus();
            break;
        }
        default:{

            break;
        }
        }

    });
}
void user::addProducts(QWidget *parentWidget) {
    QVector<QString> images = {":/new/img/img/lap1.jpg", ":/new/img/img/lap2.jpg", ":/new/img/img/lap3.jpg", ":/new/img/img/lap4.jpg", ":/new/img/img/lap5.jpg",":/new/img/img/lap5.jpg", ":/new/img/img/lap1.jpg", ":/new/img/img/lap1.jpg", ":/new/img/img/lap1.jpg", ":/new/img/img/lap1.jpg"};


    QScrollArea *scrollArea = new QScrollArea(parentWidget);
    scrollArea->setWidgetResizable(true);

    // Tạo QWidget làm container bên trong QScrollArea
    QWidget *productWidget = new QWidget;

    QGridLayout *gridLayout = new QGridLayout(productWidget);
    gridLayout->setSpacing(10);
    gridLayout->setContentsMargins(5, 5, 5, 5);


    // Thêm sản phẩm vào grid layout
    int validProductCount = 0;
    for (int i = 0; i<Product::prd.getSize(); i++) {
        Product *p = Product::prd[i];
        if(p->getDelete())continue;
        QFrame *frame = new QFrame;
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFixedWidth(300);
        frame->setStyleSheet(
            "QFrame {"
            "  border: 1px solid #ccc;"
            "  border-radius: 3px;"
            "  padding: 2px;"
            "  background-color: #fff;"
            "}"
            "QFrame:hover {"
            "  border: 1px solid #396AFF;"
            "}"
            );

        QVBoxLayout *itemLayout = new QVBoxLayout(frame);

        // Thêm hình ảnh sản phẩm
        QLabel *imageLabel = new QLabel;
        int num = random(0,6);
        QPixmap pixmap(images[num]);
        imageLabel->setPixmap(pixmap.scaled(260, 260, Qt::KeepAspectRatio));
        imageLabel->setStyleSheet("border:none;");
        itemLayout->addWidget(imageLabel);

        // Thêm tên sản phẩm
        QLabel *nameBtn = new QLabel(QString::fromStdString(p->getPrdName()));
        nameBtn->setFixedHeight(30);
        nameBtn->setStyleSheet("background-color: transparent; color: #000; font-size: 18px; font-weight: 700; border: none; ");
        itemLayout->addWidget(nameBtn);
        /// gia
        string prices = formatCurrency(p->getUnitPrice());
        QLabel *price = new QLabel(QString::fromStdString(prices));
        price->setFixedHeight(30);
        price->setStyleSheet("background-color: transparent; color: #396AFF; font-size: 26px; font-weight: 700; border: none; ");
        itemLayout->addWidget(price);

        QPushButton *clickBtn = new QPushButton("Mua ngay");
        clickBtn->setStyleSheet("border:none; border-radius:8px; background-color: #396AFF; color: #fff; padding: 5px; margin 10px; font-size: 23px;");
        clickBtn->setCursor(Qt::PointingHandCursor);
        itemLayout->addWidget(clickBtn);


        QObject::connect(clickBtn, &QPushButton::clicked, [p]() {
            static modalViews *m = new modalViews;
            curProduct = p;
            m->setStackWidget(1);
            m->setupPrdUserPage(p);
            m->show();
        });
        // Thêm item widget vào layout
        int row = validProductCount / 3;
        int col = validProductCount % 3;
        gridLayout->addWidget(frame, row, col);
        validProductCount++;
    }

    // Đặt layout cho container widget
    productWidget->setLayout(gridLayout);

    // Gán productWidget làm widget bên trong QScrollArea
    scrollArea->setWidget(productWidget);

    // Đặt scrollArea vào layout của parentWidget
    QVBoxLayout *mainLayout = new QVBoxLayout(parentWidget);
    mainLayout->addWidget(scrollArea);

}
void user::populateCartWidget(QWidget* cartWidget) {
    if (cartWidget->layout() != nullptr) {
        QLayout* oldLayout = cartWidget->layout();
        QLayoutItem* item;
        while ((item = oldLayout->takeAt(0)) != nullptr) {
            delete item->widget(); // Xóa widget bên trong layout
            delete item; // Xóa item
        }
        delete oldLayout; // Xóa layout cũ
    }

    // Tạo mới ScrollArea và các widget khác như ban đầu
    QVector<QString> images = {":/new/img/img/lap1.jpg", ":/new/img/img/lap2.jpg", ":/new/img/img/lap3.jpg", ":/new/img/img/lap4.jpg", ":/new/img/img/lap5.jpg", ":/new/img/img/lap5.jpg", ":/new/img/img/lap1.jpg", ":/new/img/img/lap1.jpg", ":/new/img/img/lap1.jpg", ":/new/img/img/lap1.jpg"};

    QScrollArea* scrollArea = new QScrollArea(cartWidget);
    scrollArea->setWidgetResizable(true);
    scrollArea->setStyleSheet("border:none;");

    QWidget* containerWidget = new QWidget();
    QVBoxLayout* containerLayout = new QVBoxLayout(containerWidget);
    // cvector<string> detail = curCustomer->getCart();
    int j = -1;
    // Lặp qua sản phẩm và thêm vào layout
    for (InvoiceDetail* p :curCustomer->cart ) {


        // InvoiceDetail* p = InvoiceDetail::getDetailByID(z);
        if (p == nullptr) continue;
         j++;
        QHBoxLayout* productLayout = new QHBoxLayout();
        QLabel* imageLabel = new QLabel(containerWidget);

        int num = random(0, 6);
        QPixmap pixmap(images[num]);
        imageLabel->setPixmap(pixmap.scaled(200, 200, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        imageLabel->setFixedSize(200, 200);
        imageLabel->setStyleSheet("border:none;");

        QVBoxLayout* detailsLayout = new QVBoxLayout();
        string name = Product::getPrdByID(p->getPrdID())->getPrdName();
        QLabel* nameLabel = new QLabel(QString::fromStdString(name), containerWidget);
        // QLabel* nameLabel = new QLabel("name", containerWidget);
        nameLabel->setStyleSheet("background-color: transparent; color: #000; font-size: 18px; font-weight: 700; border: none;");
        string price = formatCurrency(p->getUnitPrice());
        QLabel* priceLabel = new QLabel(QString::fromStdString(price), containerWidget);
        priceLabel->setStyleSheet("background-color: transparent; color: #396AFF; font-size: 26px; font-weight: 700; border: none;");

        QHBoxLayout* quantityLayout = new QHBoxLayout();
        QSpinBox* quantitySpinBox = new QSpinBox(containerWidget);
        quantitySpinBox->setValue(p->getQuantity());
        quantitySpinBox->setMinimum(1);
        quantitySpinBox->setMaximum(9999);
        quantitySpinBox->setFixedHeight(30);
        quantitySpinBox->setFixedWidth(100);
        quantitySpinBox->setStyleSheet("border:1px solid #ccc; padding-left: 10px;");
        connect(quantitySpinBox, QOverload<int>::of(&QSpinBox::valueChanged), [p](int value) {
            p->setQuantity(value);
        });

        QPushButton* deleteButton = new QPushButton("Delete", containerWidget);
        deleteButton->setStyleSheet("background-color: rgb(255, 67, 67); color: #fff; border-radius: 5px;font-size: 16px; margin-left: 80px; border: none;");
        deleteButton->setFixedHeight(30);
        deleteButton->setFixedWidth(150);

        QObject::connect(deleteButton, &QPushButton::clicked, [j]() {
            if(curCustomer->cart[j]){
                curCustomer->cart[j] = nullptr;

            }

        });

        quantityLayout->addWidget(quantitySpinBox);
        quantityLayout->addWidget(deleteButton);
        detailsLayout->addWidget(nameLabel);
        detailsLayout->addWidget(priceLabel);
        detailsLayout->addLayout(quantityLayout);

        productLayout->addWidget(imageLabel);
        productLayout->addLayout(detailsLayout);

        QWidget* productWidget = new QWidget(containerWidget);
        productWidget->setLayout(productLayout);
        productWidget->setFixedHeight(200);
        productWidget->setStyleSheet("border-top: 1px solid #ccc;");
        containerLayout->addWidget(productWidget);
    }
    if (j <= 3) {
        QSpacerItem *spacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);
        containerLayout->addItem(spacer);
    }

    containerWidget->setLayout(containerLayout);
    scrollArea->setWidget(containerWidget);
    QVBoxLayout* mainLayout = new QVBoxLayout(cartWidget);
    mainLayout->addWidget(scrollArea);
    cartWidget->setLayout(mainLayout);

}

void user::on_refeshInv_2_clicked()
{
    populateCartWidget(ui->cartWidget);
    setupPreBuyWidget(ui->preBuyW);
}

void user::setupPreBuyWidget(QWidget *preBuyWContainer){
    if (!preBuyWContainer) return;

    // Xóa layout cũ nếu có
    QLayout *existingLayout = preBuyWContainer->layout();
    if (existingLayout) {
        // Xóa từng widget trong layout trước khi xóa layout
        while (QLayoutItem *item = existingLayout->takeAt(0)) {
            delete item->widget();  // Xóa widget
            delete item;            // Xóa item trong layout
        }
        delete existingLayout;  // Sau đó xóa layout chính
    }
    long long money = 0;

    // Tạo widget con cho QScrollArea
    QWidget *preBuyW = new QWidget(preBuyWContainer);


    QVBoxLayout *layout = new QVBoxLayout(preBuyW);
    int itemCount = 0;

    for (InvoiceDetail *detailPtr : curCustomer->cart) {
        if(detailPtr== nullptr) continue;

        itemCount++;
        std::string name = Product::getPrdByID(detailPtr->getPrdID())->getPrdName();

        // Tạo QLabel cho tên sản phẩm
        QLabel *nameLabel = new QLabel(QString::fromStdString(name), preBuyW);
        nameLabel->setStyleSheet("font-weight: bold; font-size: 18px;border-top: 1px solid #ccc; padding-top: 10px;");

        // Tạo QHBoxLayout để hiển thị số lượng và số tiền ngang hàng
        QHBoxLayout *hLayout = new QHBoxLayout();

        QLabel *quantityLabel = new QLabel(QString(" Số lượng: %1").arg(detailPtr->getQuantity()), preBuyW);
        long long price = detailPtr->getPrice();
        money +=price;
        QLabel *priceLabel = new QLabel(QString::fromStdString(formatCurrency(price)), preBuyW);
        priceLabel->setStyleSheet("background-color: transparent; color: #396AFF; font-size: 18px; font-weight: 700;");
        priceLabel->setAlignment(Qt::AlignRight);

        // Thêm số lượng và giá vào hLayout
        hLayout->addWidget(quantityLabel);
        hLayout->addStretch();
        hLayout->addWidget(priceLabel);

        // Thêm nameLabel và hLayout vào layout chính
        layout->addWidget(nameLabel);
        layout->addLayout(hLayout);
    }
    if (itemCount <= 3) {
        QSpacerItem *spacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);
        layout->addItem(spacer);
    }
    preBuyW->setLayout(layout);

    // Tạo QScrollArea
    QScrollArea *scrollArea = new QScrollArea(preBuyWContainer);
    scrollArea->setWidget(preBuyW);
    scrollArea->setWidgetResizable(true);
    scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    scrollArea->setStyleSheet("border:none;");

    // Đặt layout cho preBuyWContainer
    QVBoxLayout *mainLayout = new QVBoxLayout(preBuyWContainer);
    mainLayout->addWidget(scrollArea);

    preBuyWContainer->setLayout(mainLayout);
    ui->moneyPreBuy->setText(QString::fromStdString(formatCurrency(money)));
}
void user::setupInvoiceCus(){
    QStandardItemModel *modeliz = static_cast<QStandardItemModel *>(ui->tableViewInvoiceCus->model());
    if (modeliz == nullptr) {
        modeliz = new QStandardItemModel(ui->tableViewInvoiceCus);
        modeliz->setHorizontalHeaderLabels({"ID", "Nhân viên", "Thời gian", "Thanh toán", "Trạng thái"});
        ui->tableViewInvoiceCus->setModel(modeliz);
    } else {

        modeliz->removeRows(0, modeliz->rowCount());
    }

    for (Invoice *i : curCustomer->invoiceList) {
        if(i ==nullptr) continue;
        QString id = QString::fromStdString(i->getInvoiceID());
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
            new QStandardItem(nameStaff),
            new QStandardItem(time),
            new QStandardItem(money),
            new QStandardItem(status)
        });
    }
    ui->tableViewInvoiceCus->setModel(modeliz);
    if (!isInvoiceConnect) {
        connect(ui->tableViewInvoiceCus, &QTableView::doubleClicked, this, [this](const QModelIndex &index) {
            onTableInvoiceClicked(index, ui->tableViewInvoiceCus);
        });
        isInvoiceConnect = true;
    }
    ui->tableViewInvoiceCus->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableViewInvoiceCus->resizeRowsToContents();
    ui->tableViewInvoiceCus->setSelectionBehavior(QTableView::SelectRows);
    ui->tableViewInvoiceCus->setEditTriggers(QTableView::NoEditTriggers);

}
void user::onTableInvoiceClicked(const QModelIndex &index, QTableView *tableView)
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
        static modalViews *mdz = nullptr;
        if(mdz == nullptr){
            mdz = new modalViews;
        }
        mdz->setStackWidget(0);
        mdz->setupInvoiceView(idSelect);
        mdz->show();



    }
}

void user::on_refeshInv_clicked()
{
    setupInvoiceCus();
}

void user::on_comboBox_currentIndexChanged(int index)
{
    QString currentText = ui->comboBox->currentText();
    string text = currentText.toStdString();
    if(text!=""&& text!="Trạng thái hoá đơn"){


        QStandardItemModel *modeliz = static_cast<QStandardItemModel *>(ui->tableViewInvoiceCus->model());
                if (modeliz == nullptr) {
                    modeliz = new QStandardItemModel(ui->tableViewInvoiceCus);
                    modeliz->setHorizontalHeaderLabels({"ID", "Nhân viên", "Thời gian", "Thanh toán", "Trạng thái"});
                    ui->tableViewInvoiceCus->setModel(modeliz);
                } else {

                    modeliz->removeRows(0, modeliz->rowCount());
                }

                string lowerWord = toLowerCase(text);
                for (Invoice *i : curCustomer->invoiceList) {
                    if(text == "Đã thanh toán" && i->getStatus() == 0) continue;
                    if(text == "Chưa thanh toán" && i->getStatus() == 1) continue;
                    QString id = QString::fromStdString(i->getInvoiceID());
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
                        new QStandardItem(nameStaff),
                        new QStandardItem(time),
                        new QStandardItem(money),
                        new QStandardItem(status)
                    });

                }
                ui->tableViewInvoiceCus->setModel(modeliz);


                if (!isInvoiceConnect) {
                    connect(ui->tableViewInvoiceCus, &QTableView::doubleClicked, this, [this](const QModelIndex &index) {
                        onTableInvoiceClicked(index, ui->tableViewInvoiceCus);
                    });
                    isInvoiceConnect = true;
                }
                ui->tableViewInvoiceCus->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
                ui->tableViewInvoiceCus->resizeRowsToContents();
                ui->tableViewInvoiceCus->setSelectionBehavior(QTableView::SelectRows);
                ui->tableViewInvoiceCus->setEditTriggers(QTableView::NoEditTriggers);
    }
}

void user::setupProfileCus(){
    ui->nameLb->setText(QString::fromStdString(curCustomer->getName()));
    ui->idLb->setText(QString::fromStdString(curCustomer->getID()));
    ui->emaiLb->setText(QString::fromStdString(curCustomer->getEmail()));
    ui->passLb_2->setText(QString::fromStdString(curCustomer->getPass()));
    ui->phoneLb->setText(QString::fromStdString(curCustomer->getPhone()));
    ui->address->setText(QString::fromStdString(curCustomer->getAddress()));
}

void user::on_saveBtn_clicked()
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
        if(text.toStdString() == curCustomer->getPass()){
            string name = ui->nameLb->text().toStdString();
            string pass = ui->passLb_2->text().toStdString();
            string email = ui->emaiLb->text().toStdString();
            string phone = ui->phoneLb->text().toStdString();
            string address = ui->address->text().toStdString();
            curCustomer->setEmail(email);
            curCustomer->setName(name);
            curCustomer->setPass(pass);
            curCustomer->setPhone(phone);
            curCustomer->setAddress(address);
            ui->statusProfile->setText("Thay đổi thông tin thành công!");
        }else{
            ui->statusProfile->setText("Nhập mật khẩu sai! Nhập lại.");
        }
    }
}


void user::on_pushButton_3_clicked()
{
    int j = -1;
    InvoiceDetail *newDetail;
    do{
        j++;
         newDetail = curCustomer->cart[j];
    }
    while(!newDetail);

    string day = getTimeNow();
    Invoice *newInv = new Invoice(Notify::currentEmp,curCustomer->getID(), day,false, newDetail->getDetailID());
    Invoice::inv.push_back(newInv);
    newInv->addDetailID(newDetail->getDetailID());
    newDetail->setInvoiceID(newInv->getInvoiceID());
    //  add het detail vao
    for(int i = 1; i<curCustomer->cart.getSize(); i++){
        if(curCustomer->cart[i]!= nullptr){
            if(i == j) continue;
            newDetail = curCustomer->cart[i];
            newInv->addDetailID(newDetail->getDetailID());
            newDetail->setInvoiceID(newInv->getInvoiceID());
            curCustomer->cart[i] = nullptr;
        }
    }
    string invID = newInv->getInvoiceID();


    curCustomer->addInvoice(invID);
    Employee *emp = Employee::getEmpById(Notify::currentEmp);
    emp->addInvoice(invID);
    modalViews * mz = new modalViews;

    mz->setStackWidget(0);
    mz->setupInvoiceView(invID);
    mz->show();

}


void user::on_logOutBtn_clicked()
{
    this->close();
    MainWindow *mw = new MainWindow;
    mw->setAttribute(Qt::WA_DeleteOnClose);
    mw->show();
}


void user::on_notifyBtn_2_clicked()
{
    ui->lineEdit->setText("");
    QMessageBox msgBox;
    msgBox.setIcon(QMessageBox::Information); // Đổi icon thành dạng thông tin
    msgBox.setWindowTitle("Thông báo");
    msgBox.setText("Thông tin đã được ghi nhận!");
    msgBox.setWindowIcon(QIcon(":/new/img/img/images.jpg")); // Đặt icon cho cửa sổ
    msgBox.setStandardButtons(QMessageBox::Ok); // Chỉ có nút OK
    msgBox.exec();
}

