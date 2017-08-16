#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
    public:
    //Default Constuctor
    Student();
    
    //Overloaded Constructors
    Student(int studNum,char *firstN,char *lastN,double GPA);
    
    /*----Set_Methods----*/
    void setFirstName(char*);
    void setLastName(char*);
    void setStudentNum(int&);
    void setGpa(double&);
    
    
    /*----Get_Methods----*/
    char* getFirstName() const;
    char* getLastName() const;
    int getStudentNum() const;
    double getGpa() const;
    std::string getStudentRecord();
    
    private:
    //Data Members
    char* firstName;
    char* lastName;
    int studentNumber;
    double GPA;
};

#endif