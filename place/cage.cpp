#include "cage.h";

Cage::Cage(string _name, const AAnimal &animal, const int _nums, const string _movingAction) {
	nums = _nums;
	name = _name;
	movingAction=_movingAction;
	animals = new AAnimal[nums];
	for (int index = 0;index < nums;index++) {
		//animals[index] = animal;
		animals[index].name = animal.name;
		animals[index].sound = animal.sound;
		animals[index].legNums = animal.legNums;

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

void Cage::updateSound(int index, string newSound) {
	if (index >= nums) {
		return;
	}

	animals[index].sound = newSound;
	cout << "animal sound update" << endl;
}

Cage::~Cage() {
	delete[] animals;
	cout << "cage-"<<name<<" deleted" << endl;
}