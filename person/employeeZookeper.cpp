#include "employeeZookeper.h";

EmployeeZooKeeper::EmployeeZooKeeper(EAnimal animal){
    this->animal = animal;
    this->curPosition = EPlaceType.CAGE_INSIDE;
    this->workspace = EPlaceType.CAGE_INSIDE;
    this->jobs = [
        this->animal + "을(를) 사육한다.",
        "우리를 청소한다."
    ];
}

EmployeeZooKeeper::getAnimal(){
    return this->animal;
}