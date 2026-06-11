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
