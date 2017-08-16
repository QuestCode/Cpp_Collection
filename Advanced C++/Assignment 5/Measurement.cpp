#include "Measurement.h"
using namespace std;

Measurement::Measurement() {
    setFeet(0);
    setInches(0);
}

Measurement::Measurement(int i) {
    setInches(i);
} // end constructor

Measurement::Measurement(int f,int i) {
    setFeet(f);
    setInches(i);
} // end constructor

void Measurement::setInches(int i) {
    inches = i;
    if (inches >= 12)
        calculateInches(inches);
} // end setInches

void Measurement::setFeet(int f) {
    feet = f;
} // end setFeet

int Measurement::getInches() const{
    return inches;
} // end getInches

int Measurement::getFeet() const{
    return feet;
} // end getFeet


// Overiding Operators
Measurement Measurement::operator+ (const Measurement m1) {
    // Temp Variables
    int m1TotalInches = (m1.getFeet()*12) + (m1.getInches());
    int m2TotalInches = (getFeet()*12) + (getInches());
    
    Measurement m;
    m.setInches(m1TotalInches + m2TotalInches);
    return m;
} // end addition override


Measurement Measurement::operator- (const Measurement m1) {
    // Temp Variables
    int m1TotalInches = (m1.getFeet()*12) + (m1.getInches());
    int m2TotalInches = (getFeet()*12) + (getInches());
    
    int diff = m1TotalInches - m2TotalInches;
    // Check to see if difference is negative
    if(diff < 0)
        diff *= -1;
    
    Measurement m;
    m.setInches(diff);
    return m;
} // end subtraction override

Measurement Measurement::operator* (int num) {
    
    int tempInches = (getFeet()*12 + getInches()) * num;
    
    Measurement m;
    m.setInches(tempInches);
    return m;
} // end addition override

bool Measurement::operator< (Measurement m1) {
    // Temp Variables
    int m1TotalInches = (m1.getFeet()*12) + (m1.getInches());
    int m2TotalInches = (getFeet()*12) + (getInches());
    
    return m1TotalInches < m2TotalInches;
    
}// end less than override

bool Measurement::operator<= (Measurement m1) {
    // Temp Variables
    int m1TotalInches = (m1.getFeet()*12) + (m1.getInches());
    int m2TotalInches = (getFeet()*12) + (getInches());
    
    return m1TotalInches <= m2TotalInches;
}//end less than or equal to override

bool Measurement::operator> (Measurement m1) {
    // Temp Variables
    int m1TotalInches = (m1.getFeet()*12) + (m1.getInches());
    int m2TotalInches = (getFeet()*12) + (getInches());
    
    return m1TotalInches > m2TotalInches;
}//end greater than override

bool Measurement::operator>= (Measurement m1) {
    // Temp Variables
    int m1TotalInches = (m1.getFeet()*12) + (m1.getInches());
    int m2TotalInches = (getFeet()*12) + (getInches());
    
    return m1TotalInches >= m2TotalInches;
}//end greater than or equal override

bool Measurement::operator== (Measurement m1) {
    // Temp Variables
    int m1TotalInches = (m1.getFeet()*12) + (m1.getInches());
    int m2TotalInches = (getFeet()*12) + (getInches());
    
    return m1TotalInches == m2TotalInches;
} //end equal to override

bool Measurement::operator!= (Measurement m1) {
    // Temp Variables
    int m1TotalInches = (m1.getFeet()*12) + (m1.getInches());
    int m2TotalInches = (getFeet()*12) + (getInches());
    
    return m1TotalInches != m2TotalInches;
}// end not equal to override


/*  
    This method is to covert total inches
    in the univeral measure of feet and inches
*/
// Calculate Inches Method
void Measurement::calculateInches(int i){
    if(i > 0)
    {
        setFeet(getFeet() + (i/12));
        setInches(i % 12);
    }
    else
    {
        setInches(0);
        setFeet(0);
    }
} // end convertToFeet