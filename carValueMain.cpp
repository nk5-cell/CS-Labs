// LAB: Car Value
/*=====================================================================================
File descrition: This is a program that displays the car's information after user 
				 inputs of model year, purchase price, and current value. This program 
				 uses car struct and functions declaration from carValue.h file, where 
				 carValue.cpp file implement those function definitions from carValue.h 
=====================================================================================*/

#include <iostream>

#include "carValue.h"
using namespace std;

int main() {
	Car myCar = InitCar();

	int userYear;
	int userPrice;
	int userCurrentYear;

	cin >> userYear;
	cin >> userPrice;
	cin >> userCurrentYear;

	myCar = SetModelYear(userYear, myCar);
	myCar = SetPurchasePrice(userPrice, myCar);
	myCar = CalcCurrentValue(userCurrentYear, myCar);

	PrintInfo(myCar);

	return 0;
}
