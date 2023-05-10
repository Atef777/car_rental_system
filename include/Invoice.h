// Invoice.h
#ifndef INVOICE_H
#define INVOICE_H

#include <string>
#include "Reservation.h"

class Invoice
{
public:
    Invoice();
    Invoice(Reservation reservation);

    double getTotal();

private:
    Reservation reservation;
};

#endif
