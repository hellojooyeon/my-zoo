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
	// ���� ������ ī��Ʈ
	int attended = 0;
	for (int index = 0;index < sizeof(visitors);index++) {
		if (visitors[index].hasTicket()) {
			attended += 1;
		}
	}
	cout << "���� ������ (��): " << attended << endl;

	//���� �ٷ����� ������ ī��Ʈ
	int working = 0;
	for (int index = 0;index < sizeof(employees);index++) {
		if (employees[index].getIsWorking()) {
			working += 1;
		}
	}
	cout << "���� �ٷ����� ���� (��): " << working << endl;


	// ���� �� ������ ī��Ʈ

};

Zoo::~Zoo() {
	delete[] employees;
	delete[] visitors;
	delete[] cages;

	cout << "zoo ����" << endl;
}