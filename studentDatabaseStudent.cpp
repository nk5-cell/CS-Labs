// LAB: Student database
/*======================================================================================
File descrition: studentDatabaseStudent.cpp represent a classroom student struct, which 
                 has three data members: first name, last name, and GPA.
======================================================================================*/

#include "studentDatabaseStudent.h"
using namespace std;

void loadValues(ifstream &inFile, Student studentList[], int &numStudents) { 
	while (inFile) {
		inFile.getline(studentList[numStudents].firstName, 101, ';');
		inFile.getline(studentList[numStudents].lastName, 101, ';');
		inFile >> studentList[numStudents].gpa;
		inFile.ignore(100, ‘\n’);
		numStudents++;
	}
	inFile.close();
}

void printValues(Student studentList[], int numStudents) { 
   for (int i=0; i<numStudents-1; i++) {
		cout << setw(15) << left << studentList[i].firstName;
		cout << setw(15) << left << studentList[i].lastName;
		cout << setw(3) << left << fixed << setprecision(1) << studentList[i].gpa << endl;
	}
}
