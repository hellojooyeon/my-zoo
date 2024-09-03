enum EAnimal{
    ELEPHANT,
    TIGER,
    BEAR,
    GIRAFFE,
}

enum EAnimalSex{
    MALE,
    FEMALE
}
class Animal{
private:
int age;
EAnimalSex sex;
EAnimal type;
string prey;

    public:
    Animal(
        int age,
        EAnimalSex sex,
        EAnimal type,
        string prey
    );
    void eat();
}