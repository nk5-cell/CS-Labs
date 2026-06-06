// LAB: Adjust array
/*=====================================================================================
File descrition: This is a program that reads a list of integers, and outputs the 
                 modified list by subtracting the minimum value in an array from each 
                 value. 
=====================================================================================*/

#include <iostream>
using namespace std;

//contsant
const int NUM_ELM = 20;

//function prototype
int GetMinimumInt(int listInts[], int numVals);
void printInput(int listInts[], int numVals, const int minVal);

int main() {
   int input[NUM_ELM] = {0}; //array with the size of 20 elements
   int count = 0; //varaible for tracking the num of inputs
   int minVal = 0; //variable for minimum valaue in an array
   
   //input
   while (count < NUM_ELM && cin >> input[count]) {
      count++; //increment
   }
   
   //call functions
   minVal = GetMinimumInt(input, count);
   printInput(input, count, minVal);
  
   return 0;
}

//a function that finds the minimum value in an array
int GetMinimumInt(int listInts[], int numVals) {
   int minVal = listInts[0];
   
   for (int i = 0; i < numVals; i++) {
      if (listInts[i] <= minVal) {
         minVal = listInts[i];
      }
   }
   
   return minVal;
}

//a function that prints 
void printInput(int listInts[], int numVals, const int minVal) {
   for (int i = 0; i < numVals; ++i) {
      //subtract the mimimum value from the values in array
      listInts[i] -= minVal; 
      //prints the modified array values after calculation
      cout << listInts[i] << " ";
   }
}
