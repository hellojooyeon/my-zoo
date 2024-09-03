#include "visitor.h";

Visitor::Visitor(int age, int cash){
    this->age = age;
    this->cash = case;

    this->curPosition = EPlaceType.ENTRANCE;
    
    this->m_availabeVisitPlaces = [
        EPlaceType.CONVENIENCE,
    EPlaceType.OUTSIDE_CAGE,
    EPlaceType.INFORMATION_DESK,
    EPlaceType.TICKET_OFFICE,
    EPlaceType.ENTRANCE,
    EPlaceType.PARKING_LOT,
    EPlaceType.TOILET,
    ];

};

bool Visitor::getHasTicket(){
    return this->hasTicket;
}

bool Visitor::enterZoo(){
    if(this->hasTicket){
        return true;
    }
}

void Visitor::exitFromZoo(){
    this->hasTicket = false;
}

EPlaceType Visitor::getCurPosition(){
    return this->curPosition;
}

void Visitor::move(EPlaceType dst){
    if(!this->hasTicket){
        cout<<"티켓이 없어 입장 불가"<<endl;
        return;
    }
    if(this->isMovable(dst)){
        cout << "이동합니다"<<endl;
        this->curPosition = dst;
        return;
    }
}