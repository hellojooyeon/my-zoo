#include "./movable.h";
#include "string.h";
#include "../place/place.h";

class Visitor{
    private:
    int age;
    bool hasTicket;
    EPlaceType curPosition;
    int cash;
    public:
    Visitor(int age, int cash);

    virtual void buyTicket() override;
    bool getHasTicket();
    void enterToZoo();
    void exitFromZoo();
    EPlaceType getCurPosition();
    virtual bool isMovable();
    void move(EPlaceType dst);
}