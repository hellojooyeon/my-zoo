#include "employee.h";
#include "../animal.h";

class EmployeeZooKeeper{
    private:
    EAnimal animal;
    public:
    EmployeeZooKeeper(EAnimal animal);
    EAnimal getAnimal();
}