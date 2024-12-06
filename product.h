#ifndef PRODUCT_H
#define PRODUCT_H
#include<iostream>
#include <string>
#include "vector.h"
using namespace std;

class Product
{
protected:
    string productID, prdName,prdBrand,prdDetail;
    long long unitPrice,importPrice;
    int quantity, qntSell;
    bool isDelete;
    static int nextPrdID;

    string generatePrdID();

public:
    Product(const string name ="unknown",const string brand ="unknown",const string detail="unknown",const long long unitPrice = 0,const long long importPrice = 0, const int quantity= 0, const int qntSell= 0, const bool isDelete= false);
    static void getInfor(const Product *p);
    static void getInforToManager(const Product *p);
    void printInfor();
    static void setInfor(Product *p);
    void setName(string name);
    void setBrand(string brand);
    void setDetail(string detail);
    void setQuantity( const int count);
    int searchByID(string id);
    int static searchByBrand(string brand);
    int static searchByName(string name);
    bool deletePrd();
    static void displayAllPrd();
    static void displayAllPrdToManager();
    void setUnitPrice(const long long price);
    static int saveToFile(string fileName);
    static int loadFromFile(string fileName);
    static Product* getPrdByID(const string id );
    string getPrdID();
    string getPrdName();
    string getPrdBranch();
    string getPrdDetail();
    long long getUnitPrice();
    int getQuantity();
    void setImportPrice(long long price);
    void setQuantitySell(int qnt);
    void setDelete(bool del);
    long long getImportPrice();
    int getQuantitySell();
    static int getAllSell();
    static int getAllReturn();
    bool getDelete();
    void handleThisProduct();

    static int getPrdQuantity();
    static cvector<Product*> prd;

};
#endif
