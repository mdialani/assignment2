#include <iostream>
#include <stdio.h>
#define NUM_COURSES 4

#include "student_info.h"
#include "student.h"
#include "deansoffice.h"

using namespace std;

StudentInfo student_info;

int main() {

	Students test1 = {
	"Example Student",
	80966047, //ID
	3, // year
	0, //fees
	false, //suspended
	0,
	{"Cpen333", "Elec301", "Elec315", "Elec342" },
	{100, 100, 100, 100},
	"Elec",
	0
	};

	// first student entry test
	cout << "First Student: " << endl;

	student_info.updateInfo(test1.id, test1);
	student_info.printStudent(test1.id);

	// implement selection
	DeansOffice deans_office(&student_info);



	
	cout << "testing admittance student into program " << endl;
	deans_office.admitStudent(80966047, "Science");
	student_info.printStudent(test1.id);

	
	// fees goes from 100 to 50
	cout << endl << " fee payment " << endl;
	deans_office.payFees(80966047, 50);
	student_info.printStudent(test1.id);

	
	//can select between STT 1 2 and 3
	std::cout << std::endl << " register courses " << endl;
	deans_office.registerSTT(80966047, 2);
	student_info.printStudent(test1.id);


	//suspension of student terminates access to courses and grades indefinitely
	cout << std::endl << "testing suspension of student " << endl;
	deans_office.suspendStudent(80966047, 1);
	student_info.printStudent(test1.id);
	
	return 0;
	
}
















/*
IDEAS

want this to be interactive?
Selection and admittance into a year 2 program
View and register for courses in T1 or T2 (or summer) and pay tuition fees
Submit a course grade and standing for each registered student
President suspends student for 1 or 2 terms (or indefinitely) based on
number of incidences of cheating in a course while at UBC.
This requires that students be banned from registering during suspension,
a zero is entered in the course and a record of the incident is entered on
their transcript and recorded in Deans office

gui:
ID #:
in the case of student:

*/