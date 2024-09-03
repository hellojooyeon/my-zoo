#include <iostream>
#include <string>
using namespace std;
namespace MyZooNamespace
{
    enum EAnimal
    {
        ELEPHANT,
        TIGER,
        BEAR,
        GIRAFFE,
    };
    class Animal
    {
    private:
        EAnimal type;
        int feedTime;

    public:
        Animal(EAnimal type, int feedTime);
        EAnimal getAnimalType();
    };
    class Visitor
    {
    private:
        int age;
        bool attended;

    public:
        Visitor(int age);
        int getAge();
        bool isAttended();
    };
    class Employee
    {
    private:
        char *workspace;

    public:
        Employee(char *workspace);
        char *getWorkspace();
    };
    class ZooKeeper
    {
    private:
        EAnimal animal;

    public:
        ZooKeeper(EAnimal animal);
    };
    class MyZoo
    {
    private:
        int *customers;

    public:
        MyZoo();
        MyZoo(int customerNums);
        // todo: delete!
        void print();
    };
}