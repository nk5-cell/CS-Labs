// LAB: Car Value
/*=====================================================================================
File descrition: This file implements the functions from carValue.h that has Car Struct
=====================================================================================*/

#include <iostream>
#include <iomanip>
#include <cmath>

#include "carValue.h"
using namespace std;


Car InitCar() {
	Car car;
	car.modelYear = 2020;
	car.purchasePrice = 0;
	return car;
}

Car SetModelYear(int userYear, Car car) {
	car.modelYear = userYear;
	return car;
}

int GetModelYear(Car car) {
	return car.modelYear;
}

Car SetPurchasePrice(int userPrice, Car car) {
   car.purchasePrice = userPrice;
   return car;
}

int GetPurchasePrice(Car car) {
   return car.purchasePrice;
}

Car CalcCurrentValue(int currentYear, Car car) {
    double depreciationRate = 0.15;
    int carAge = currentYear - car.modelYear;

    //Car deprecation formula
    car.currentValue = static_cast<int>(round(car.purchasePrice * pow((1 - depreciationRate), carAge)));
    return car;
}

void PrintInfo(Car car) {
   cout << "Car's information:" << endl;
   cout << setw(15) << "Model year: " << car.modelYear << endl;
   cout << setw(19) << "Purchase price: " << car.purchasePrice << endl;
   cout << setw(18) << "Current value: " << car.currentValue;
}
