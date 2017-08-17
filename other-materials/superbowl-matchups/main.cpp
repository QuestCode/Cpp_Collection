#include <iostream>
#include "Team.h"
#include "Matchup.h"
#include "Superbowl.h"
using namespace std;
/*

int main(){
    
    Superbowl superbowls[51] = {
        // Superbowl 1
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "I"),
        // Superbowl 2
        Superbowl(Matchup(Date(1, 14, 1968), Team("Green Bay", "Packers"), Team("Oakland", "Raiders"), 33, 14), "Orange Bowl (Miami)", "II"),
        // Superbowl 3
        Superbowl(Matchup(Date(1, 12, 1969), Team("New York", "Jets"), Team("Baltimore", "Ravens"), 16, 7), "Orange Bowl (Miami)", "III"),
        // Superbowl 4
        Superbowl(Matchup(Date(1, 11, 1970), Team("Kansas City", "Chiefs"), Team("Minnesota", "Vikings"), 23, 7), "Tulane Stadium (New Orleans)", "IV"),
        // Superbowl 5
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "V"),
        // Superbowl 6
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "VI"),
        // Superbowl 7
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "VII"),
        // Superbowl 8
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "VIII"),
        // Superbowl 9
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "IX"),
        // Superbowl 10
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "X"),
        // Superbowl 11
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XI"),
        // Superbowl 12
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XII"),
        // Superbowl 13
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XIII"),
        // Superbowl 14
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XIV"),
        // Superbowl 15
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XV"),
        // Superbowl 16
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XVI"),
        // Superbowl 17
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XVII"),
        // Superbowl 18
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XVIII"),
        // Superbowl 19
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XIX"),
        // Superbowl 20
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XX"),
        // Superbowl 21
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XXI"),
        // Superbowl 22
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XXII"),
        // Superbowl 23
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XXIII"),
        // Superbowl 24
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XXIV"),
        // Superbowl 25
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XXV"),
        // Superbowl 26
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XXVI"),
        // Superbowl 27
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XXVII"),
        // Superbowl 28
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XXVIII"),
        // Superbowl 29
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XXIX"),
        // Superbowl 30
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XXX"),
        // Superbowl 31
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XXXI"),
        // Superbowl 32
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XXXII"),
        // Superbowl 33
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XXXIII"),
        // Superbowl 34
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XXXIV"),
        // Superbowl 35
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XXXV"),
        // Superbowl 36
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XXXVI"),
        // Superbowl 37
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XXXVII"),
        // Superbowl 38
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XXXVII"),
        // Superbowl 39
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XXXVIX"),
        // Superbowl 40
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XL"),
        // Superbowl 41
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XLI"),
        // Superbowl 42
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XLII"),
        // Superbowl 43
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XLIII"),
        // Superbowl 44
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XLIV"),
        // Superbowl 45
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XLV"),
        // Superbowl 46
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XLVI"),
        // Superbowl 47
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XLVII"),
        // Superbowl 48
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XLVIII"),
        // Superbowl 49
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "XLIX"),
        // Superbowl 50
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "L"),
        // Superbowl 51
        Superbowl(Matchup(Date(1, 15, 1967), Team("Green Bay", "Packers"), Team("Kansas City", "Chiefs"), 35, 10), "Los Angeles Memorial Coliseum", "LI")
    };
    
    
    cout << "What Superbowl do you want to search?(1-51) " << endl;
    
    int input;
    cin >> input;
    
    cout << superbowls[input-1].toString() << endl;
    
    
    return 0;
}
*/
