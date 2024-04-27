#include "Car.h"

Car::Car(string carID)
{
    this->carID_ = carID;
}

string Car::getCarId()
{
    return carID_;
}