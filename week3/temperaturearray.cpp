#include <iostream>
using namespace std; 

int main() {
	const int DAYS = 7; 
	int temps[DAYS] = { 93, 23, 56, 67, 94, 34, 94 };
	int total = 0;
	//for (int &temp : temps)  
	//	cin >> temp; 
	for (int temp : temps)
		total += temp; 
	cout << total << endl;
	cout << static_cast<float>(total) / DAYS << endl; 
	int max = 0; 
	for (int temp : temps)
		if (temp > max)
			max = temp; 
	cout << max << endl;

	int min = temps[0]; 
	for (int temp : temps)
		if (temp < min)
			min = temp; 
	cout << min << endl; 


	return 0;
}