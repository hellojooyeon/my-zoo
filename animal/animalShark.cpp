#include "animalShark.h";

AnimalShark::AnimalShark(string sound, int legNums) : AAnimal("shark", sound, legNums) {};

void AnimalShark::move(string action) {
	cout << "Shark[" << name << "] move: " << action << endl;
};

AnimalShark::~AnimalShark() {
	cout << "AnimalShark deleted" << endl;
}
