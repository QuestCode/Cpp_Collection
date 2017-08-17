// Devontae Reid
// CIS 180 Lab3

#include <iostream>
#include <iomanip>
using namespace std;

int main() { // Open Main
    
    // Bank Charges
    const double MONTHLY_FEE = 10.00; // Base monthly fee
    const double MIN_BAL = 400.00; // minimum balance
    const double LOW_BAL_FEE = 15.00; // extra fee for low balance
    
    // User Information
    short int numOfChecks; // Number of check written in the month
    double accountBalance; // User account balance before deductions
    double checkFees; // Fee based on number of checks
    double totalFees; // Total monthly bank fees
    
    for (int i = 1; i <= 6; i++) {
        
        // Ask For User Information
        cout << "Enter the following information about your checking account." << endl;
        
        // Get User Acount Balance
        cout << "Beginning balance: $";
        cin >> accountBalance;
        
        // Number of checks written by user
        cout << endl << "Number of checks written:";
        cin >> numOfChecks;
        
        
        // Check account for user
        if (accountBalance > MIN_BAL)
        {
            // Count number of check and charge user for the number used
            if (numOfChecks >= 60)
            {
                checkFees = 0.04;
                totalFees = MONTHLY_FEE + (numOfChecks * checkFees);
                cout << endl << "The bank fee this month is $" << setprecision(5) <<  totalFees << endl << endl;
            }
            else if (numOfChecks >= 40 && numOfChecks <= 59)
            {
                checkFees = 0.06;
                totalFees = MONTHLY_FEE + (numOfChecks * checkFees);
                cout << endl << "The bank fee this month is $" << setprecision(5) <<  totalFees << endl << endl;
            }
            else if (numOfChecks >= 20 && numOfChecks <= 39)
            {
                checkFees = 0.08;
                totalFees = MONTHLY_FEE + (numOfChecks * checkFees);
                cout << endl << "The bank fee this month is $" << setprecision(5) <<  totalFees << endl << endl;
            }
            else if (numOfChecks > 0)
            {
                checkFees = 0.10;
                totalFees = MONTHLY_FEE + (numOfChecks * checkFees);
                cout << endl << "The bank fee this month is $" << setprecision(5) <<  totalFees << endl << endl;
            }
            else if (numOfChecks < 0)
            {
                cout << endl << "Number Of checks have to be greater than 0" << endl << endl;
            }
        }
        else if (accountBalance < MIN_BAL && accountBalance > 0)
        {
            cout << endl << "Hey" << endl << endl;
            
            // Count number of check and charge user for the number used
            if (numOfChecks >= 60)
            {
                checkFees = 0.04;
                totalFees = MONTHLY_FEE + LOW_BAL_FEE + (numOfChecks * checkFees);
                cout << endl << "The bank fee this month is $" << setprecision(5) <<  totalFees << endl << endl;
            }
            else if (numOfChecks >= 40 && numOfChecks <= 59)
            {
                checkFees = 0.06;
                totalFees = MONTHLY_FEE + LOW_BAL_FEE + (numOfChecks * checkFees);
                cout << endl << "The bank fee this month is $" << setprecision(5) <<  totalFees << endl << endl;
            }
            else if (numOfChecks >= 20 && numOfChecks <= 39)
            {
                checkFees = 0.08;
                totalFees = MONTHLY_FEE + LOW_BAL_FEE + (numOfChecks * checkFees);
                cout << endl << "The bank fee this month is $" << setprecision(5) <<  totalFees << endl << endl;
            }
            else if (numOfChecks > 0)
            {
                checkFees = 0.10;
                totalFees = MONTHLY_FEE + LOW_BAL_FEE + (numOfChecks * checkFees);
                cout << endl << "The bank fee this month is $" << setprecision(5) <<  totalFees << endl << endl;
            }
            else if (numOfChecks < 0)
            {
                cout << endl << "Number of checks have to be greater than 0" << endl << endl;
            }
        }
        else if (accountBalance < 0)
        {
            cout << endl << "Your account is overdrawn!" << endl;
            
            // Count number of check and charge user for the number used
            if (numOfChecks >= 60)
            {
                checkFees = 0.04;
                totalFees = MONTHLY_FEE + LOW_BAL_FEE + (numOfChecks * checkFees);
                cout << endl << "The bank fee this month is $" << setprecision(5) <<  totalFees << endl << endl;
            }
            else if (numOfChecks >= 40 && numOfChecks <= 59)
            {
                checkFees = 0.06;
                totalFees = MONTHLY_FEE + LOW_BAL_FEE + (numOfChecks * checkFees);
                cout << endl << "The bank fee this month is $" << setprecision(5) <<  totalFees << endl << endl;
            }
            else if (numOfChecks >= 20 && numOfChecks <= 39)
            {
                checkFees = 0.08;
                totalFees = MONTHLY_FEE + LOW_BAL_FEE + (numOfChecks * checkFees);
                cout << endl << "The bank fee this month is $" << setprecision(5) <<  totalFees << endl << endl;
            }
            else if (numOfChecks > 0)
            {
                checkFees = 0.10;
                totalFees = MONTHLY_FEE + LOW_BAL_FEE + (numOfChecks * checkFees);
                cout << endl << "The bank fee this month is $" << setprecision(5) <<  totalFees << endl << endl;
            }
            else if (numOfChecks < 0)
            {
                cout << endl << "Number Of checks have to be greater than 0" << endl << endl;
            }
            
        }
        
        
    }
    
    return 0;
    
}// Close Main