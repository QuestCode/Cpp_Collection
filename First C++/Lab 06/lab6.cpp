// Devontae Reid
// Lab #6


#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

const int SIZE = 11;


void readRainfall(float []);
void displayRainfall(float [],int);
float getTotalOfRainfall(float [],int);
float getAverageOfRainfall(float [],int);
int getIndexOfHighestRainFall(float [],int);
int getIndexOfLowestRainFall(float [],int);


int main()
{
    
    float rainfall[SIZE];
    
    //Call the function readRainFall
    readRainfall(rainfall);
    
    //Call the function displayRainFall
    displayRainfall(rainfall,1);
    
    //Call the function getTotalOfRainFall
    float total = getTotalOfRainfall(rainfall,12);
    
    cout << setprecision(2) << fixed;
    //Display the total of rainfall
    cout << endl << "The total rainfall is " << total << " inches."<< endl;
    
    //Call the function getAverageOfRainFall
    float average = getAverageOfRainfall(rainfall,12);
    
    //Display the average rainfall
    cout << "The average amount of rainfall is " << average << " inches." << endl;
    
    //Call the function getIndexOfHigestRainFall
    float largest = getIndexOfHighestRainFall(rainfall,12);
    
    //Display the largest amount of rainfall
    cout << "The largest amount of rainfall is " << largest << " inches." << endl;
    
    //Call the function getIndexOfLowestRainFall
    float smallest = getIndexOfLowestRainFall(rainfall,12);
    
    //Display the lowest amount of rainfall
    cout << "The smallest amout of rainfall is " << smallest << " inches." << endl;
    
    
}


void readRainfall(float array[])
{
    ifstream theFile;
    theFile.open("rain.txt");
    
    int count = 0;
    int months;
    
    while (count < SIZE + 1 && theFile >> months >> array[count])
        count++;
    
    theFile.close();
    
}


void displayRainfall(float array[],int months)
{
    
    int count = 0;
    cout << setprecision(2) << fixed;
    
    // Display Titles
    cout << left << setw(6) << "Month";
    cout << right << setw(10) << "Rainfall" << endl;
    for (count = 0; count <= SIZE; count++)
    {
        // Print out Months and Number Of Rainfall
        cout << left << setw(3) << months;
        cout << right << setw(13) << array[count] << endl;
        months++;
    }
}


float getTotalOfRainfall(float array[],int months)
{
    float total;
    
    int count = 0;
    
    while(count < months)
    {
        total += array[count];
        count++;
    }
    
    return total;
}


float getAverageOfRainfall(float array[],int months)
{
    float average;
    
    int count = 0;
    
    while(count < months)
    {
        average += array[count];
        count++;
    }
    
    return average/months;
}


int getIndexOfHighestRainFall(float array[],int months)
{
    
    float largestNum;
    int count = 0;
    
    while(count < months)
    {
        if(array[count] > largestNum)
            largestNum = array[count];
            
        count++;
    }
    
    return largestNum;
}


int getIndexOfLowestRainFall(float array[],int months)
{
    float smallestNum;
    int count = 0;
    
    while(count < months)
    {
        if(array[count] < smallestNum)
            smallestNum = array[count];
        count++;
    }
    
    return int(smallestNum);
}