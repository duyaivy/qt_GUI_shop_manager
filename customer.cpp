
#include "Customer.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "vector.h"
#include <iomanip>
#include "InvoiceDetail.h"
#include "global.h"

using namespace std;
static int nextCusID = 1;

Customer::Customer(const string &_name, const string &_phone, const string &_email, const string &_password,const bool & _isDelete, const string &_address)
    : Person(_name, _phone, _email, _password, "CUSTOMER", _isDelete), address(_address)
{
    this->ID = generateID();
};
Customer::~Customer(){
    cout<<"delete Cus\n";
}
void Customer::updateInfo()
{
    int choice;
    cout << "Choose update option:" << endl;
    cout << "1. Update all information" << endl;
    cout << "2. Update part of information" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore();

    switch (choice)
    {
    case 1:
        cout << "Update all information" << endl;
        this->setInfor();
        break;

    case 2:
    {
        bool continueUpdating = true; // Biến để kiểm soát vòng lặp

        while (continueUpdating)
        {
            int partChoice;
            cout << "Choose part to update:" << endl;
            cout << "1. Update phone" << endl;
            cout << "2. Update email" << endl;
            cout << "3. Update password" << endl;
            cout << "4. Finish updating" << endl; // Thêm lựa chọn để kết thúc cập nhật
            cout << "Enter your choice: ";
            cin >> partChoice;
            cin.ignore();

            switch (partChoice)
            {
            case 1:
            {
                string newPhone;
                cout << "Enter new phone number: ";
                getline(cin, newPhone);
                setPhone(newPhone);
                system("pause");
                break;
            }

            case 2:
            {
                string newEmail;
                cout << "Enter new email: ";
                getline(cin, newEmail);
                setEmail(newEmail);
                system("pause");
                break;
            }

            case 3:
            {
                string password, confirmPass;
                cout << "Enter old password:\t";
                password = hidenPass();
                if (this->pass == password)
                {
                    cout << "Enter new password:\t";
                    password = hidenPass();
                    int todo = 1, maxTry = 3;

                    while (todo < maxTry)
                    {
                        cout << "Confirm new password: ";
                        confirmPass = hidenPass();
                        if (password == confirmPass)
                        {
                            setPass(password);
                            cout << "Password set successfully!" << endl;
                            break;
                        }
                        else
                        {
                            todo++;
                            if (todo < maxTry)
                            {
                                cout << "Passwords do not match. Please try again!" << endl;
                            }
                            else
                            {
                                cout << "Maximum attempts reached. Password not set." << endl;
                            }
                        }
                    }
                }
                else
                {
                    cout << "Wrong old password, so you can't reset password!" << endl;
                }
                system("pause");
                break;
            }

            case 4:
            {
                continueUpdating = false;
                cout << "Finished updating" << endl;
                break;
            }

            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
            }
        }
        break;
    }

    default:
        cout << "Invalid choice!" << endl;
        break;
    }
}

string Customer::getAddress()
{
    return address;
}

Customer *Customer::getCusById(const string &cusID)
{
    for (Person *p : Person::obj)
    {
        if (p->getID() == cusID)
        {
            Customer *cus = dynamic_cast<Customer *>(p);
            return cus; // Trả về con trỏ đến đối tượng Customer nếu tìm thấy
        }
    }
    return nullptr; // Trả về nullptr nếu không tìm thấy
}
string Customer::generateID()
{

    stringstream ss;
    ss << "CS" << setw(5) << setfill('0') << nextCusID++;
    return ss.str();
}

void Customer::saveToFile(const string &fileName)
{
    ofstream file(fileName, ios::trunc);
    if (!file)
    {
        cerr << "Can not open file !\n";
        return;
    }

    for (Person *p : Person::obj)
    {
        Customer *customer = dynamic_cast<Customer *>(p);
        if (customer)
        {
            // Nếu chuyển đổi thành công, nghĩa là Person là đối tượng Customer
            file << customer->getID() << ","
                 << customer->getName() << ","
                 << customer->getPhone() << ","
                 << customer->getEmail() << ","
                 << customer->getPass() << ","
                 << customer->getDelete() << ","
                 << customer->getAddress();

            for (Invoice *invoice : customer->invoiceList)
            {
                if(invoice == nullptr) continue;
                file << "," << invoice->getInvoiceID();
            }
            for (InvoiceDetail *i : customer->cart)
            {
            if(i == nullptr) continue;
                file << "," << i->getDetailID();
            }
            file << endl;
        }
    }
    file.close();
}

