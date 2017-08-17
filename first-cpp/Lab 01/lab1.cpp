// Devontae Reid
// CIS 180 Lab1

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    // Set up numbers of calories per food item
    double hamburger = 400;
    double frenchFries = 275;
    double softDrink = 150;
    
    // Ask question for user
    cout << "How many been hamburger, french fries, and soft drink you consume? ";
    
    // Number of Items user inputed
    double numOfHamburgers;
    double numOfFrenchFries;
    double numOfSoftDrinks;
    
    // User Input
    cin >> numOfHamburgers >> numOfFrenchFries >> numOfSoftDrinks;
    
    // Total calories that the user has ingested calculator
    double totalCalories = (hamburger * numOfHamburgers) + (frenchFries * numOfFrenchFries) + (softDrink * numOfSoftDrinks);
    
    // Show User number of total calories
    cout << endl << "You ingested " << totalCalories << " calories."<< endl << endl;
    
    // Number of calories burned perMile
    const double caloriesPerMile = 375;
    
    // Number of miles needed to burn the calories off
    double neededMiles = totalCalories/caloriesPerMile;
    
    
    // Show user how many calories that was burned
    cout << "You will have to run " << setprecision(2) << neededMiles << " miles to expand that much energy."<< endl;
    
    return 0;
}