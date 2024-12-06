#include "global.h"
#include <algorithm>
#include <sstream>
#include <iostream>
#include <ctime>
#include <iomanip>
string getTimeNow()
{
    time_t t = time(nullptr);
    tm *now = localtime(&t);
    int year = now->tm_year + 1900; // tm_year tính từ năm 1900
    int month = now->tm_mon + 1;    // tm_mon từ 0 đến 11
    int day = now->tm_mday;

    ostringstream oss;
    oss << setfill('0') << setw(2) << day << "/" << setw(2) << month << "/" << year;
    string currentDate = oss.str();
    return currentDate;
}
string toLowerCase(const string& str) {
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}
string formatCurrency(long long number)
{
    stringstream ss;
    string result;
    ss << number;
    string strNumber = ss.str();
    int len = strNumber.length();
    int count = 0;
    for (int i = len - 1; i >= 0; --i)
    {
        result.insert(0, 1, strNumber[i]);
        count++;
        if (count == 3 && i != 0)
        {
            result.insert(0, 1, '.');
            count = 0;
        }
    }
    result += "VND";
    return result;
}

int setUpDataBase(){


    if (!Product::loadFromFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\products.csv") ) {
        cerr << "Failed to load product data.\n";
        return 0;
    }
    if (!InvoiceDetail::loadFromFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\detail.csv")) {
        cerr << "Failed to load invoice detail data.\n";
        return 0;
    }
    if (!Invoice::loadFromFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\invoice.csv")) {
        cerr << "Failed to load invoice data.\n";
        return 0;
    }
    if (!Customer::loadFromFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\customers.csv") ) {
        cerr << "Failed to load customer data.\n";
        return 0;
    }
    if (!Employee::loadFromFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\employees.csv") ) {
        cerr << "Failed to load employee data.\n";
        return 0;
    }
    if (!Notify::loadFromFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\dataNotify.csv") ) {
        cerr << "Failed to load notify data.\n";
        return 0;
    }

    return 1;
}
int random(int lower, int upper) {
    // Tạo một đối tượng random engine (sử dụng seed từ hệ thống)
    std::random_device rd;
    std::mt19937 gen(rd());

    // Tạo một phân phối số nguyên ngẫu nhiên trong khoảng từ lower đến upper
    std::uniform_int_distribution<> dis(lower, upper);

    // Trả về số ngẫu nhiên
    return dis(gen);
}

int saveDataBase(){

    InvoiceDetail::saveToFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\detail.csv");
    Product::saveToFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\products.csv");
    Invoice::saveToFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\Invoice.csv");
    Customer::saveToFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\customers.csv");
    Employee::saveToFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\employees.csv");
    Notify::saveToFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\dataNotify.csv");
     return 1;
}
