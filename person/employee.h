#include <iostream>;
#include <string>;
#include "person.h";

using namespace std;
class Employee : public APerson {
    
public:
    string job;
    bool isWorking;

    Employee();
    Employee(
        string name,
        int sex,
        string job,
        bool isWorking
    );

    string getJob();
    bool getIsWorking();

    void startWork();
    void stopWork();

    void move(string action) override;

    ~Employee();
};