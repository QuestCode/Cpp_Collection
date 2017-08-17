#include "employee.h"
using namespace std;


int main() {
	Employee e1("Larry","Hernedez",4000.00);
	e1.displayEmployee();
    
    e1.setMonthlySalary(-300.00);
    e1.displayEmployee();
    
    e1.setMonthlySalary(300.00);
    e1.displayEmployee();
    
    Employee e2("Larry","Hernedez");
    e2.displayEmployee();
    
    Employee e3("Larry");
    e3.displayEmployee();
    
    Employee e4;
    e4.displayEmployee();
} // End main