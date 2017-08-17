#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

Date::Date() {
    this->month = 1;
    this->day = 1;
    this->year = 1900;
}

Date::Date(int month,int day,int year){
    
    this->setMonth(month);
    this->setDay(day);
    this->year = year;
}

void Date::setMonth(int month) {
    // Check valid month
    if(month > 0 && month < 13)
    {
        this->month = month;
    }else {
        cout << "Invalid month" << endl;
        this->month = 1;
    }
}

void Date::setDay(int day){
    // Check valid day
    if(day > 0 && day < 30)
    {
        this->day = day;
    }else {
        cout << "Invalid day" << endl;
        this->day = 1;
    }
}

void Date::setYear(int year){
    this->year = year;
}


int Date::getMonth(){
    return this->month;
}

int Date::getDay() {
    return this->day;
}

int Date::getYear(){
    return this->year;
}

string Date::toString(){
    return to_string(getMonth()) + "/" + to_string(getDay()) + "/" + to_string(getYear());
}
