// Devontae Reid
// Lab #4 CIS 180

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void addition(int userAnswer);
void subtraction(int userAnswer);
void multiplication(int userAnswer);
void division(int userAnswer);

int main()
{
    srand(time(0));
    
    bool isPlaying = true;
    short int categorySelection;
    
    int userAnswer;
    
    
    do {
        
        // Menu of problems
        cout << "Menu" << endl << "1. Addition Problem" << endl << "2. Subtraction Problem" << endl << "3. Multiplication Problem" << endl << "4. Division Problem" << endl << "5. Quit this program" << endl;
        
        
        // User choice
        cout << endl << "Enter your choice (1-5): ";
        cin >> categorySelection;
        
        switch (categorySelection) {
            case 1:
                addition(userAnswer);
                
                isPlaying = true;
                break;
            case 2:
                subtraction(userAnswer);
                
                isPlaying = true;
                break;
            case 3:
                
                multiplication(userAnswer);
                
                isPlaying = true;
                break;
            case 4:
                
                division(userAnswer);
                
                isPlaying = true;
                break;
            case 5:
                
                // Print Out Quit
                cout << endl << "Quit" << endl << endl;
                
                // Change isPlaying to false to stop program
                isPlaying = false;
                break;
            default:
                break;
        }
        
        
        
    }while (isPlaying);
    
    
    return 0;
}


void addition(int userAnswer)
{
    // Print Out Add
    cout << endl << "Add" << endl << endl;
    
    // Get two random number from 1 - 500
    int num1 = 1 + rand() % 500;
    int num2 = 1 + rand() % 500;
    
    int answer;
    
    // Add them together
    answer = num1 + num2;
    
    // Print out the problem for the user to figure out the answer
    cout << endl << setw(5) << num1 << endl << setw(2) << "+" << num2 << endl << setw(5) << "  ---" << endl << setw(5);
    cin >> setw(5) >> userAnswer;
    
    if (userAnswer == answer)
    {
        cout << endl << "Congratulations! That's right." << endl << endl;
    }
    else
    {
        cout << endl << "Sorry, the correct answer is " << answer << endl << endl;
    }
    
}

void subtraction(int userAnswer)
{
    // Print Out Subtract
    cout << endl << "Subtract" << endl << endl ;
    
    // Get two random number from 1 - 999
    int num1 = 1 + rand() % 999;
    int num2 = 1 + rand() % 999;
    
    while (num2 > num1) {
        num2 = 1 + rand() % 999;
    }
    
    // Subtact them together
    int answer = num1 - num2;
    
    // Print out the problem for the user to figure out the answer
    cout << endl << setw(5) << num1 << endl << setw(2) << "-" << num2 << endl << setw(5) << "  ---" << endl << setw(5);
    cin >> setw(5) >> userAnswer;
    
    if (userAnswer == answer)
    {
        cout << endl << "Congratulations! That's right." << endl << endl;
    }
    else
    {
        cout << endl << "Sorry, the correct answer is " << answer << endl << endl;
    }
    
}


void multiplication(int userAnswer)
{
    // Print Out Multiplication
    cout << endl << "Multiplication" << endl << endl;
    
    // Get two random number from 1 - 100 & 1 - 9
    int num1 = 1 + rand() % 100;
    int num2 = 1 + rand() % 9;
    
    // Multiply them together
    int answer = num1 * num2;
    
    // Print out the problem for the user to figure out the answer
    cout << endl << setw(5) << num1 << endl << setw(2) << "*   " << num2 << endl << setw(5) << "  ---" << endl << setw(5);
    cin >> setw(5) >> userAnswer;
    
    if (userAnswer == answer)
    {
        cout << endl << "Congratulations! That's right." << endl << endl;
    }
    else
    {
        cout << endl << "Sorry, the correct answer is " << answer << endl << endl;
    }
}

void division(int userAnswer)
{
    // Print Out Divide
    cout << endl << "Divide" << endl << endl;
    
    // Get two random number from 1 - 9 & 1 - 51
    int num2 = 1 + rand() % 9;
    int num1 = num2 * (rand() % 50 + 1);
    
    // Divide them together
    int answer = num1/num2;
    
    // Print out the problem for the user to figure out the answer
    cout << endl << setw(5) << num1 << " / " << num2 << " = ";
    cin >> setw(5) >> userAnswer;
    
    if (userAnswer == answer)
    {
        cout << endl << "Congratulations! That's right." << endl << endl;
    }
    else
    {
        cout << endl << "Sorry, the correct answer is " << answer << endl << endl;
    }
}