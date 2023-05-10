// Customer.cpp
#include "Customer.h"

Customer::Customer()
{
    this->name = "";
    this->address = "";
    this->phoneNumber = "";
}

Customer::Customer(std::string name, std::string address, std::string phoneNumber)
{
    this->name = name;
    this->address = address;
    this->phoneNumber = phoneNumber;
}

std::string Customer::getName()
{
    return this->name;
}

std::string Customer::getAddress()
{
    return this->address;
}

std::string Customer::getPhoneNumber()
{
    return this->phoneNumber;
}

