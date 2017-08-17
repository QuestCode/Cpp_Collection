#include <iostream>
#include "CargoShip.h"
using namespace std;

// CargoShip Constructor
CargoShip::CargoShip(string n,int y,int c)
:Ship(n,y)
{
    setCargoCapacity(c);
}
// setCargoCapacity Function
void CargoShip::setCargoCapacity(int c)
{
    capacity = c;
}

// getCargoCapacity Function
int CargoShip::getCargoCapacity()const
{
    return capacity;
}

// Print Function
void CargoShip::print()
{
    cout << "Ship Name  : " << getName() << endl;
    cout << "Year Built : " << getYear() << endl;
    cout << "Cargo Capacity : " << getCargoCapacity() << endl << endl;
}
