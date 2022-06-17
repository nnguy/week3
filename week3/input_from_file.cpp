#include <iostream>
#include <string>
#include <fstream>
using namespace std; 

int main() {
	ifstream infile("mmyfirstfile.txt"); 
	string firstword, secondword; 
	double num1; 
	int wholenum; 

	if (infile) {
		cout << "File opened successfully" << endl;
		infile >> firstword >> secondword >> wholenum >> num1;
		cout << firstword << " " << secondword << ; 
	}
	else
		cout << "Error opening file " << endl; 
	infile.close(); 
	return 0; 
}