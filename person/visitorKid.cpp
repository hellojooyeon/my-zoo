#include "visitorKid.h";
#include "iostream";

using namespace std;

VisitorKid::VisitorKid(visitorAdult guardian){
    this->guardian = guardian;
}

bool VisitorKid::isMovable(EPlaceType dst){
    if(this->guardian && this->guardian.isMovable(dst)){
        return true;
    }
    return false;
}

void VisitorKid::buyTicket(){
    cout<<"어린이는 티켓 구매 불가.";
}

void visitorKid::setTicket(bool hasTicket){
    this->hasTicket = hasTicket;
}