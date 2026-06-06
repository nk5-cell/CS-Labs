// LAB: Remove spaces
/*=====================================================================================
File descrition: This is a program that removes all spaces from the given input.
=====================================================================================*/

#include <iostream>
#include <cstring>
using namespace std;

const int MAX_CHARS = 101;

void RemoveSpaces(char userString[], char userStringNoSpaces[]);

int main() {

   char userString[MAX_CHARS]; 
   char userStringNoSpaces[MAX_CHARS];
   
   cin.getline(userString,MAX_CHARS);
   RemoveSpaces(userString, userStringNoSpaces);
   
   return 0;
}

void RemoveSpaces(char userString[], char userStringNoSpaces[]) {
   int index = 0;
   for(int i=0;i < strlen(userString);i++){
      if (!isspace(userString[i])) {
         userStringNoSpaces[index] = userString[i];
         cout << userStringNoSpaces[index];
         index++;
      }
   }
   cout << endl;
}
