#ifndef ANIMA_H
#define ANIMA_H

#include <string>;
#include <iostream>;
#include<cstdlib>
#include "../interface/interfaceMove.h"

using namespace std;

class AAnimal : public IMove {
protected:
	string name;
	int sex;
	string sound;
	int legNums;
public:
	AAnimal();
	AAnimal(
		int sex,
		string name,
		string sound,
		int legNums
		);

	int getSex();
	string getName();
	string getSound();
	int getLegNums();
	void doSound();
	virtual void move(string action) override;
	~AAnimal();
};
#endif