#ifndef CAGE_H
#define CAGE_H

#include "../animal/animal.h";

class Cage {
protected:
	AAnimal* animals;
public:
	Cage();
	Cage(AAnimal* animals);

	void addAnimals(AAnimal* animals);
	bool isAnimalsIn();
	int countAnimals();
};
#endif