#include "deansoffice.h"
#include "student.h"
using namespace std;

void DeansOffice::admitStudent(int student_id, string program) {

	Students new_program;
	new_program.program = program;
	new_program.fees = 100;
	student_inf->updateInfo(student_id, new_program);
}

void DeansOffice::submitStanding(int student_id, int year) {

	Students new_standing;
	new_standing.year = year;
	student_inf->updateInfo(student_id, new_standing);
}

void DeansOffice::suspendStudent(int student_id, bool suspension) {

	Students new_suspension;
	for (int i = 0; i < NUM_COURSES; i++) {
		new_suspension.grades[i] = 0;
	}
	student_inf->updateInfo(student_id, new_suspension);
}

void DeansOffice::payFees(int student_id, int amount) {
	Students pay_fees;
	int fees = student_inf->getStudentInfo(student_id).fees;
	pay_fees.fees = fees - amount;
	student_inf->updateInfo(student_id, pay_fees);
}

void DeansOffice::registerSTT(int student_id, int STT) {

	Students choose_courses;

	choose_courses.STT = STT;

	student_inf->updateInfo(student_id, choose_courses);
}



