#include "cage.h";

Cage::Cage(string _name, AAnimal &animal, const int _nums, const string _movingAction) {
	nums = _nums;
	name = _name;
	movingAction=_movingAction;
	animals = new AAnimal[nums];
	for (int index = 0;index < nums;index++) {
		animals[index] = animal;
	}
}
int Cage::countAnimals() {
	return sizeof(animals);
}

void Cage::soundAnimals() {
	cout << name << " cage sound start"<<endl;
	for (int index = 0;index < nums;index++) {
		animals[index].doSound();
	}
	cout << name << " cage sound end"<<endl;
}

void Cage::moveAnimals() {
	cout << name << " cage move start" << endl;
	for (int index = 0;index < nums;index++) {
		animals[index].move(movingAction);
	}
	cout << name << " cage move end" << endl;
}