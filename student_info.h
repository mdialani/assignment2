#pragma once
// https://en.cppreference.com/w/cpp/container/unordered_map
#include <unordered_map>

#include "student.h"

#include <unordered_map>

class StudentInfo {
private:
	// ref: 
	unordered_map<int, Students> data;
public:

	void updateInfo(int student_id, Students new_data);


	Students getStudentInfo(int student_id);

	void printStudent(int student_id) {
		if (data.find(student_id) != data.end()) {
			data[student_id].print();
		}
	}
};