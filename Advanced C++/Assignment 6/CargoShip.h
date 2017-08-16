#ifndef CARGOSHIP_H
#define CARGOSHIP_H

#include "Ship.h"

class CargoShip: public Ship
{
    public:
        CargoShip(std::string,int,int);
        void setCargoCapacity(int);
        int getCargoCapacity()const;
        void print();
    private:
        int capacity;
};

#endif