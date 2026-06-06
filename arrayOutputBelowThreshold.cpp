// LAB: Output values below an amount
/*=====================================================================================
File descrition: This is a program that first gets a list of integers from input. The 
                 last value from the input indicates a threshold. Output all integers 
                 less than or equal to that last threshold value. 
=====================================================================================*/

#include <iostream>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 20;
   int userValues[NUM_ELEMENTS];    // Set of data specified by the user
   int count = 0;
   
   while (count < NUM_ELEMENTS && cin >> userValues[count]) {
      count++;
   }
   
   for (int i=0; i<count; i++) {
      if (userValues[i] < userValues[count-1]) {
         cout << userValues[i] << ",";
      }
   }

   return 0;
}
