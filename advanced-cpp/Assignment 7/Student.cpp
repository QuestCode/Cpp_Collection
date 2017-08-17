#include "Student.h"
#include <string>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//Default Constructor
Student::Student(){
    strcpy(firstName, "unknown");
    strcpy(lastName, "");
    studentNumber = 0000;
    GPA = 0.00;
}


//Overloaded Constuctor
Student::Student(int studNum,char *firstN,char *lastN,double GPA){    
    setFirstName(firstN);
    setLastName(lastN);
    setStudentNum(studNum);
    setGpa(GPA);
    
}// End constructor

/*----------SET_METHODS-----------*/

void Student::setFirstName(char *fn){
    strcpy(this->firstName,fn);
}// End setFirstName

void Student::setLastName(char *ln){
    strcpy(this->lastName,ln);
}// End setLastName

void Student::setStudentNum(int &num){
    this->studentNumber = num;
}// End setStudentNum

void Student::setGpa(double &gpa){
    this->GPA = gpa;
}// End setGPA


/*---------GET_METHODS-------------*/

char* Student::getFirstName() const{
    return firstName;
}// END getFirstName

char* Student::getLastName() const{
    return lastName;
}// END getLastName

int Student::getStudentNum() const{
    return studentNumber;
}// END getStudentNum

double Student::getGpa() const{
    return GPA;
}// END getGpa

string Student::getStudentRecord(){
    string fName;
    string lName;
    
    //Change the names to strings
    
    
    return "";
}// END getStudentRecord