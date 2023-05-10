// RentalAgreement.h
#ifndef RENTALAGREEMENT_H
#define RENTALAGREEMENT_H

#include <string>
#include "Customer.h"
#include "Car.h"
#include "Reservation.h"
#include "Invoice.h"

class RentalAgreement
{
public:
    RentalAgreement();
    RentalAgreement(Customer customer, Car car, int rentalDays);

    Reservation getReservation();
    Invoice getInvoice();

private:
    Reservation reservation;
    Invoice invoice;
};

#endif
