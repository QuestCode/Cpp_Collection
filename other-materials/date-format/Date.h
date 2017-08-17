#ifndef DATE_H_
#define DATE_H_

using namespace std;

class Date {
    
private:
    int month;
    int day;
    int year;
    
public:
    Date();
    Date(int month,int day,int year);
    
    void setMonth(int month);
    void setDay(int day);
    void setYear(int year);
    
    int getMonth();
    int getDay();
    int getYear();
    
    string toString();
};

#endif