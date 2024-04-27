#pragma once
#include <iostream>
#include <string>
#include "Car.h"
#include <vector>

using namespace std;

class CarPark
{
public:
	CarPark(int capacity);
	~CarPark();

	int getRemainParkingSpace();

	void carEntry(const Car& car);

	void carExiting(const Car& car);

private:
	int capacity_;

	std::vector<Car> insideCars_;
};

