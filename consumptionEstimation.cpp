// LAB: All-consuming (File Input)
/*=====================================================================================
File descrition: This is a program that estimates your annual consumption of a 
                 commodity based on how much you consume a normal weekday and a 
                 normal weekend day.
=====================================================================================*/

#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   ifstream inFS;
   char itemName [101];
   int weekdayQty = 0;
   int weekendQty = 0;
   int totalNum =0;
   
   inFS.open("consuming.txt");
   
   if (inFS.fail()) {
      cout << "File failed to open!" << endl;
      return 1;
   }
   
   while (!inFS.eof()) {
      inFS >> itemName >> weekdayQty >> weekendQty;
      totalNum = (weekdayQty * 5 * 52) + (weekendQty * 2 *52);
      cout << itemName << " " << weekdayQty << " " << weekendQty << " " << totalNum << endl;
   }
   
   inFS.close();
      
   return 0;
}
