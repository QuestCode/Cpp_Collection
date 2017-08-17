#include <iostream>
#include "Ship.h"
#include "CargoShip.h"
#include "CruiseShip.h"
using namespace std;

int main()
{
    
    Ship *ships[3] = {new CruiseShip("Carnival",2007,300),new CargoShip("Oil Rig",1967,1000),new Ship("Queen Mary",1945)};
    
    for (Ship *ship: ships)
    {
        ship->print();
    }
}// end main