#pragma once	
#include <iostream>
#include <string>
using namespace std;
#define NUM_COURSES 4
struct Students {
	string name = "";
	int id = -1;
	int year = -1;
	int fees = -1;
	bool suspension = 0;
	int update_flag = -1;
	string courses[NUM_COURSES] = {};
	int grades[NUM_COURSES] = {};
	string program = "";
	int STT = -1;

	void amend_data(Students new_data) {
		if (new_data.name != "") {
			name = new_data.name;
		}
		if (new_data.id != -1) {
			id = new_data.id;
		}
		if (new_data.suspension) {
			suspension = new_data.suspension;
		}
		if (new_data.year != -1) {
			year = new_data.year;
		}
		if (new_data.fees != -1) {
			fees = new_data.fees;
		}
		if (new_data.program != "") {
			program = new_data.program;
		}
		if (new_data.update_flag != -1) {
			grades[0] = new_data.grades[0];
			grades[1] = new_data.grades[1];
			grades[2] = new_data.grades[2];
			grades[3] = new_data.grades[3];
			courses[0] = new_data.courses[0];
			courses[1] = new_data.courses[1];
			courses[2] = new_data.courses[2];
			courses[3] = new_data.courses[3];
		}
		if (new_data.STT != -1) {
			STT = new_data.STT;
		}
	}

	




	void print() {
		{
			cout << "Name: " << name << endl;
			cout << "ID: " << id << endl;
			cout << "Program: " << program << endl;
			cout << "Fees? " << fees << endl;
			cout << "Suspended? " << suspension << endl;
			for (int i = 0; i < NUM_COURSES; i++) {
				cout << courses[i] <<": " << grades[i] << endl;
			}
			cout << "STT? " << STT << endl;
		}
	}

};