int Customer::loadFromFile(const string &fileName)
{
    ifstream file(fileName);
    if (!file)
    {
        return 0; // Trả về 0 nếu không mở được file
    }

    string line;
    while (getline(file, line))
    {
        stringstream ss(line);
        string _customerID, _name, _phone, _email, _password,_isDel , _address, _id;

        getline(ss, _customerID, ',');
        getline(ss, _name, ',');
        getline(ss, _phone, ',');
        getline(ss, _email, ',');
        getline(ss, _password, ',');
        getline(ss, _isDel, ',');
        getline(ss, _address, ',');
        getline(ss, _id, ',');

        try
        {   bool del;
            (_isDel== "1")? del = true: del = false;
            Customer *newCustomer = new Customer(_name, _phone, _email, _password, del,_address);
            Person::obj.push_back(newCustomer);
            if (_id != "")
            {
                if (_id.find("DE") != string::npos)
                {
                    newCustomer->addCaft(_id);
                }
                else if(_id.find("IN") != string::npos)
                {
                    newCustomer->addInvoice(_id);
                }
            }
            // add het _id cua person
            while (getline(ss, _id, ','))
            {
                if (_id.find("DE") != string::npos)
                {
                    newCustomer->addCaft(_id);
                }
                else if(_id.find("IN") != string::npos)
                {
                    newCustomer->addInvoice(_id);
                }
            }
        }
        catch (const out_of_range &)
        {
            return 0; // Trả về 0 nếu gặp lỗi ngoài phạm vi
        }
    }

    file.close();
    return 1; // Trả về 1 nếu thành công
}

void Customer::display()
{
    if(this->isDelete) return;
    cout << setw(10) << getID()
         << setw(30) << getName()
         << setw(30) << getEmail()
         << setw(15) << getPhone()
         << setw(50) << getAddress() << endl; // Thêm địa chỉ
}
void Customer::viewAllInfor()
{
    if(this->isDelete) return;
    cout << "----------------------------------------------" << endl;
    cout << setw(20) << "ID: " << getID() << endl
         << setw(20) << "Full name: " << getName() << endl
         << setw(20) << "Email: " << getEmail() << endl
         << setw(25) << "Phone: " << getPhone() << endl
         << setw(20) << "Address: " << getAddress() << endl
         << setw(20) << "Password: " << getPass() << endl;
}
void Customer::setAddress(const string &add)
{
    this->address = add;
}

void Customer::setInfor()
{
    string t_address, t_name, t_phone, t_email;

    cout << "Enter the full name: ";
    getline(cin, t_name);
    setName(t_name);

    cout << "Enter the phone number: ";
    getline(cin, t_phone);
    setPhone(t_phone);
    cout << "Enter the email: ";
    getline(cin, t_email);
    setEmail(t_email);
    cout << "Enter the address: ";
    getline(cin, t_address);
    setAddress(t_address);
}
int Customer::deleteCustomer()
{
    // auto it = find(Person::obj.begin(), Person::obj.end(), this);
    // if (it != Person::obj.end()) {
    //     Person::obj.erase(it);
    //     delete this;// giai phong bo nho cho this
    // }
    this->isDelete = 1;
    return 1;
}
void Customer::printTableHeader()
{
    cout << left << setw(10) << "ID"
         << setw(30) << "Full Name"
         << setw(30) << "Email"
         << setw(15) << "Phone"
         << setw(50) << "Address" // Thêm cột "Address"
         << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
}

