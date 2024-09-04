#ifndef ANIMA_H
#define ANIMA_H

#include <string>;
#include <iostream>;
#include<cstdlib>
#include "../interface/interfaceMove.h"

using namespace std;

class AAnimal : public IMove {
public:
	string name;
	string sound;
	int legNums;
	AAnimal();
	AAnimal(
		string name,
		string sound,
		int legNums
		);
	string getName();
	int getLegNums();
	string getSound();
	void doSound();
	virtual void move(string action) override;
	~AAnimal();
};
#endif