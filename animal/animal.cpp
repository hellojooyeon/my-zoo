#include "animal.h";

AAnimal::AAnimal() :sex(rand() % 2), name("random animal name"), sound("default sound"), legNums(2) {};
AAnimal::AAnimal(
	int sex,
	string name,
	string sound,
	int legNums) : sex(sex), name(name), sound(sound), legNums(legNums) {};


int AAnimal::getSex() {
	return sex;
};

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
	cout << name << "의 울음소리: " << sound << endl;
};

void AAnimal::move(string action) {
	cout << "Animal [" << name << "] 움직임: " << action << endl;
};

AAnimal::~AAnimal() {
	cout << "AAnimal 삭제" << endl;
}