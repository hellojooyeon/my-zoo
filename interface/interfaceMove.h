#ifndef IMOVE_H
#define IMOVE_H
#include <iostream>

using namespace std;

class IMove {
public:
	virtual void move(string action)=0;
	virtual ~IMove() = default;
};

#endif