#include "animalShark.h";

AnimalShark::AnimalShark(int sex, string name, string sound, int legNums) : AAnimal(sex, name, sound, legNums) {};

void AnimalShark::move(string action) {
	cout << "Shark[" << name << "] ������: " << action << endl;
};

AnimalShark::~AnimalShark() {
	cout << "AnimalShark ����" << endl;
}
