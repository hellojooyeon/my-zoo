#ifndef VISITOR_H
#define VISITOR_H

#include <string>;
#include "person.h";

class Visitor: public APerson {
protected:
	int age;
	bool ticket;
public:
	Visitor();
	Visitor(string name, int sex, int age, bool ticket);

	bool hasTicket();
	int getAge();
	void move(string action) override;
	~Visitor();
};

#endif