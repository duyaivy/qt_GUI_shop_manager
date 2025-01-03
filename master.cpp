#include <QApplication>
#include <qstring.h>
#include "mainwindow.h"
#include "admin.h"
#include "global.h"
#include"modalview.h"
#include"modalviews.h"
#include"user.h"

using namespace std;
int Product::nextPrdID = 1;
int Employee::nextEmpID = 0;
int Customer::nextCusID = 1;
int InvoiceDetail::nextDetailID = 1;
int Invoice::nextInvoiceID = 1;
int Notify::nextID = 1;
string Notify::currentEmp = "EP00001";
Employee *curEmployee = nullptr;
Employee *selectEmp = nullptr;
Person *onLogin = nullptr;
Customer *curCustomer = nullptr;
Customer *selectCus = nullptr;
Person *selectPer = nullptr;
Invoice *selectInv = nullptr;
Product *curProduct = nullptr;
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow mainWindow;
    // admin
    Employee *e = new Employee("admin","000000","admin@email.com","123456","MANAGER",false,"12/10/2024");
    Person::obj.push_back(e);
    setUpDataBase();
    curEmployee = dynamic_cast<Employee*>(Person::obj[0]);
    curCustomer = dynamic_cast<Customer*>(Person::obj[3]);
    onLogin = Person::obj[3];

    // for(Person *p : Person::obj){
    //     qDebug()<<p->getPhone()<<" pw: "<<p->getPass()<<p->getRole();
    // }
    // string &dd = curCustomer->getCart()[0];
    // InvoiceDetail::getDetailByID(dd)->deleteDetail();
        mainWindow.show();

    // admin adminHome;
    // adminHome.show();

    // selectPer = Person::obj[3];
    // onLogin = Person::obj[0];

    // user userHome;
    // userHome.show();


    // modalViews *md = new modalViews;
    // curProduct = Product::prd[2];

    // // md->setupPrdAdminPage(curProduct);
    // md->setStackWidget(0);
    // md->setupPrdUserPage(curProduct);
    // string z = "IN00003";
    // Invoice *i = Invoice::getInvoiceByID(z);
    // md->setupInvoiceView(z);
    // md->setAttribute(Qt::WA_DeleteOnClose);
    // md->show();

    return app.exec();
}
