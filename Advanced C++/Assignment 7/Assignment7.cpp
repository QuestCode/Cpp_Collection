#include "Student.h"
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <random>
#include <string>
#include <iomanip>
using namespace std;

int SIZE = 20;

// Fill The Vector with students
void fillVector(vector <Student>&,char*,char*,int&,double&);

// Get Random GPA
double randomGPA();

// Get Random Student ID
int randomID_Number();

// Create Binary File
void binaryFile();

string *getFileInfo(string);

/*-------MAIN_FUNCTION-------*/
int main()
{
    default_random_engine engine( static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(0, 19);
    
    // vector of students
    vector <Student> students;
    char fName[16];
    char lName[16];
    
    // List of First Names
    string firstNames[20];
    for(int i = 0;i<SIZE;i++){
		firstNames[i] = getFileInfo("firstName.txt")[i];
    }
    // List Of Last Names
    string *lastNames = getFileInfo("lastName.txt");
    
    
	for(int i = 0; i < SIZE; i++){
		string first = firstNames[randomInt(engine)], last = lastNames[randomInt(engine)];
		
		strcpy(fName, first.c_str());
		strcpy(lName, last.c_str());
		int idNumber = randomID_Number();
    	double GPA = randomGPA();
		
		fillVector(students,fName,lName,idNumber,GPA);
	}
	
   for(auto student : students)
   {
       cout << student.getFirstName() << endl;
   }
}

/*--------Functions--------*/
double randomGPA()
{
    default_random_engine engine( static_cast<unsigned int>(time(NULL)));
    uniform_real_distribution<double> randomNum(1.00, 4.00);
    
    return randomNum(engine);
}

int randomID_Number()
{
	default_random_engine engine( static_cast<unsigned int>(time(NULL)));
    uniform_int_distribution<unsigned int> randomInt(1000, 4000);
    return randomInt(engine);
}

void fillVector(vector <Student> &classOfStudent,char *fName,char *lName,int &id,double &gpa)
{   
    cout << setprecision(3);
	cout << fName << " " << lName << " " << id << " " << gpa << endl;
    
    //Create Student Object
    Student newStudent(id,fName,lName,gpa);
    
    classOfStudent.push_back(newStudent);
}


/*-----Get_Files_Function-----*/
string* getFileInfo(string file){
	
	ifstream nameFile(file);
    
    if(nameFile.fail()){
        cerr << "Error opening file" << endl;
        exit(EXIT_FAILURE);
    }

	static string Names[20];
	string name;
	int i = 0;
	
	while(nameFile >> name){
		//cout << name << endl;
		Names[i] = name;
		i++;
	}
	
	nameFile.close();
	
	return Names;
}