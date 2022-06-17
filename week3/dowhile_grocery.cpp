#include <iostream>
using namespace std; 

int main() {
	char response; 
	double item_price, total_price = 0; 
	int item_count = 0;
	do {
		cout << "Enter your price "; 
		cin >> item_price; 
		total_price += item_price;
		item_count++; 
		cout << "do you have another item (Y or N) ";
		cin >> response;
	} while (response == 'y' || response == 'Y'); 
	cout << total_price << endl;
	cout << item_count << endl; 
	return 0; 
}