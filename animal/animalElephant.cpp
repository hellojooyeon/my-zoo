#include "animalElephant.h";

AnimalElephant::AnimalElephant(int sex, string name, string sound, int legNums) : AAnimal(sex, name, sound, legNums) {};

void AnimalElephant::move(string action) {
	cout << "Elephant[" << name << "] 움직임: " << action << endl;
};

AnimalElephant::~AnimalElephant() {
	cout << "AnimalElephant 삭제" << endl;
}
