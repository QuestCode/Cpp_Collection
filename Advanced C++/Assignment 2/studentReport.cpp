#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

void examScores(vector <int>);
int averageScore(vector <int>);
char letterGrade(vector <int>);

int main() {

/*----------INPUT_FILE----------*/

  	ifstream file;
  	file.open("data.txt");
  
  	vector< vector<int> > scores;
  

  	int numOfLines = 0;
  	int numScores;
  	int score;

  // Check if file is already open
  	if(!file.is_open())
    {
    	exit(EXIT_FAILURE);
    }
    
    
	while (file >> numScores)
	{
		scores.push_back(vector<int>(numScores));
		
		for(unsigned int col = 0; col < scores.at(numOfLines).size();col++)
		{
			file  >> score;
			scores.at(numOfLines).at(col) = score;
		}
		
		numOfLines++;
   	}
	  
	file.close();

/*-------------OUTPUT_FILE------------------------*/


	ofstream log_file;
	log_file.open("vector_data.txt");
	
	log_file << numOfLines << " student records were processed.\n";	
	log_file << "Here is the accumulated data in the vector studentData:\n\n";
	
	// Reset numOfLines to 0
	numOfLines = 0;
	
	while (numOfLines < 93)
	{
		log_file << setw(3) << numOfLines + 1;
		 
		for(unsigned int i = 0; i < scores.at(numOfLines).size();i++)
		{
			log_file << setw(5) << scores.at(numOfLines).at(i);
		}
	
		log_file << endl;
		
		numOfLines++;
	}
	
	log_file.close();
	
/*-------------STUDENT_REPORT_FILE----------------*/

	ofstream student_report;
	student_report.open("student_report.txt");
	
	student_report << setw(7) << "Student"  << setw(8)
	 << "Exam 1" << setw(8) << "Exam 2" << setw(8) << "Exam 3"
	<< setw(8) << "Exam 4" << setw(8) << "Exam 5"  
	<< setw(16) << "Average Grade" << setw(16) << "Letter Grade\n\n";
	
	// Reset numOfLines to 0
	numOfLines = 0;
	
	while (numOfLines < 93)
	{
		student_report << setw(7) << numOfLines + 1 << setw(2);
		 
		for(unsigned int i = 0; i < scores.at(numOfLines).size();i++)
		{
			student_report << setw(6) << scores.at(numOfLines).at(i) << "  ";			
			
		}
		
		switch (scores.at(numOfLines).size()){
				case 1:
					student_report << setw(38) << averageScore(scores.at(numOfLines))
		<< setw(14) << letterGrade(scores.at(numOfLines));
				break;
				case 2:
					student_report << setw(34) << averageScore(scores.at(numOfLines))
		<< setw(14) << letterGrade(scores.at(numOfLines));
				break;
				case 3:
					student_report << setw(26) << averageScore(scores.at(numOfLines))
		<< setw(14) << letterGrade(scores.at(numOfLines));
				break;
				case 4:
					student_report << setw(18) << averageScore(scores.at(numOfLines))
		<< setw(14) << letterGrade(scores.at(numOfLines));
				break;
				case 5:
					student_report << setw(10) << averageScore(scores.at(numOfLines))
		<< setw(14) << letterGrade(scores.at(numOfLines));
				break;
				default:
				break;
			}
		
	
		student_report << endl;
		
		numOfLines++;
	}
	
	student_report.close();

	
} // End Main


void examScores(vector <int> vector){
	
	int score = 0;
	
	for(unsigned int i = 0; i < vector.size();i++)
	{
		score = vector.at(i);
		cout << setw(5) << score;
	}
	cout << endl;
} // End examScores

int averageScore(vector <int> vector){
	
	int total = 0;
	
	for(unsigned int i = 0; i < vector.size();i++)
	{
		total += vector.at(i);
	}
	return total/vector.size();
} // End averageScore

char letterGrade(vector <int> vector){

	const double maxGrade = 500;
	int total = 0;
	
	for(unsigned int i = 0; i < vector.size();i++)
	{
		total += vector.at(i);
	}
	
	int studentGrade = (total/maxGrade) * 100;
	char letterGrade = 'f';
	
	if (studentGrade>= 90) letterGrade = 'A';
	else if (studentGrade>= 80) letterGrade = 'B';
	else if (studentGrade>= 70) letterGrade = 'C';
	else if (studentGrade>= 60) letterGrade = 'D';
	else letterGrade = 'F';
	
	return letterGrade;
} // End letterGrade
