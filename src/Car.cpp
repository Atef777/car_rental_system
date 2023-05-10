// Car.cpp
#include "Car.h"

Car::Car()
{
    this->model = "";
    this->make = "";
    this->color = "";
    this->year = 0;
    this->pricePerDay = 0.0;
    this->availability = true;
}

Car::Car(std::string model, std::string make, std::string color, int year, double pricePerDay)
{
    this->model = model;
    this->make = make;
    this->color = color;
    this->year = year;
    this->pricePerDay = pricePerDay;
    this->availability = true;
}

std::string Car::getModel()
{
    return this->model;
}

std::string Car::getMake()
{
    return this->make;
}

std::string Car::getColor()
{
    return this->color;
}

int Car::getYear()
{
    return this->year;
}

double Car::getPricePerDay()
{
    return this->pricePerDay;
}

bool Car::getAvailability()
{
    return this->availability;
}

void Car::setAvailability(bool availability)
{
    this->availability = availability;
}

