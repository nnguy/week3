#include <iostream>
#include <fstream>
using namespace std; 

int x = 5; 
int main() {
	ifstream infile("lottoNumbers.txt"); 
	int num1, num2, num3, num4, num5, num6, num_tickets=0, sum = 0; 

	if (infile) {
		while (infile >> num1) {

			//infile >> num2 >> num3 >> num4 >> num5 >> num6; 
			////cout << num1 << " " << num2 << " " << num3 << " " << num4 << " " << num5 << " " << num6 << endl;
			sum += num1;
			num_tickets++;

		}

	}
	else
		cout << "error opening file " << endl; 
	cout << "number of tickets: " << num_tickets << " and the total is " << sum << endl;
	
	return 0; 
}