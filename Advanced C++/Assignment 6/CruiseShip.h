#ifndef CRUISESHIP_H
#define CRUISESHIP_H

#include "Ship.h"

class CruiseShip: public Ship
{
    public:
        CruiseShip(std::string,int,int);
        void setMaxNumOfPassengers(int);
        int getMaxNumOfPassengers()const;
        void print();
    private:
        int maximumPassengers;
};

#endif