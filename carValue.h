#ifndef CAR_VALUE_H_
#define CAR_VALUE_H_

struct Car{
	int modelYear;
	int purchasePrice;
	int currentValue;
};

Car InitCar();
Car SetModelYear(int userYear, Car car);
int GetModelYear(Car car);
Car SetPurchasePrice(int userPrice, Car car);
int GetPurchasePrice(Car car);
Car CalcCurrentValue(int currentYear, Car car);
void PrintInfo(Car car); 

#endif
