#include "animalShark.h";

AnimalShark::AnimalShark(int sex, string name, string sound, int legNums) : AAnimal(sex, name, sound, legNums) {};

void AnimalShark::move(string action) {
	cout << "Shark[" << name << "] 움직임: " << action << endl;
};

AnimalShark::~AnimalShark() {
	cout << "AnimalShark 삭제" << endl;
}
