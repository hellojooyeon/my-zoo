#include "employeeInfo.h";

EmployeeInfo::EmployeeInfo(){
    this->curPosition = EPlaceType.INFORMATION_DESK;
    this->workspace = EPlaceType.INFORMATION_DESK;
    this->jobs = [
        "방문객에게 다양한 정보를 제공한다.",
    ];
}
