#include "Team.h"
#include <iostream>
#include <string>
using namespace std;

Team::Team() {
    this->name = "";
    this->location = "";
}

Team::Team(string location,string name){
    this->location = location;
    this->name = name;
}

void Team::setLocation(string location){
    this->location = location;
}

void Team::setName(string name){
    this->name = name;
}

string Team::getLocation(){
    return this->location;
}

string Team::getName(){
    return this->name;
}

string Team::toString(){
    return this->getLocation() + " " + this->getName();
}