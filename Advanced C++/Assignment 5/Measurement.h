#ifndef MEASUREMENT_H
#define MEASUREMENT_H

#include <iostream>
#include <iomanip>

class Measurement {

public:
    Measurement();
    explicit Measurement(int);
    Measurement(int,int);
    void setInches(int);
    void setFeet(int);
    int getInches()const;
    int getFeet()const;
    
    // Overiding Operator
    Measurement operator+ (const Measurement);
    Measurement operator- (const Measurement);
    Measurement operator* (int);
    bool operator< (Measurement);
    bool operator<= (Measurement);
    bool operator> (Measurement);
    bool operator>= (Measurement);
    bool operator== (Measurement);
    bool operator!= (Measurement);
    
private:
    int feet;
    int inches;
    
    // Calculate Function
    void calculateInches(int) ;
}; // end class

#endif