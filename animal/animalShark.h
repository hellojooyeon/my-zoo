#include "animal.h";
#include <iostream>;

using namespace std;
class AnimalShark: public AAnimal {
public:
	AnimalShark(
		string sound,
		int legNums);

	void move(string action) override;
	~AnimalShark();
};