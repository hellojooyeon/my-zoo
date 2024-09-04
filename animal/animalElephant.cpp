#include "animalElephant.h";

AnimalElephant::AnimalElephant(string sound, int legNums) : AAnimal("elephant", sound, legNums) {};

void AnimalElephant::move(string action) {
	cout << "Elephant[" << name << "] move: " << action << endl;
};

AnimalElephant::~AnimalElephant() {
	cout << "AnimalElephant deleted" << endl;
}
