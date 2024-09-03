#include "visitorAdult.h";


VisitorAdult::VisitorAdult(
    int age,
    int cash,
    VisitorKid[] kids
){
    if(kids.length > 0){
        this->kids=kids;
    }
}

VisitorKid[] VisitorAdult::getKids(){
    return this->kids;
}

VisitorAdult::isGuardian(){
    return this->isGuardian;
}

VisitorAdult::buyTicket(){
    int kidsEntranceFee = this->kids.length * 1000;
    int adultEntranceFee = 2000;
    int totalEntranceFee = kidsEntranceFee + adultEntranceFee;
    if(this->cash < totalEntranceFee){
        return;
    }

    this->hasTicket = true;
    for(int index=0;index<this->kids.length;index++){
        this->kids.setTicket(true);
    }
}

VisitorAdult::isMovable(EPlaceType dst){
    if(dst == EPlaceType.INSIDE_CAGE){
        return false;
    }

    if(!hasTicket){
        return false;
    }

    return true;
}