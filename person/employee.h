#include "./movable.h";
#include "string.h";

class Employee: Movable{
    private:
    EPlaceType workspace;
    string[] jobs;

    public:
    Employee(EPlaceType workspace, string[] jobs);
    string[] queryJobs();
    virtual string getCurPosition() override;

}