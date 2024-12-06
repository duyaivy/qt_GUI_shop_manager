#ifndef INVOICE_H
#define INVOICE_H
#include<iostream>
#include <string>
#include "vector.h"
using namespace std;

class InvoiceDetail;

class Invoice
{
protected:
    string InvoiceID, staffID, customerID, time;
    long long totalPrice;
    static int nextInvoiceID;
    bool status;
    cvector<string> detailID;
    string generateInvoiceID();

public:
    Invoice(const string staffID ="unknown", const string customerID ="unknown", const string time= "01/01/2024", const bool status=true,const string detailID="unknown");
    ~Invoice();
    static void getInfor(const Invoice *);
    int addDetailID(string detailID);
    long long calcTotalPrice();
    void setQuantityInvoice(string detailID, int number);
    static Invoice* getInvoiceByID(const string id);
    void deleteInvoice();
    static void display();
    static int saveToFile(string fileName);
    static int loadFromFile(string fileName);
    bool getStatus();
    int setStatus(bool status);
    string getInvoiceID();
    string getStaffID();
    string getCustomerID();
    string getTime();
    cvector<string> getDetailID();
    long long getTotalPrice();
    static long long  getRevenue();
    static long long calcProfit();
    static int getInvoiceQuantity();
    static cvector<Invoice*> inv;
    cvector<InvoiceDetail*>invDetail;

};

#endif

