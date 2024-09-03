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
	cout << "Worker " << name << " ��(��) "<< job<<" ��(��) �����մϴ�." << endl;
	isWorking = true;
}

void Employee::stopWork() {
	cout << "Worker " << name << " ��(��) ������ �����մϴ�." << endl;
	isWorking = false;
}

void Employee::move(string action) {
	cout << "Employee [" << name << "] ������: " << action << endl;
}

Employee::~Employee() {
	cout << "Employee "<<job<<" ����" << endl;
}
