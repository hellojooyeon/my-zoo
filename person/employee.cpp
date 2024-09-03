#include "employee.h";

Employee::Employee() :APerson(), job("random job"), isWorking(false) {};
Employee::Employee(string name, int sex, string job, bool isWorking) :APerson(name, sex), job(job), isWorking(isWorking) {};

string Employee::getJob() {
	return job;
}

bool Employee::getIsWorking() {
	return isWorking;
}

void Employee::startWork() {
	cout << "Worker " << name << " 이(가) "<< job<<" 을(를) 시작합니다." << endl;
	isWorking = true;
}

void Employee::stopWork() {
	cout << "Worker " << name << " 이(가) 업무를 중지합니다." << endl;
	isWorking = false;
}

void Employee::move(string action) {
	cout << "Employee [" << name << "] 움직임: " << action << endl;
}

Employee::~Employee() {
	cout << "Employee "<<job<<" 삭제" << endl;
}
