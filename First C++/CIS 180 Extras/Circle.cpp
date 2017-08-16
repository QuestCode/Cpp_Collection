#include <iostream>
using namespace std;

class Circle
{
   double radius;
    double PI;
    
public:
    // Constructors
    Circle(double rad)
    {
        radius = rad;
        PI = 3.1416;
    }
    Circle()
    {
        radius = 0.0;
        PI = 3.1416;
    }
    
    void setRadius(double r)
    {
        radius = r;
    }
    
    void inputRadius()
    {
        cout << "Enter the radius: ";
        cin >> radius;
    }
    
    double getRadius()
    {
        return radius;
    }
    
    double getArea()
    {
        
        return PI * (radius * radius);
    }
    
    double getDiameter()
    {
        return radius * 2;
    }
    
    double getCircumference()
    {
        return 2 * PI * radius;
    }
    
    void displayCircle()
    {
        cout << "Radius: " << radius << ", Area: " << getArea() << endl;
    }
};
