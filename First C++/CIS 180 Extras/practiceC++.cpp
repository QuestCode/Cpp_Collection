#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
   
   const int SIZE = 12;
   int month[SIZE] = {};
   int count = 0;
   
   ifstream inputFile;
   
   inputFile.open("rain.txt");
   
   cout << "Months" << endl;
   
   while(count < SIZE && inputFile >> month[count])
      count++;
      
   for(count = 0; count < SIZE; count++)
   {
         cout << month[count] << endl;
   }
 
 
   
   for(int i = 1; i<= SIZE;i++)
   {
      month[i-1] = i;
   }
   
   inputFile.close();
   
}