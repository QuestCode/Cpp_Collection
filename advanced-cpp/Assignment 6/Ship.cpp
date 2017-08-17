#include <iostream>
#include "Ship.h"
using namespace std;


// Ship class Constructor
Ship::Ship(string n,int y)
{
    setName(n);
    setYear(y);
}// end constructor

// setName
void Ship::setName(string n) { name = n; }// end setName

// getName
string Ship::getName()const { return name; }// end getName

// setYear
void Ship::setYear(int y) { yearBuilt = y; }// end setName

// getYear
int Ship::getYear()const { return yearBuilt; }// end getYear

// print
void Ship::print()
{
    cout << "Ship name  : " << getName() << endl;
    cout << "Year Built : " << getYear() << endl << endl;
}// end print