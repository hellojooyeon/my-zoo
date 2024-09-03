#include "./zoo.h";
#include <iostream>

using namespace std;


Zoo::Zoo() {
	// init employees
	const int employeeNums = 3;
	employees = new Employee[employeeNums];

	// init visitors
	const int visitorNums = 10;	
	visitors = new Visitor[visitorNums];

	// init cage
}

void Zoo::printInfo() {
	// 현재 관람객 카운트
	int attended = 0;
	for (int index = 0;index < sizeof(visitors);index++) {
		if (visitors[index].hasTicket()) {
			attended += 1;
		}
	}
	cout << "현재 관람객 (명): " << attended << endl;

	//현재 근로중인 직원수 카운트
	int working = 0;
	for (int index = 0;index < sizeof(employees);index++) {
		if (employees[index].getIsWorking()) {
			working += 1;
		}
	}
	cout << "현재 근로중인 직원 (명): " << working << endl;


	// 동물 총 마리수 카운트

};

Zoo::~Zoo() {
	delete[] employees;
	delete[] visitors;
	delete[] cages;

	cout << "zoo 삭제" << endl;
}