int Customer::regis()
{
    string t_name, t_phone, t_email, t_address;
    cout << "Enter the full name: ";
    getline(cin, t_name);

    cout << "Enter the phone number: ";
    getline(cin, t_phone);

    cout << "Enter the email: ";
    getline(cin, t_email);

    cout << "Enter the address: ";
    getline(cin, t_address);

    string password, confirmPass;

    cout << "Enter your password:\t";
    password = Person::hidenPass();
    while (1)
    {
        cout << "Confirm your password: ";
        confirmPass = hidenPass();
        if (password == confirmPass)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    // Customer( const string& _password, const string& _address)
    Customer *c = new Customer(t_name, t_phone, t_email, password, false,t_address);
    Person::obj.push_back(c);
    cout << "Register Sucessfully!\nHere is your infor to Login\n";
    cout << left << setw(15) << "Phone:" << setw(10) << c->getPhone() << endl
         << left << setw(10) << "Password:" << setw(20) << c->getPass() << endl;
    system("pause");
    return 1;
}

int Customer::addCaft(string cart)
{
    this->idCart.push_back(cart);
    InvoiceDetail *i = InvoiceDetail::getDetailByID(cart);
    if(i){
        this->cart.push_back(i);
    }
    return 1;
}
int Customer::getInforCart()
{
    int cnt = 0;
    for (string cart : this->idCart)
    {
        InvoiceDetail *dt = InvoiceDetail::getDetailByID(cart);
        if (dt != nullptr)
        {
            dt->getInfor(dt);
            cnt++;
        }
    }
    return cnt != 0;
}

int Customer::handleThisCustomer()
{
    while (1)
    {
        system("cls");
        cout << "--- Handle Customer " << this->getName() << " ---\n\n";
        int chosse;
        cout << "Select 1 action:\n";
        cout << "1. View all information.\n";
        cout << "2. View this Customer's shopping cart.\n";
        cout << "3. View this Customer's invoice.\n";
        cout << "0. Exit\n";
        cout << "Choose an option: ";
        cin >> chosse;
        cin.ignore();
        if (chosse == 0)
        {

            system("pause");
            return 1;
        }
        switch (chosse)
        {
        case 1:
        {
            cout << "Customer " << this->getName() << "'s all infor:\n";
            this->viewAllInfor();
            system("pause");
            break;
        }
        case 2:
        {
            cout << "Customer " << this->getName() << "'s shopping cart:\n";
            if (!this->getInforCart())
            {
                cout << "Customer " << this->getName() << "doesn't have shopping cart." << endl;
            }
            system("pause");
            break;
        }
        case 3:
        {
            cout << "Customer " << this->getName() << "'s invoice:\n";
            this->getInforInvoice();
            system("pause");
            break;
        }
        default:
        {
            cout << "invalid\n";
            system("pause");
            break;
        }
        }
    }
}

int Customer::searchCustomerById()
{

    string searchID;
    cout << "\nEnter customer ID to search (0 to cancel): ";
    cin >> searchID;
    cin.ignore();
    if (searchID == "0")
    {
        cout << "Canceled searching.\n";
        return 0;
    }
    bool found = false;
    Customer::printTableHeader();
    for (Person *p : Person::obj)
    {
        Customer *cust = dynamic_cast<Customer *>(p); // Chỉ tìm kiếm trong đối tượng Customer
        if (cust && cust->getID() == searchID)
        {
            cust->display();
            found = true;
            return 0;
        }
    }
    if (!found)
    {
        cout << "Not Found " << searchID << endl;
        system("pause");
        return 0;
    }
    return 1;
}
int Customer::searchCustomerByName()
{
    string word;
    cout << "\nEnter customer name to search (0 to cancel): ";
    cin >> word;
    cin.ignore();
    if (word == "0")
    {
        cout << "Canceled searching.\n";
        return 0;
    }
    string lowerWord = toLowerCase(word);
    bool found = false;
    Customer::printTableHeader();
    for (Person *p : Person::obj)
    {
        Customer *cust = dynamic_cast<Customer *>(p);

        string lowerName = toLowerCase(p->getName());

        if (cust && lowerName.find(lowerWord) != std::string::npos)
        {
            cust->display();
            found = true;
        }

    }
    if (!found)
    {
        cout << "Not Found Customer name: " << word << endl;
        system("pause");
        return 0;
    }
    return 1;
}
int Customer::getQuantityCus(){
    int cnt = 0;
    for (Person *p : Person::obj)
    {
        if(p->getDelete())continue;
        Customer *cus = dynamic_cast<Customer *>(p);
        if (cus) cnt++;
    }
    return cnt;
}
cvector<string> Customer::getCart(){
    return this->idCart;
}
Customer* Customer::getMaxCus() {
    Customer *maxCustomer = nullptr;
    int maxCartSize = 0;

    for (Person *person : Person::obj) {
        if (person->getDelete()) continue;
        Customer *customer = dynamic_cast<Customer *>(person);
        if (customer) {
            if (customer->getQuantityCart() > maxCartSize) {
                maxCartSize =customer->getQuantityCart();
                maxCustomer = customer;
            }
        }
    }

    return maxCustomer;
}
int Customer::getQuantityCart(){
    return this->idCart.getSize();
}


