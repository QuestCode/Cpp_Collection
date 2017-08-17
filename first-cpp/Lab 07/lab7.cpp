// Devontae Reid
// CIS 180 Lab #7

#include <iostream>
#include <iomanip>
using namespace std;


int getTotal(int[][5],int,int);
float getAverage(int[][5],int,int);
int getRowTotal(int[][5],int,int);
int getColumnTotal(int[][5],int,int);
int getHighestInRow(int[][5],int,int);
int getLowestInRow(int[][5],int,int);


int main()
{
    const int ROWS = 4;
    const int COLS = 5;
    
    // Array with test data
    int testArray[ROWS][COLS] =
    { { 1, 2, 3, 4, 5 },
        { 6, 7, 8, 9, 10 },
        { 11, 12, 13, 14, 15 },
        { 16, 17, 18, 19, 20 }
    };
    
    int total = getTotal(testArray, ROWS, COLS);
    // Display the total of the array elements.
    cout << "The total of the array elements is "<< total << endl;
    
    float average = getAverage(testArray, ROWS, COLS);
    // Display the average of the array elements.
    cout << "The average value of an element is "<< average << endl;
    
    int rowTotal = getRowTotal(testArray, 0, COLS);
    // Display the total of row 0.
    cout << "The total of row 0 is "<< rowTotal << endl;
    
    int columnTotal = getColumnTotal(testArray, 2, ROWS);
    // Display the total of column 2.
    cout << "The total of col 2 is " << columnTotal << endl;
    
    int highestValue = getHighestInRow(testArray, 2, COLS);
    // Display the highest value in row 2. 
    cout << "The highest value in row 2 is "<< highestValue << endl;
    
    int lowestValue = getLowestInRow(testArray, 2, COLS);
    // Display the lowest value in row 2.
    cout << "The lowest value in row 2 is "<< lowestValue << endl;
}

// This function should accept two-dimensional array
// as its argument and return the total of all the
// values in the array
int getTotal(int array[][5],int ROWS,int COLUMNS)
{
    // Set total to zero
    int total = 0;
    
    // Loop through array
    for(int r = 0;r < ROWS;r++)
        for(int c = 0;c < COLUMNS;c++)
            total += array[r][c];
    
    return total;
}

/*
 This function should accept a two-dimensional array
 as its argument and return the average of values in
 the array
 */
float getAverage(int array[][5],int ROWS,int COLUMNS)
{
   // Set average to average
    float average = 0;
    
    // Variable for num of index
    int indexNum = 0;
    
    // Loop through array
    for(int r = 0;r < ROWS;r++)
      for(int c = 0;c < COLUMNS;c++)
         {
            average += array[r][c];
            indexNum++;
         }
    return average / indexNum;
}
/*
 This function should accept a two-dimensional array as
 its first argument and an integer as its second argument.
 The second argument should be the subscript of a row in
 the array. The function should return the total of the
 values in the specified row.
 */

int getRowTotal(int array[][5],int ROWS,int COLUMNS)
{
    int rowTotal = 0;
    for(int r = ROWS;r <= ROWS;r++)
      for(int c = 0;c < COLUMNS;c++)
         rowTotal += array[r][c];
         
    return  rowTotal;
}
/*
 This function should accept a two-dimensional array as
 its first argument and an integer as its second argument.
 The second argument should be the subscript of a column
 in the array. The function should return the total of the
 values in the specified column
 */

int getColumnTotal(int array[][5],int COLUMNS,int ROWS)
{
    // Set columnTotal to zero
    int columnTotal = 0;
    // Loop through array
    for(int c = COLUMNS;c <= COLUMNS;c++)
       for(int r = 0;r < ROWS;r++)
         columnTotal += array[r][c];
         
    return columnTotal;
}
/*
 This function should accept a two-dimensional array as
 its first argument and an integer as its second argument.
 The second argument should be the subscript of a row in
 the array. The function should return the highest value
 in the specified row in the array
 */

int getHighestInRow(int array[][5],int ROWS,int COLUMNS)
{
    // Set highest num to zero
    int highestNum = 0;
    
    // Loop through array
      for(int c = 0;c < COLUMNS;c++)
      {
         if(array[ROWS][c] > highestNum)
            highestNum = array[ROWS][c];
      }
    
    return highestNum;
}
/*
 This function should accept a two-dimensional array as its
 first argument and an integer as its second argument. The
 second argument should be the subscript of a row in the
 array. The function should return the lowest value in the
 specified row in the array
 */
int getLowestInRow(int array[][5],int ROWS,int COLUMNS)
{
    // Set lowest num to one hundred
    int lowestNum = array[ROWS][0];
    
    // Loop through array
      for(int c = 0;c < COLUMNS;c++)
      {
         if(array[ROWS][c] < lowestNum)
            lowestNum = array[ROWS][c];
      }
    
    
    return lowestNum;
}