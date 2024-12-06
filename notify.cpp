#include "notify.h"
#include<sstream>
#include <iostream>
#include <iomanip>
#include <fstream>
cvector<Notify*> Notify::noti;
int nextID = 1;
string currentEmp = "EP00000";
Notify::Notify(string invID, string empID, long long price, bool status) {
    this->notifyID = generateID();
    this->invoiceID = invID;
    this->staffID = empID;
    this->price = price;
    this->status = status;

}



int Notify::setStaffID(string id){
    this->staffID = id;
    return 1;
}

int Notify::setInvoiceID(string id){
    this->invoiceID = id;
    return 1;
}

int Notify::setStatus(bool status){
    this->status = status;
    return 1;
}

int Notify::setPrice(long long price){
    this->price = price;
    return 1;
}

string Notify::getNotifyID(){
    return notifyID;
}

string Notify::getStaffID(){
    return this->staffID;
}

string Notify::getInvoiceID(){
    return this->invoiceID;
}

long long Notify::getPrice(){
    return this->price;
}

bool Notify::getStatus(){
    return this->status;
}

int Notify::loadFromFile(const string &filename) {
    ifstream file(filename);
    if (!file) {
        return 0; // Trả về 0 nếu không mở được file
    }

    string firstLine;
    getline(file, firstLine); // Lấy dòng đầu tiên và in ra màn hình
    Notify::setCurEmp(firstLine);

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string notiID, invID, empID, priceStr, status;

        getline(ss, notiID, ',');
        getline(ss, invID, ',');
        getline(ss, empID, ',');
        getline(ss, priceStr, ',');
        getline(ss, status, ',');

        try {
            long long price = stoll(priceStr); // Chuyển price sang long long
            bool del = (status == "1");

            Notify *newNotify = new Notify(invID, empID, price, del);
             Notify::noti.push_back(newNotify);
            // Xử lý thêm nếu cần, ví dụ lưu vào danh sách hoặc in ra thông tin.

        } catch (const out_of_range &) {
            cerr << "Price out of range: " << priceStr << endl;
            return 0;
        } catch (const invalid_argument &) {
            cerr << "Invalid price format: " << priceStr << endl;
            return 0;
        }
    }

    file.close();
    return 1;
}
int Notify::setCurEmp(string name){
    Notify::currentEmp = name;
    return 1;
}
string Notify::getCurEmp(){
    return currentEmp;
}
void Notify::saveToFile(const string &filename){
    ofstream file(filename, ios::trunc);
    if (!file)
    {
        cerr << "Error opening file for writing.\n";
        return;
    }
    file << Notify::currentEmp << endl;
    for (Notify *p : Notify::noti)
    {
        file << p->getNotifyID() << "," << p->getInvoiceID()<< "," << p->getStaffID() << "," << p->getPrice() << "," << p->getStatus();
        file << endl;

    }

    file.close();
}
string Notify::getEmpID(){
    return this->staffID;
}
Notify* Notify::getNotiByID(string &z){
    for (Notify *p : Notify::noti)
    {
        if (p->getNotifyID() == z)
        {
            return p;
        }
    }
    return nullptr;
}
Notify* Notify::getNotiByEmpID(string &z){
    for (Notify *p : Notify::noti)
    {
        if (p->getEmpID() == z)
        {
            return p;
        }
    }
    return nullptr;
}
Notify* Notify::getNotiByInvID(string &z){
    for (Notify *p : Notify::noti)
    {
        if ( p->getInvoiceID() == z)
        {
            return p;
        }
    }
    return nullptr;
}
string Notify::generateID(){
    stringstream ss;
    ss << "NO" << setw(5) << setfill('0') << nextID++;
    return ss.str();
}
