#include <iostream>
using namespace std;

int main()
{
   char str[] = "hey It's me";
   char *newStr = str;
  // cout << str << endl;
   while(*newStr)
   {
      if (islower(*newStr))
         toupper(*newStr);
       
   newStr++;
   }// End While
   *newStr = '\0';
   cout << newStr;
   
   return 0;
}// End Main
