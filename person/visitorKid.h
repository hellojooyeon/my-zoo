#include "visitor.h";
#include "visitorAdult.h";

class VisitorKid{
    private:
    VisitorAdult guardian;
    public:
    VisitorKid(VisitorAdult guardian);
    bool isMovable(EPlaceType dst);
    void setTicket(bool hasTicket);
}