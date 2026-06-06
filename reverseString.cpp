// LAB: Print string in reverse
/*=====================================================================================
File descrition:  This is a program that takes in a line of text as input, and outputs 
                  that line of text in reverse. The program repeats, ending when the 
                  user enters "Quit", "quit", or "q" for the line of text.
=====================================================================================*/

#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char userString[], char reverseString[]);

int main() {
   char userString[101];
   char reverseStrings[101];
   
   while (strcmp(userString, "Quit") != 0 && strcmp(userString, "quit") != 0 && strcmp(userString, "q") != 0) {
      cin.getline(userString, 101);
      reverseString(userString, reverseStrings);
   }
 
   return 0;
}

void reverseString(char userString[], char reverseString[]) {
   int len = strlen(userString);
   if (strcmp(userString, "Quit") != 0 && strcmp(userString, "quit") != 0 && strcmp(userString, "q") != 0) {
      for (int i = 0, j = len - 1; i < len; i++, j--) {
         reverseString[j] = userString[i];
      }

      for (int i=0; i<strlen(userString); i++) {
         cout << reverseString[i];
      }
   
      cout << endl;
   }
}
