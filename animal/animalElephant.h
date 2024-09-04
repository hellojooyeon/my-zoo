#include "animal.h";
#include <iostream>;

using namespace std;
class AnimalElephant : public AAnimal {
public:
    AnimalElephant(
		string sound,
		int legNums);

	void move(string action) override;
	~AnimalElephant();
};