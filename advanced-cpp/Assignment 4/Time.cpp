#include "Time.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

// Time constructor initializes each data member
Time::Time( int hour, int minute, int second )
{
    setTime( hour, minute, second ); // validate and set time
} // end Time constructor

// set new Time value using universal time
void Time::setTime( int h, int m, int s )
{
    setHour( h ); // set private field hour
    setMinute( m ); // set private field minute
    setSecond( s ); // set private field second
} // end function setTime

// set hour value
void Time::setHour( int h )
{
    if ( h >= 0 && h < 24 )
        totalSecs += h * 3600;
    else
        throw invalid_argument( "hour must be 0-23" );
} // end function setHour

// set minute value
void Time::setMinute( int m )
{
    if ( m >= 0 && m < 60 )
        totalSecs += m * 60;
    else
        throw invalid_argument( "minute must be 0-59" );
} // end function setMinute

// set second value
void Time::setSecond( int s )
{
    if ( s >= 0 && s < 60 )
        totalSecs += s;
    else
        throw invalid_argument( "second must be 0-59" );
} // end function setSecond

// return hour value
unsigned int Time::getHour()
{
    return totalSecs / 3600;
} // end function getHour

// return minute value
unsigned int Time::getMinute()
{
    return totalSecs / 60;
} // end function getMinute

// return second value
unsigned int Time::getSecond()
{
    return totalSecs;
} // end function getSecond

// print Time in universal-time format (HH:MM:SS)
void Time::printUniversal()
{
    int seconds = totalSecs;
    
    int hour = seconds / 3600;
    seconds -= hour * 3600;
    
    int minute = seconds / 60;
    seconds -= minute * 60;
    
    cout << setfill( '0' ) << setw( 2 ) << hour << ":"
    << setw( 2 ) << minute << ":" << setw( 2 ) << seconds;
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard()
{
    int seconds = totalSecs;
    
    int hour = seconds / 3600;
    seconds -= hour * 3600;
    
    int minute = seconds / 60;
    seconds -= minute * 60;
    
    cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 )
    << ":" << setfill( '0' ) << setw( 2 ) << minute
    << ":" << setw( 2 ) << seconds << ( hour < 12 ? " AM" : " PM" );
} // end function printStandard
