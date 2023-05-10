// Reservation.cpp
#include "Reservation.h"

Reservation::Reservation()
{
    this->customer = Customer();
    this->car = Car();
    this->rentalDays = 0;
}

Reservation::Reservation(Customer customer, Car car, int rentalDays)
{
    this->customer = customer;
    this->car = car;
    this->rentalDays = rentalDays;
}

Customer Reservation::getCustomer()
{
    return this->customer;
}

Car Reservation::getCar()
{
    return this->car;
}

int Reservation::getRentalDays()
{
    return this->rentalDays;
}

