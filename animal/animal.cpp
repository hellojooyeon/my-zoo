#include "animal.h";
#include "iostream";

using namespace std;

Animal::Animal(
    int age,
        EAnimalSex sex,
        EAnimal type,
        string prey
): age(age), sex(sex), type(type), prey(prey){};

Animal::eat(){
    cout<<this->type <<" 은(는) "<<this->prey <<"을(를) 먹습니다"<<endl;
}