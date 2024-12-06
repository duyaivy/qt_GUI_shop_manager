#ifndef INVOICEDETAIL_H
#define INVOICEDETAIL_H
#include<iostream>
#include <string>
#include"vector.h"
using namespace std;

class product;

class InvoiceDetail
{
protected:
    string detailID, invoiceID, prdID;
    int quantity;
    long long price;
    static int nextDetailID;
    string generateDetailID();
public:
    InvoiceDetail(const string invoiceID ="unknown", const int quantity= 0,const string prdID="unknown");
    static void getInfor(const InvoiceDetail *detail);
    void setQuantity(int number);
    static InvoiceDetail* getDetailByID(const string id );
    void deleteDetail();
    static void displayDetail();
    static int saveToFile(string fileName);
    static int loadFromFile(string fileName);
    int setInvoiceID(string s);
    string getDetailID();
    string getInvoiceID();
    string getPrdID();
    int getQuantity();
    long long getPrice();
    long long getImportPrice();
    long long getUnitPrice();
    static cvector<InvoiceDetail*> detail;
};

#endif


