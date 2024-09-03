#include "../place/place.h";
class Movable{
    public:
        EPlaceType curPosition;
        EPlaceType[] m_availabeVisitPlaces;
        Movable(EPlaceType[] availableVisitPlaces, EPlaceType curPosition);
        bool isMovable(EPlaceType dst);
        virtual void move(EPlaceType dst) override;

}