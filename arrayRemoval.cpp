// LAB: Remove Values from an array
/*=====================================================================================
File descrition: This is a program that remove a value in a certain index by shifting 
                 the values from the last element in the array.
=====================================================================================*/

#include <iostream>
using namespace std;

void delItem(int list[], int& count, int delIndex);

int main() {
	const int NUM_VALS = 10;
	int list[NUM_VALS] = { 7, 12, 34, 15, 9, 10, 3, 0, 0, 0};
	int i = 0, count = 7;
	cout << "List before remove: " << endl;
	for (i = 0; i < count; i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;
	delItem(list, count, 3);
	delItem(list, count, 5);
	cout << "List after 2 removes: " << endl;
	for (i = 0; i < count; i++)
	{
		cout << list[i] << " ";
	}

	return 0;
}

void delItem(int list[], int& count, int delIndex)
{
	for (int i=delIndex; i<count; i++) {
	   list[i] = list[i+1];
	   count--;
	}
}
