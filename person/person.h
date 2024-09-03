#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
#include<cstdlib>
#include "../interface/interfaceMove.h"

using namespace std;
class APerson: public IMove{
protected:
	string name;
	int sex;

public:
	APerson();
	APerson(string name, int sex);

	string getName();
	string getSex();
	virtual void move(string action) override;

	~APerson();
};

#endif