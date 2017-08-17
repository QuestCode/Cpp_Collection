
#ifndef MATCHUP_H_
#define MATCHUP_H_


#include "Team.h"
#include "Date.h"
using namespace std;

class Matchup {
    
    // Private Members
    private:
        Team team1;
        Team team2;
        Date date;
        int team1Score;
        int team2Score;
    public:
        Matchup();
        Matchup(Date date,Team team1,Team team2,int team1Score,int team2Score);
        
        
        // Getters and Setters
        void setDate(Date date);
        void setTeam1(Team team1);
        void setTeam2(Team team2);
        void setTeam1Score(int score);
        void setTeam2Score(int score);
        
        Date getDate();
        Team getTeam1();
        Team getTeam2();
        int getTeam1Score();
        int getTeam2Score();
        
        string toString();
};

#endif