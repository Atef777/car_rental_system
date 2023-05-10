// RentalAgreement.cpp
#include "RentalAgreement.h"

RentalAgreement::RentalAgreement()
{
    this->reservation = Reservation();
    this->invoice = Invoice(this->reservation);
}

RentalAgreement::RentalAgreement(Customer customer, Car car, int rentalDays)
{
    this->reservation = Reservation(customer, car, rentalDays);
    this->invoice = Invoice(this->reservation);
}

Reservation RentalAgreement::getReservation()
{
    return this->reservation;
}

Invoice RentalAgreement::getInvoice()
{
    return this->invoice;
}
