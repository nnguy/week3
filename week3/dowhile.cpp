#include <iostream>
using namespace std; 

int main() {
	float price = 0, total_price = 0;
	int num_of_items = -1; 

	do {
		total_price += price;
		num_of_items++; 
		cout << "Enter your price or press -1 to finish "; 
		cin >> price; 
		
	} while (price != -1);
	cout << "num of items " << num_of_items << endl;
	return 0;
}