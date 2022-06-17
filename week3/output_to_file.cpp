#include <iostream>
#include <fstream>
using namespace std; 

int main() {
	ofstream outfile; 
	outfile.open("mmyfirstfile.txt"); 
	//ofstream outfile ("myfirstfile.txt"); 
	outfile << "Hello world" << endl;
	outfile.close(); 
	return 0;

}