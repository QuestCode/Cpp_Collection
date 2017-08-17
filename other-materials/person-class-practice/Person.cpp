// Person implementation class


#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(){
    this->setName("");
}

Person::Person(string name,int age){
    this->setName(name);
    this->setAge(age);
}

void Person::setName(string name){
    this->name = name;
}

string Person::getName(){
    return this->name;
}

void Person::setAge(int age){
    this->age = age;
}

int Person::getAge(){
    return this->age;
}

Person Person::createCopy(Person p){
    // Temp Person Object
    Person temp;
    
    temp.setName(p.getName());
    temp.setAge(p.getAge());
    
    return temp;
}

string Person::getInfo(){
    string info = "Hi my name is " + this->getName() + ". ";
    info += "I am " + to_string(this->getAge()) + " years old. \n";
    return info;
}