#include <iostream>
#include "Team.h"
#include "Matchup.h"
#include "Superbowl.h"
using namespace std;

Superbowl::Superbowl(){
    this->matchup = Matchup();
    this->location = "";
    this->superbowlNum = "";
}

Superbowl::Superbowl(Matchup matchup,string location,string superbowlNum){
    this->matchup = matchup;
    this->location = location;
    this->superbowlNum = superbowlNum;
}

void Superbowl::setMatchup(Matchup matchup){
    this->matchup = matchup;
}

void Superbowl::setLocation(string location){
    this->location = location;
}

void Superbowl::setSuperbowlNum(string superbowlNum){
    this->superbowlNum = superbowlNum;
}


Matchup Superbowl::getMatchup(){
    return this->matchup;
}

string Superbowl::getLocation(){
    return this->location;
}

string Superbowl::getSuperbowlNum(){
    return this->superbowlNum;
}

string Superbowl::toString(){
    return "Superbowl " + getSuperbowlNum() + " : " + getMatchup().toString() + " Location: " + getLocation();
}