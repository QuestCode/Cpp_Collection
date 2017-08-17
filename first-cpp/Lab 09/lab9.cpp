/*
 Devontae Reid
 Lab 9
 */

#include <iostream>
//#include <cstring>
#include <cctype>
using namespace std;


/*
 The function transform converts the given string raw into a standard form by coverting lowercase letters into uppercase letter and removing all characters other than letters and numerals from the string. The converted string will stored in C string testStr
 */
void transform( char *raw, char *testStr);

/*
 The function test checks whether the C string str is a palindrome. If the C string str is palindrome, then the function returns true; otherwise, the function returns false.
 */
bool testPalindrome(char *str);

int main()
{
    char again;
    
    do {
        char oldString[80];
        cout << "Input a string:" << endl;
        cin.get(oldString,80);
        
        char newString[80];
        
        transform(oldString,newString);
        cout << newString << endl;
        testPalindrome(newString);
        
        cout << "Input another string (y/n)?" << endl;
        cin >> again;
        cin.ignore();
        
        if(again == 'n')
            break;
    }while((again != 'n') && (again == 'y'));
    
    return 0;
}
void transform(char *raw, char *testStr)
{
    int i = 0;
    while (raw[i] != '\0')
    {
        if (isalpha(raw[i]))
            testStr[i] = toupper(raw[i]);
        else 
            testStr[i] = ' ';
        i++;
    }
    testStr[i] = '\0';
   
}

bool testPalindrome(char *str)
{
    const int LAST_CHAR = int(strlen(str)) - 1;
    int i = 0;
    int prevChar = -1, nextChar = LAST_CHAR -1;
    
    while (str[i] != '\0')
    {
        if (str[0] == str[LAST_CHAR]){
            prevChar = i;
            nextChar--;
            i++;
            if (str[prevChar] == str[nextChar]) {
                cout << "Is a palindrome" << endl;
                break;
            }
        }
        else{
            cout << "Is not a palindrome" << endl;
            break;
        }
    }
    
    return true;
}