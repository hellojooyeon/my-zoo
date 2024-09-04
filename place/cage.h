#ifndef CAGE_H
#define CAGE_H

#include "../animal/animal.h";
#include <iostream>

using namespace std;


class Cage {
protected:
	int nums;
	string name;
	string movingAction;
	AAnimal* animals;
public:
	Cage(string name, const AAnimal &animal, const int nums, const string movingAction);

	int countAnimals();
	void soundAnimals();
	void moveAnimals();

	void updateSound(int index, string newSound);

	~Cage();
};
#endif