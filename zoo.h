#include <iostream>;
#include "person/employee.h";
#include "person/visitor.h";
#include "place/cage.h";
#include "animal/animalElephant.h";
#include "animal/animalShark.h";
#include <iostream>

using namespace std;

using namespace std;

class Zoo {
protected:
	Employee* employees;
	Visitor* visitors;
	Cage* cages;
public:
	Zoo();

	void printInfo();

	~Zoo();
};