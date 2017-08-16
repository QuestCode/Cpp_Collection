#ifndef TIME_H
#define TIME_H


// Time class definition
class Time
{
public:
    explicit Time( int = 0, int = 0, int = 0 ); // default constructor
    
    // set functions
    void setTime( int, int, int ); // set hour, minute, second
    void setHour( int ); // set hour (after validation)
    void setMinute( int ); // set minute (after validation)
    void setSecond( int ); // set second (after validation)
    
    // get functions
    unsigned int getHour(); // return hour
    unsigned int getMinute(); // return minute
    unsigned int getSecond(); // return second
    
    void printUniversal(); // output time in universal-time format
    void printStandard(); // output time in standard-time format
private:
    unsigned int totalSecs;
}; // end class Time

#endif