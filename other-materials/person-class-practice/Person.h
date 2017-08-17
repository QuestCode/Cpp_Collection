// Person header file

#include <iostream>
using namespace std;

#ifndef PERSON_H_
#define PERSON_H_

class Person {

    private:
        string name;
        int age;

    public:
        Person();
        Person(string,int);
        void setName(string);
        string getName();
        void setAge(int);
        int getAge();
        string getInfo();
        Person createCopy(Person);

};
#endif /* */