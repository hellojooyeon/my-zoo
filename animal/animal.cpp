#include "animal.h";

AAnimal::AAnimal() : name("random animal name"), sound("default sound"), legNums(2) {};
AAnimal::AAnimal(
	string name,
	string sound,
	int legNums) :  name(name), sound(sound), legNums(legNums) {};


string AAnimal::getName() {
	return name;
};

string AAnimal::getSound() {
	return sound;
};

int AAnimal::getLegNums() {
	return legNums;
};
void AAnimal::doSound() {
	cout << name << "'s sound: " << sound << endl;
};

void AAnimal::move(string action) {
	cout << "Animal [" << name << "] move: " << action << endl;
};

AAnimal::~AAnimal() {
	cout << "AAnimal "<< name<<" deleted" << endl;
}