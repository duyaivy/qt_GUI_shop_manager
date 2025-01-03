#ifndef NOTIFY_H
#define NOTIFY_H
#include<iostream>
#include<string.h>
#include "vector.h"
using namespace std;
class Notify
{
protected:
    string notifyID, invoiceID, staffID;
    long long  price;
    bool status;

    static int nextID;
    string generateID();
public:
    Notify(string invID, string empID, long long price, bool status);
    static int setCurEmp(string name);
    static string getCurEmp();
    int setStaffID(string id);
    int setInvoiceID(string id);
    int setStatus(bool status);
    int setPrice(long long price);
    string getNotifyID();
    string getStaffID();
    string getInvoiceID();
    long long getPrice();
    bool getStatus();
    static int loadFromFile(const string &filename);
    static void saveToFile(const string &filename);
    static string currentEmp;
    static Notify* getNotiByID(string &z);
    static Notify*getNotiByEmpID(string &z);
    static Notify*getNotiByInvID(string &z);
    string getEmpID();
    static cvector<Notify*> noti;
};

#endif // NOTIFY_H
