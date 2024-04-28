#include "CarPark.h"
#include <algorithm>

CarPark::CarPark(int capacity) : capacity_(capacity) {
    insideCars_.clear();
}
CarPark::~CarPark()
{
    insideCars_.clear();
}

int CarPark::getRemainParkingSpace(){
    return capacity_ - (int)insideCars_.size();
}

void CarPark::carEntry(const Car& car) {
    insideCars_.emplace_back(car);
}

void CarPark::carExiting(const Car& car) {

    auto it = std::find_if(insideCars_.begin(), insideCars_.end(), [&](const Car& carItem) {
        return car.getCarId() == carItem.getCarId();
        });

    if (it != insideCars_.end()) {
        insideCars_.erase(it);
    }
}

