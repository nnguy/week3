#include <iostream>
#include <fstream>
using namespace std; 

int main() {
	const int CAPACITY = 30;
	string firstnames[CAPACITY];
	int num_students;

	cout << "How many students are in your class? CANNOT BE MORE THAN " << CAPACITY;
	cin >> num_students;

	for (int i = 0; i < num_students; i++) {
		cout << "Type in the student's first name : ";
		cin >> firstnames[i];
	}
	for (int i = 0; i < num_students; i++) {
		cout << firstnames[i] << endl; 
	}

	return 0; 

}