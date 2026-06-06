// LAB: Even/odd values in an array
/*=====================================================================================
File descrition: This is a program that reads a list of integers, and outputs whether 
                 the list contains all even numbers, odd numbers, or both even and odd.
=====================================================================================*/

#include <iostream>
using namespace std;

//contants 
const int NUM_ELM = 20;

//function prototypes
bool IsArrayEven(int inputVals[], int numVals);
bool IsArrayOdd(int inputVals[], int numVals);

//main
int main() {
   int nums[NUM_ELM] = {0};
   int count = 0;
   
   //input int
   for (int i = 0; i < NUM_ELM; i++) {
      cin >> nums[i];
      //counts the number of inputs user enters 
      if (nums[i] != 0) {
         count ++;
      }
   }
   
   bool even = IsArrayEven(nums, count);
   bool odd = IsArrayOdd(nums, count);
   
   //display both even and odd when an array has both even and odd nums
   if (even == true && odd == true) {
      cout << "both even and odd" << endl;
   }

   return 0;
}

//function that checks if there are even numbers in an array
bool IsArrayEven(int inputVals[], int numVals) {
   bool isEven = false;
   int numOfEvens = 0;
   
   for (int i = 0; i < numVals; i++) {
      if (inputVals[i] % 2 == 0) {
         isEven = true;
         numOfEvens++;
      }
   }
   
   if (numOfEvens == numVals) {
      cout << "all even" << endl;
   }
   
   return isEven;
}

//function that checks if there are odd numbers in an array
bool IsArrayOdd(int inputVals[], int numVals) {
   bool isOdd = false;
   int numOfOdd = 0;
   
   for (int i = 0; i < numVals; i++) {
      if (inputVals[i] % 2 == 1) {
         isOdd = true;
         numOfOdd++;
      }
   }
   
   if (numOfOdd == numVals) {
      cout << "all odd" << endl;
   }
   
   return isOdd;
}
