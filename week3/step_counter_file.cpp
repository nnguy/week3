#include <iostream>
#include <fstream> 
using namespace std; 

int main() {
	int num_days, num_steps, days_count = 1; 
	ofstream outfile("steps.txt"); 
	if (outfile) {
		cout << "how many days of steps do you have?" << endl; 
		cin >> num_days; 
		while (days_count <= num_days) {
			cout << "input the number of steps for day " << days_count << endl;
			cin >> num_steps;
			outfile << num_steps << endl;
			days_count++;
		}
	}
	outfile.close(); 
	return 0;
}