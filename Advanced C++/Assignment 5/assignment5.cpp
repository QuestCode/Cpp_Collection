#include "Measurement.h"
#include <fstream>
using namespace std;

// Output Overide
ostream &operator<<(ostream &output,Measurement &m1) {
    // Output
    output << "(" << m1.getFeet() << "'" << m1.getInches() << "\")" << endl;
    return output;
} //end output override

istream &operator>>(istream &input,Measurement &m1) {
    int inches;
    input >> inches;
    m1.setInches(inches);
    return input;
} // end input override

int main() {
    Measurement m1(30);
    cout << "Measurement 1 : " << m1;
    
    
    Measurement m2(5,7);
    cout << "Measurement 2 : " << m2;
    
    
    Measurement m3 = m1 + m1;
    cout << "Measurement 3 : " << m3;
    
    Measurement m4 = m1 * 3;
    cout << "Measurement 4 : " << m4;
    
    Measurement m5 = m4 - m2;
    cout << "Measurement 5 : " << m5;
    
    Measurement m6;
    cout << "\nEnter your height in inches: ";
    cin >> m6;
    cout << "Measurement 6 : " << m6 << endl;
    
    // Check if m2 < m1
    cout << "Measurement 2 <  Measurement 1 : ";
    if(m2 < m1)
        cout << "False\n";
    else
        cout << "True\n";
    
    // Check if m3 <= m4
    cout << "Measurement 3 <= Measurement 4 : ";
    if(m3 <= m4)
        cout << "False\n";
    else
        cout << "True\n";
    
    // Check if m6 > m1
    cout << "Measurement 6 >  Measurement 1 : ";
    if(m6 > m1)
        cout << "False\n";
    else
        cout << "True\n";
    
    // Check if m1 >= m2
    cout << "Measurement 1 >= Measurement 2 : ";
    if(m1 >= m2)
        cout << "False\n";
    else
        cout << "True\n";
    
    // Check if m1 == m3
    cout << "Measurement 1 == Measurement 3 : ";
    if(m1 == m3)
        cout << "True\n";
    else
        cout << "False\n";
    
    // Check if m6 != m4
    cout << "Measurement 6 != Measurement 4 : ";
    if(m6 != m4)
        cout << "True\n";
    else
        cout << "False\n";
    
} // end main