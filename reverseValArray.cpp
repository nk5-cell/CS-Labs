// LAB: Output numbers in reverse
/*=====================================================================================
File descrition: This is a program that reads a list of integers, and outputs those 
                 integers in reverse. 
=====================================================================================*/

#include <iostream>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 20;         // Number of input integers
   int userVals[NUM_ELEMENTS];          // Array to hold the user's input integers
   int count = 0;
   
   while (count < NUM_ELEMENTS && cin >> userVals[count]) {
      count++;
   }
   
   for (int i=count-1; i>=0; i--) {
      cout << userVals[i] << " ";
   }
   
   cout << endl;

   return 0;
}
