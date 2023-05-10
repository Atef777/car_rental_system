// main.cpp
#include <iostream>
#include <vector>
#include "Customer.h"
#include "Car.h"
#include "Reservation.h"
#include "Invoice.h"
#include "RentalAgreement.h"

using namespace std;

vector<Car> cars;
vector<RentalAgreement> rentalAgreements;

void rentCar()
{
    string name, address, phoneNumber, model, make, color;
    int year, rentalDays;
    double pricePerDay;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your address: ";
    getline(cin, address);

    cout << "Enter your phone number: ";
    getline(cin, phoneNumber);

    cout << "Enter the car model: ";
    getline(cin, model);

    cout << "Enter the car make: ";
    getline(cin, make);

    cout << "Enter the car color: ";
    getline(cin, color);

    cout << "Enter the car year: ";
    cin >> year;

    cout << "Enter the car price per day: ";
    cin >> pricePerDay;

    cout << "Enter the number of rental days: ";
    cin >> rentalDays;

    Customer customer(name, address, phoneNumber);
    Car car(model, make, color, year, pricePerDay);
    RentalAgreement rentalAgreement(customer, car, rentalDays);
    rentalAgreements.push_back(rentalAgreement);
    cars.push_back(car);

    cout << "Car rented successfully!" << endl;
}

void returnCar()
{
    string model;

    cout << "Enter the car model: ";
    cin>> model;


    for (unsigned int i = 0; i < rentalAgreements.size(); i++)
    {
        if (rentalAgreements[i].getReservation().getCar().getModel() == model)
        {
            rentalAgreements[i].getReservation().getCar().setAvailability(true);
            rentalAgreements.erase(rentalAgreements.begin() + i);
            cout << "Car returned successfully!" << endl;
            return;
        }
    }

    cout << "No rental agreement found for that car!" << endl;
}

void viewAvailableCars()
{
    cout << "Available cars: " << endl;

    for (unsigned int i = 0; i < cars.size(); i++)
    {
        if (cars[i].getAvailability())
        {
            cout << "Model: " << cars[i].getModel() << ", Make: " << cars[i].getMake() << ", Color: " << cars[i].getColor() << ", Year: " << cars[i].getYear() << ", Price per day: " << cars[i].getPricePerDay() << endl;
        }
    }
}

void viewRentalHistory()
{
    cout << "Rental history: " << endl;

    for (unsigned int i = 0; i < rentalAgreements.size(); i++)
    {
        cout << "Customer: " << rentalAgreements[i].getReservation().getCustomer().getName() << ", Car model: " << rentalAgreements[i].getReservation().getCar().getModel() << ", Rental days: " << rentalAgreements[i].getReservation().getRentalDays() << ", Total: " << rentalAgreements[i].getInvoice().getTotal() << endl;
    }
}

void generateReports()
{
    double totalRevenue = 0.0;

    for (unsigned int i = 0; i < rentalAgreements.size(); i++)
    {
        totalRevenue += rentalAgreements[i].getInvoice().getTotal();
    }

    cout << "Total revenue: " << totalRevenue << endl;
}

int main()
{
    int choice = 0;

    do
    {
        cout << "Choose an option: " << endl;
        cout << "1. Rent a car" << endl;
        cout << "2. Return a car" << endl;
        cout << "3. View available cars" << endl;
        cout << "4. View rental history" << endl;
        cout << "5. Generate reports" << endl;
        cout << "6. Quit" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            rentCar();
            break;

        case 2:
            returnCar();
            break;

        case 3:
            viewAvailableCars();
            break;

        case 4:
            viewRentalHistory();
            break;

        case 5:
            generateReports();
            break;

        case 6:
            break;

        default:
            cout << "Invalid choice!" << endl;
            break;
        }

        cout << endl;
    }
    while (choice != 6);

    return 0;
}
