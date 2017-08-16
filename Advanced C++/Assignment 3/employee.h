#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {

 private:
    std::string firstName;
    std::string lastName;
    double monthlySalary;
  
 public:
  // Constructor
    Employee(std::string = "unknown" , std::string = "unknown" , double = 0.00 );
  
  // set Functions
    void setFirstName( std::string );
    void setLastName( std::string );
    void setMonthlySalary( double );
  
  // get Functions
    std::string getFirstName() const;
    std::string getLastName() const;
    double getMonthlySalary() const;
    void displayEmployee() const;
  
}; // End Employee class

#endif