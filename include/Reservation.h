#ifndef RESERVATION_H
#define RESERVATION_H

#include <string>
#include "Customer.h"
#include "Car.h"

class Reservation {
public:
    Reservation();
    Reservation(Customer customer, Car car, int rentalDays);

    Customer getCustomer();
    Car getCar();
    int getRentalDays();

private:
    Customer customer;
    Car car;
    int rentalDays;
};

#endif
