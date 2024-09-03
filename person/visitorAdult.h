#include "visitor.h";
#include "visitorKid.h";

class VisitorAdult{
    private:
    bool isGuardian;
    VisitorKid[] kids;
    public:
    VisitorAdult(int age, int cash, VisitorKid[] kids);
    bool isMovable();
    VisitorKid[] getKids();
    bool isGuardian();
    void buyTicket();