#include "cage.h";

Cage::Cage(AAnimal* animals): animals(animals) {};

void Cage::addAnimals(AAnimal* animals) {
	if (sizeof(this->animals) > 0) {
		delete[] this->animals;
	}
	const int nums = sizeof(animals);
	this->animals = new AAnimal[nums];
	for (int index = 0;index < nums;index++) {
		this->animals[index] = animals[index];
	}
}
bool Cage::isAnimalsIn() {
	return sizeof(animals) > 0;
}

int Cage::countAnimals() {
	return sizeof(animals);
}