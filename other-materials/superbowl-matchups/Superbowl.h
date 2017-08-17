#ifndef SUPERBOWL_H_
#define SUPERBOWL_H_


#include "Team.h"
#include "Matchup.h"
using namespace std;

class Superbowl {
    
private:
    Matchup matchup;
    string location;
    string superbowlNum;
    
public:
    Superbowl();
    Superbowl(Matchup matchup,string location,string superbowlNum);
    
    // Getters and setters
    void setMatchup(Matchup matchup);
    void setLocation(string location);
    void setSuperbowlNum(string superbowlNum);
    
    Matchup getMatchup();
    string getLocation();
    string getSuperbowlNum();
    
    string toString();
};

#endif