#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void print_letter_grade(float); 
void printarr(int[], int);
void printRoster(string[], string[], int); 
double quizAverage(double[], int);
int linearSearch(int[], int, int);

int main() {
	ifstream infile("enrolledCSC500.txt");
	int num_students;
	const int CAPACITY = 30;
	string firstnames[CAPACITY];
	int studentID[CAPACITY];
	string lastnames[CAPACITY];
	int counter = 0;
	float quizgrades[CAPACITY] = { 100, 90, 85, 65, 86, 91 };
	float quiz2grades[CAPACITY] = { 95, 91, 92, 88, 79, 82 }; 

	if (infile) {
		cout << "File opened successfully" << endl;
		while (infile >> studentID[counter]) {
			infile >> firstnames[counter];
			infile >> lastnames[counter];
			//cout << "What was the quiz grade for " << firstnames[counter] << " " << lastnames[counter] << endl;
			//cin >> quizgrades[counter];
			counter++;
		}
		//cout << counter << endl;
		//for (int i = 0; i < counter; i++) {
		//	cout << studentID[i] << " - " << lastnames[i] << ", " << firstnames[i] << " : " << quizgrades[i] << endl;
		//}

		//print_letter_grade(quizgrades[4]);
		//printarr(studentID, counter); 
		cout << "Enter a student ID number " << endl; 
		int id; 
		cin >> id;
		int x;
		if ((x = linearSearch(studentID, counter, id)) > -1)
			cout << lastnames[x] << " " << firstnames[x] << " : " << endl;
		else
			cout << "Student ID couldn't be found " << endl; 
		infile.close();

	}
	else
		cout << "File did not open successfully " << endl;
	return 0;
}

void print_letter_grade(float numericgrade) {
	if (numericgrade >= 90 && numericgrade <= 100)
		cout << "A" << endl;
	else if (numericgrade >= 80 && numericgrade < 90)
		cout << "B" << endl;
	else if (numericgrade >= 70 && numericgrade < 80)
		cout << "C" << endl;
	else if (numericgrade >= 60 && numericgrade < 70)
		cout << "D" << endl;
	else if (numericgrade >= 0 && numericgrade < 60)
		cout << "F" << endl;
}

void printarr(int arr[], int arrSize) {
	for (int i = 0; i < arrSize; i++)
		cout << arr[i] << endl; 
}

void printRoster(string fname[], string lname[], int numStudents) {
	for (int i = 0; i < numStudents; i++)
		cout << fname[i] << " " << lname[i] << endl; 
}

double quizAverage(double quizGrades[], int size) {
	double total = 0; 
	for (int i = 0; i < size; i++) {
		total += quizGrades[i]; 
	}
	return total / size; 
}
void printint(int& x) {

}

int linearSearch(int arr[], int arrSize, int value) {
	bool found = false;
	int position = -1; 
	int index = 0; 
	while (found == false && index < arrSize) {
		if (arr[index] == value) {
			found = true; 
			position = index; 
		}
		index++;
	}
	return position;
}