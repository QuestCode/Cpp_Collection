#include <iostream>
#include "CruiseShip.h"
using namespace std;

// CruiseShip Constructor
CruiseShip::CruiseShip(string n,int y,int maxPassengers)
:Ship(n,y)
{
    setMaxNumOfPassengers(maxPassengers);
}

// setMaxNumOfPassengers Function
void CruiseShip::setMaxNumOfPassengers(int max)
{
    maximumPassengers = max;
}

//  getMaxNumOfPassengers Function
int CruiseShip::getMaxNumOfPassengers() const
{
    return maximumPassengers;
}

// Print Function
void CruiseShip::print()
{
    cout << "Ship name  : " << getName() << endl;
    cout << "Year Built : " << getYear() << endl;
    cout << "Maximum Passengers : " << getMaxNumOfPassengers() << endl << endl;
}