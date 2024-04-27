#pragma once

#include<iostream>
#include <string>
using namespace std;

class Car
{
public:
    Car(string carID);
    ~Car() = default;

    string getCarId();

private:
    
    string carID_;// ³µÅÆºÅ
};