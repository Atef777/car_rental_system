// Car.h
#ifndef CAR_H
#define CAR_H

#include <string>

class Car
{
public:
    Car();
    Car(std::string model, std::string make, std::string color, int year, double pricePerDay);

    std::string getModel();
    std::string getMake();
    std::string getColor();
    int getYear();
    double getPricePerDay();
    bool getAvailability();

    void setAvailability(bool availability);

private:
    std::string model;
    std::string make;
    std::string color;
    int year;
    double pricePerDay;
    bool availability;
};

#endif
