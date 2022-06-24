#include <iostream>
#include <fstream>
using namespace std; 

int main() {
	ifstream infile("enrolledCSC500.txt");
	int num_students; 
	const int CAPACITY = 30; 
	string firstnames[CAPACITY];
	int studentID[CAPACITY]; 
	string lastnames[CAPACITY];
	int counter = 0; 
	float quizgrades[CAPACITY];

	if (infile) {
		cout << "File opened successfully" << endl;
		while (infile >> studentID[counter]) {
			infile >> firstnames[counter];
			infile >> lastnames[counter];
			cout << "What was the quiz grade for " << firstnames[counter] << lastnames[counter] << endl;
			cin >> quizgrades[counter];
			counter++;
		}
		cout << counter << endl; 
		for (int i = 0; i < counter; i++) {
			cout << studentID[i] << " - " << lastnames[i] << ", " << firstnames[i] << endl;
		}
		infile.close();

	}
	else
		cout << "File did not open successfully " << endl; 
	return 0; 
}