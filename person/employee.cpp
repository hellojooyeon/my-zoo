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
	cout << "Employee " << name << " starts to work: "<< job << endl;
	isWorking = true;
}

void Employee::stopWork() {
	cout << "Worker " << name << " stops working" << endl;
	isWorking = false;
}

void Employee::move(string action) {
	cout << "Employee [" << name << "] move: " << action << endl;
}

Employee::~Employee() {
	cout << "~Employee "<<job<<" delete" << endl;
}
