// Header File for Team class

#ifndef TEAM_H_
#define TEAM_H_

#include <iostream>
using namespace std;

class Team {
        // Private class members and methods
    private:
        string name;
        string location;
        
        // Public class members and methods
    public:
        Team();
        Team(string location,string name);
    
        // Getters and Setters
        void setLocation(string location);
        void setName(string name);
        string getLocation();
        string getName();
    
        string toString();
};

#endif