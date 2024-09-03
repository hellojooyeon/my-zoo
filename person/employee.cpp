#include "./employee.h";

Employee::Employee(EPlaceType workspace, string[] jobs){
    this-> m_availabeVisitPlaces = [
        EPlaceType.CONVENIENCE,
    // EPlaceType.INSIDE_CAGE,
    // EPlaceType.OUTSIDE_CAGE,
    // EPlaceType.INFORMATION_DESK,
    // EPlaceType.TICKET_OFFICE,
    EPlaceType.ENTRANCE,
    EPlaceType.PARKING_LOT,
    EPlaceType.TOILET,

    workspace,
    ];
    this->jobs = jobs;
};

void Employee::queryJobs(){
    return this->jobs;
}
