#include "global.h"
#include <algorithm>
#include <sstream>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <filesystem>
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

// int setUpDataBase(){


//     if (!Product::loadFromFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\products.csv") ) {
//         cerr << "Failed to load product data.\n";
//         return 0;
//     }
//     if (!InvoiceDetail::loadFromFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\detail.csv")) {
//         cerr << "Failed to load invoice detail data.\n";
//         return 0;
//     }
//     if (!Invoice::loadFromFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\invoice.csv")) {
//         cerr << "Failed to load invoice data.\n";
//         return 0;
//     }
//     if (!Customer::loadFromFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\customers.csv") ) {
//         cerr << "Failed to load customer data.\n";
//         return 0;
//     }
//     if (!Employee::loadFromFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\employees.csv") ) {
//         cerr << "Failed to load employee data.\n";
//         return 0;
//     }
//     if (!Notify::loadFromFile("D:\\QUOCDUY\\qt_pbl2\\shop_manager\\dataNotify.csv") ) {
//         cerr << "Failed to load notify data.\n";
//         return 0;
//     }

//     return 1;
// }

int setUpDataBase() {
    // Lấy đường dẫn thư mục chứa file thực thi
    std::filesystem::path basePath = std::filesystem::current_path();

    // Đường dẫn tương đối tới các file CSV (đặt trong thư mục con "data")
    std::filesystem::path dataDir = basePath / "database";
    std::filesystem::path productFile = dataDir / "products.csv";
    std::filesystem::path detailFile = dataDir / "detail.csv";
    std::filesystem::path invoiceFile = dataDir / "invoice.csv";
    std::filesystem::path customerFile = dataDir / "customers.csv";
    std::filesystem::path employeeFile = dataDir / "employees.csv";
    std::filesystem::path dataNotifyFile = dataDir / "dataNotify.csv";

    // Tải dữ liệu từ file CSV
    if (!Product::loadFromFile(productFile.string())) {
        std::cerr << "Failed to load product data: " << productFile << "\n";
        return 0;
    }
    if (!InvoiceDetail::loadFromFile(detailFile.string())) {
        std::cerr << "Failed to load invoice detail data: " << detailFile << "\n";
        return 0;
    }
    if (!Invoice::loadFromFile(invoiceFile.string())) {
        std::cerr << "Failed to load invoice data: " << invoiceFile << "\n";
        return 0;
    }
    if (!Customer::loadFromFile(customerFile.string())) {
        std::cerr << "Failed to load customer data: " << customerFile << "\n";
        return 0;
    }
    if (!Employee::loadFromFile(employeeFile.string())) {
        std::cerr << "Failed to load employee data: " << employeeFile << "\n";
        return 0;
    }
    if (!Notify::loadFromFile(dataNotifyFile.string())) {
        std::cerr << "Failed to load notify data: " << dataNotifyFile << "\n";
        return 0;
    }

    std::cout << "All data loaded successfully.\n";
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

int saveDataBase() {
    try {
        // Lấy đường dẫn hiện tại
        std::filesystem::path basePath = std::filesystem::current_path();
        std::filesystem::path dataDir = basePath / "database";

         if (!std::filesystem::exists(dataDir)) {
            std::filesystem::create_directory(dataDir);
        }


        std::filesystem::path productFile = dataDir / "products.csv";
        std::filesystem::path detailFile = dataDir / "detail.csv";
        std::filesystem::path invoiceFile = dataDir / "invoice.csv";
        std::filesystem::path customerFile = dataDir / "customers.csv";
        std::filesystem::path employeeFile = dataDir / "employees.csv";
        std::filesystem::path dataNotifyFile = dataDir / "dataNotify.csv";


        InvoiceDetail::saveToFile(detailFile.string());
        Product::saveToFile(productFile.string());
        Invoice::saveToFile(invoiceFile.string());
        Customer::saveToFile(customerFile.string());
        Employee::saveToFile(employeeFile.string());
        Notify::saveToFile(dataNotifyFile.string());

        std::cout << "Database saved successfully!" << std::endl;
        return 1;
    } catch (const std::exception& ex) {
        std::cerr << "Error saving database: " << ex.what() << std::endl;
        return 0;
    }
}


