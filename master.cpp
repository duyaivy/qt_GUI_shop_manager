#include <QApplication>
#include <qstring.h>
#include "mainwindow.h"
#include"admin.h"
#include"invoicedetail.h"
#include"product.h"
#include"invoice.h"
#include"global.h"
// #include "ui_mainwindow.h"
using namespace std;

int person::nextID = 1;
int product::nextPrdID = 1;
int invoiceDetail::nextDetailID = 1;
int invoice::nextInvoiceID = 1;
std::vector<person*> person::obj;
//tao con tro currentPerson
person* curPerson = nullptr;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow mainWindow;
    person p1("Tran Tam Nhu", "123456789", "john@example.commmmmmmm", "123456", "admin");
    product* pl = new product("Laptop A", "Brand A", "Detail A", 1000, 10);
    product* p2 = new product("Laptop c", "Brand A", "Detail B", 1500, 5);
    product* p3 = new product("Gaming Laptop", "Brand A", "Detail B", 2500, 5);

    // invoiceDetail::loadFromFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\detail.csv");
    // invoice::loadFromFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\invoice.csv");
    // invoice::getInvoiceByID("IN00002")->setQuantityInvoice("DE00002", 12);
    // invoice::getInvoiceByID("IN00001")->setQuantityInvoice("DE00003", 32);
    // invoice::getInvoiceByID("IN00001")->deleteInvoice();
    // cout<<invoice::getInvoiceByID("IN00001")->getTotalPrice();



    // mainWindow.getptr()->label_14->setText(QString::fromStdString(product::getPrdByID("PD00001")->getPrdName()));
    // invoice::display();

    // OK invoiceDetail::getDetailByID("DE00003")->setQuantity(10);

    // invoiceDetail::saveToFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\detail.csv");
    // invoice::saveToFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\invoice.csv");

    admin adminHome;
    adminHome.show();
    // mainWindow.show();
    return app.exec();
}
