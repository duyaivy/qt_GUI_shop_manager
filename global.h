#ifndef GLOBAL_H
#define GLOBAL_H
#include<string>
#include <random>
#include "customer.h"
#include "employee.h"
#include"invoice.h"
#include"invoicedetail.h"
#include"product.h"
#include "notify.h"
using namespace std;
extern Customer* curCustomer;
extern Employee* curEmployee;
extern Employee* selectEmp;
extern Customer* selectCus;
extern Person* selectPer;
extern Invoice *selectInv;
extern Product *curProduct;
extern Person *onLogin;
string toLowerCase(const string& str);
string formatCurrency(long long number);
int setUpDataBase();
int saveDataBase();
string getTimeNow();
int random(int lower, int upper);
#endif // GLOBAL_H
