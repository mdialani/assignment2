#pragma once

#include <string>
#include "student_info.h"

class DeansOffice {

private:
	StudentInfo* student_inf;

public:
	DeansOffice(StudentInfo* student_inf_) : student_inf(student_inf_) {} // empty function to disable call

	void admitStudent(int student_id, string program);

	void suspendStudent(int student_id, bool suspension);

	void submitStanding(int student_id, int year);

	void payFees(int student_id, int fees);

	void registerSTT(int student_id, int STT);

};
