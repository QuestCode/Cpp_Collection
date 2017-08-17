// Devontae Reid
// CIS 180

#include <iostream>
#include <iomanip>
using namespace std;

int main() { // Open Main
    
    // Setup the const variables
    const double FEDERAL_TAX = 0.2;
    const double STATE_TAX = 0.04;
    const double SOCIAL_SECURITY_TAX = 0.035;
    const double MEDICARE_MEDICAID_TAX = 0.0275;
    const double PENSION_PLAN = 0.06;
    const double HEALTH_INSURANCE = 80.00;
    
    
    // Print Out User Question
    cout << "Enter your Gross Income: ";
    
    // Gross Income variable
    double grossIncome;
    
    // Get User Gross Income
    cin >> grossIncome;
    
    
    // Calculate their taxes
    double federalTax = grossIncome * FEDERAL_TAX;
    double stateTax = grossIncome * STATE_TAX;
    double socialTax = grossIncome * SOCIAL_SECURITY_TAX;
    double medicareTax = grossIncome * MEDICARE_MEDICAID_TAX;
    double pensionPlan = grossIncome * PENSION_PLAN;
    double netPay = grossIncome - (federalTax + stateTax + socialTax + medicareTax + pensionPlan + HEALTH_INSURANCE);
    
    
    // Show User Their tax statements
    cout << endl << left <<  setw(26) << "Gross amount:" << right << "$" << setw(10) << setprecision(6) << showpoint << grossIncome << endl;
    cout << left <<  setw(26) <<  "Federal Tax:" << right << "$" << setw(10) << setprecision(5) << federalTax << endl;
    cout << left <<  setw(26) << "State Tax:" << right << "$" << setw(10) << setprecision(5) << stateTax << endl;
    cout << left <<  setw(26) << "Social Tax:" << right << "$" << setw(10) << setprecision(5) << socialTax << endl;
    cout << left <<  setw(26) << "Medicare/Medicaid Tax:" << right << "$" << setw(10) << setprecision(4) << medicareTax << endl;
    cout << left <<  setw(26) << "Pension Plan:" << right << "$" << setw(10) << setprecision(5) << pensionPlan << endl;
    cout << left <<  setw(26) << "Health Insurance:" << right << "$" << setw(10) << setprecision(4) << HEALTH_INSURANCE << endl;
    cout << left <<  setw(26) << "Net Pay:" << right << "$" << setw(10) << setprecision(6) << netPay << endl;
    
}// Close Main