#include "employeeEntrance.h";

EmployeeEntrance::EmployeeEntrance(){
    this->curPosition = EPlaceType.ENTRANCE;
    this->workspace = EPlaceType.ENTRANCE;
    this->jobs = [
        "방문객의 티켓 소유 여부에 따라 동물원 입장을 허가한다.",
    ];
}