#include <iostream>
#include <string>
#include "Team.h"
#include "Matchup.h"
using namespace std;

Matchup::Matchup(){
    this->date = Date();
    this->team1 = Team();
    this->team2 = Team();
    this->team1Score = 0;
    this->team2Score = 0;
}

Matchup::Matchup(Date date,Team team1,Team team2,int team1Score,int team2Score){
    this->date = date;
    this->team1 = team1;
    this->team2 = team2;
    this->team1Score = team1Score;
    this->team2Score = team2Score;
}

void Matchup::setDate(Date date){
    this->date = date;
}

void Matchup::setTeam1(Team team1){
    this->team1 = team1;
}

void Matchup::setTeam2(Team team2){
    this->team2 = team2;
}

void Matchup::setTeam1Score(int score){
    this->team1Score = score;
}

void Matchup::setTeam2Score(int score){
    this->team2Score = score;
}

Date Matchup::getDate(){
    return this->date;
}

Team Matchup::getTeam1(){
    return this->team1;
}

Team Matchup::getTeam2(){
    return this->team2;
}

int Matchup::getTeam1Score(){
    return this->team1Score;
}

int Matchup::getTeam2Score(){
    return this->team2Score;
}

string Matchup::toString(){
    string team1String = this->team1.toString();
    string team2String = this->team2.toString();
    
    string matchup = team1String + " vs " + team2String;
    
    
    string score =  "(" + team1.getLocation() + " " + to_string(team1Score) + " - " + team2.getLocation() + " " + to_string(team2Score) + ")";
    
    
    return "Date: " + getDate().toString() + " " + matchup + " " + score;
}

