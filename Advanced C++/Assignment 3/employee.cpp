#include "employee.h"
#include <iostream>
#include <iomanip>
using namespace std;


Employee::Employee( string firstName , string lastName , double monthlySalary )
{
	setFirstName(firstName);
	setLastName(lastName);
	setMonthlySalary(monthlySalary);
} // End Constructor

// set Functions
void Employee::setFirstName( string name ){
	firstName = name;
} // End setFirstName

void Employee::setLastName( string name ){
	lastName = name;
} // End setLastName

void Employee::setMonthlySalary( double salary ){
	if(salary < 0.00) monthlySalary = 0.00;
	else monthlySalary = salary;
} // End setMonthlySalary

// get Functions
string Employee::getFirstName() const {
	return firstName;
} // End getFirstName

string Employee::getLastName() const{
	return lastName;
} // End getLastName

double Employee::getMonthlySalary() const{
	return monthlySalary;
} // End getMonthlySalary

void Employee::displayEmployee() const{
	cout << "First Name     : " << getFirstName() << endl;
	cout << "Last Name      : " << getLastName() << endl;
    cout << fixed;
	cout << "Monthly Salary : " << setprecision(2) << getMonthlySalary() << endl << endl;
} // End displayEmployee