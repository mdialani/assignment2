	#include "student_info.h"

void StudentInfo::updateInfo(int student_id, Students new_data) {
	// checking for student
	if (data.find(student_id) == data.end()) {
		data[student_id] = new_data;
	}
	data[student_id].amend_data(new_data);
}


Students StudentInfo::getStudentInfo(int student_id) {
	// checking for student
	if (data.find(student_id) == data.end()) {
		Students empty;
		return empty;
	}
	return data[student_id];
}