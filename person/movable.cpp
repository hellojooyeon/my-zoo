#include "movable.h"

Movable::Movable(EPlaceType[] availableVisitPlaces, EPlaceType curPosition): this->m_availabeVisitPlaces(availableVisitPlaces), this->curPosition(curPosition){};

bool Movable::isMovable(EPlaceType dst){
    for(int index=0;index<this->m_availabeVisitPlaces.length;index++){
        if(this->m_availabeVisitPlaces[index] == dst){
            return true;
        }
    }
    return false;
}

void Movable::move(EPlaceType dst){
    if(dst == this->curPosition){
        cout<<"출발지와 도착지가 동일합니다."<<endl;
        return;
    }
    if(this.isMovable(dst)){
        cout<<this->curPosition<< "에서 "<<dst<<" 로 이동합니다.";
    }
    
    if(this.isMovable(dst)){
        cout<<this->curPosition<< "에서 "<<dst<<" 로 이동이 불가합니다.";
    }
}