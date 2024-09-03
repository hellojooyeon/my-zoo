#include "person.h";


APerson::APerson() : name("random person name"), sex(rand()%2) {};
APerson::APerson(string name, int sex) : name(name), sex(sex) {};

string APerson::getName() {
	return name;
}

string APerson::getSex() {
	if (sex == 0) {
		return "male";
	}
	if (sex == 1) {
		return "female";
	}
	return "";
}

void APerson::move(string action) {
	cout << "Person [" << name << "] move: " << action << endl;
}

APerson::~APerson() {
	cout << "APerson " << name << " delete" << endl;
}