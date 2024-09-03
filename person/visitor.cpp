#include "visitor.h";

Visitor::Visitor() : APerson(), age(30), ticket(true) {};
Visitor::Visitor(string name, int sex, int age, bool hasTicket) : APerson(name, sex), age(age), ticket(hasTicket) {};

bool Visitor::hasTicket() {
	return ticket;
}

int Visitor::getAge() {
	return age;
}

void Visitor::move(string action) {
	cout << "Visitor [" << name << "] move: " << action << endl;
}
Visitor::~Visitor() {
	cout << "Visitor delete" << endl;
}