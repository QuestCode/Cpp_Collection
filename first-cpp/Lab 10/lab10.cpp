/*
 Devontae Reid
 Lab 10
 */

#include <iostream>
#include "Circle.cpp"
using namespace std;
    

int main()
{
    Circle C1;
    Circle C2(5.0);
    
    C1.inputRadius();
    
    cout << "The area of C2 is " << C2.getArea() << endl;
    cout << "The diameter of C2 is " << C2.getDiameter() << endl;
    C1.displayCircle();
    C1.setRadius(10.0);
    cout << "The circumference of C1 is " << C1.getCircumference() << endl;
    
}