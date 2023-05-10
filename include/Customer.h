// Customer.h
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
public:
    Customer();
    Customer(std::string name, std::string address, std::string phoneNumber);

    std::string getName();
    std::string getAddress();
    std::string getPhoneNumber();

private:
    std::string name;
    std::string address;
    std::string phoneNumber;
};

#endif
