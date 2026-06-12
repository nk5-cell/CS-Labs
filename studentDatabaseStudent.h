// LAB: Student database
/*======================================================================================
File descrition:  This is a header file for student database structure. This header file 
                  defines a Student struct and declares functions for loading and 
                  printing student data.
======================================================================================*/

#ifndef STUDENT_DATABASE_STUDENT_H
#define STUDENT_DATABASE_STUDENT_H
#include <fstream>
#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct Student {
	char firstName[101];
	char lastName[101];
	double gpa;
};

// reads from file, populates the array, updates the number of students in the array
void loadValues(ifstream &inFile, Student studentList[], int &numStudents); 
// prints the contents of the array
void printValues(Student studentList[], int numStudents); 

#endif

