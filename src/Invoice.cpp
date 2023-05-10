// Invoice.cpp
#include "Invoice.h"

Invoice::Invoice()
{
    this->reservation = Reservation();
}

Invoice::Invoice(Reservation reservation)
{
    this->reservation = reservation;
}

double Invoice::getTotal()
{
    double total = this->reservation.getRentalDays() * this->reservation.getCar().getPricePerDay();
    return total;
}

