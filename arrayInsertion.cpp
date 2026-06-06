// LAB: Insert Values into an array
/*=====================================================================================
File descrition: This is a program that insert a value in a certain index by shifting 
                 the values from the last element in the array. 
=====================================================================================*/

#include <iostream>
using namespace std;

void insertItem(int list[], int& count, int val, int pos);

int main() {
	const int NUM_VALS = 10;
	int list[NUM_VALS] = { 7, 12, 34, 15, 9, 10, 3, 0, 0, 0};
	int i = 0, count = 7;
	cout << "List before inserts: " << endl;
	for (i = 0; i < count; i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;
	insertItem(list, count, 3, 1);
	insertItem(list, count, 4, 5);
	cout << "List after 2 inserts: " << endl;
	for (i = 0; i < count; i++)
	{
		cout << list[i] << " ";
	}
   
	return 0;
}

void insertItem(int list[], int& count, int val, int pos)
{
	for (int i=pos; i > pos; i--) {
	   list[i] = list[i+1];
	}
	list[pos] = val;
}
