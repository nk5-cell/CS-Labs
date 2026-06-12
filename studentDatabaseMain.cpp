// LAB: Student database
/*======================================================================================
File descrition: This is a program that uses a struct named Student to store information 
                 about a Student. In main() (studentDatabaseMain.cpp), open the 
                 students.txt file and pass to the loadValues() function to read the 
                 student data into the array. Then call the printValues() function to 
                 print out the list of students.
======================================================================================*/

#include <iostream>
#include <cstring>
#include <fstream>

#include "studentDatabaseStudent.h"
using namespace std;

int main() {
 
   Student studentList[50];
   int numStudents = 0;
   ifstream inFile;
   
   inFile.open("studentDatabaseStudents.txt");

   if (inFile.fail()) {
      cout << "File failed to open!" << endl;
      return 1;
   }
   
   loadValues(inFile,studentList,numStudents);
   printValues(studentList, numStudents);
   
   return 0;
}
