// Devontae Reid
// CIS 180 Lab #8

#include <iostream>
#include <iomanip>
using namespace std;

void inputArray(int *array, int arraySize);
int determineHighest(int *array, int arraySize);
int determineLowest(int *array, int arraySize);
int calculateAverage(int * array, int arraySize);

int main()
{
    int numOfScores;
    
    // Print out
    cout << "Enter number of scores: " << endl;
    
    cin >> numOfScores;
    
    // Init array
    int *grade = new int[numOfScores];
    
    // Input grades into array
    inputArray(grade, numOfScores);
    
    // Get the highest grade
    int highest = determineHighest(grade, numOfScores);
    cout << "Highest" << setw(3) << highest << endl;
   
    // Get the lowest grade
    int lowest = determineLowest(grade, numOfScores);
    cout << "Lowest" << setw(3) << lowest << endl;
    
    // Get the average grade
    double average = calculateAverage(grade, numOfScores);
    cout << "Average" << setw(5) << setprecision(1) << fixed << average << endl;
    
    return 0;
}

void inputArray(int *array, int arraySize)
{
    // Print out prompt that prompt the user to add grade
    cout << "Input the test scores: " << endl;
    
    // Loop to append variables to array
    for (int i = 0; i < arraySize; i++) {
        // Add to array
        cin >> array[i];
    }
}


int calculateAverage(int * array, int arraySize)
{
    // Create variable called sum
    double sum = 0;
    
    // Loop through array and add each to the variable sum
    for (int i = 0; i < arraySize; i++) {
        sum += array[i];
    }
    
    // Return the average
    return sum / arraySize;
}


int determineHighest(int *array, int arraySize)
{
    // Create variable to store the highest number
    int highestNum = 0;
    
    // Loop through array to identify the highest grade
    for (int i = 0; i < arraySize; i++) {
        if (highestNum <= array[i])
            highestNum = array[i];
    }
    
    // Return the highest number
    return highestNum;
}


int determineLowest(int *array, int arraySize)
{
    // Create a variable to store lowest number
    int lowestNum = 100;
    
    // Loop through array to identify the lowest number
    for (int i = 0; i < arraySize; i++) {
        if (lowestNum >= array[i]) {
            lowestNum = array[i];
        }
    }
    
    // Return the lowest number
    return lowestNum;
}
