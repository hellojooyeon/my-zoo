#include "./employeeTicketOffice.h";

EmployeeTicketOffice::EmployeeTicketOffice(){
    this->curPosition = EPlaceType.TICKET_OFFICE;
    this->workspace = EPlaceType.TICKET_OFFICE;
    this->jobs = [
        "티켓을 판매한다",
    ];
}