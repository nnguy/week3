/*This is a program that receives user input to calculate the total price of groceries.*/
#include <iostream>
#include <iomanip>
using namespace std; 

int main() {
	float total = 0, price = 0; 
	char response; 
	int num_of_items = 0; 

	cout << "Do you have an item to scan at the register (Y or N) "; 
	cin >> response; 
	while (response == 'Y' || response == 'y') {
		cout << "Please input the item price "; 
		cin >> price; 
		total += price;
		num_of_items++;
		cout << "Do you have another item? (Y or N)"; 
		cin.ignore(10, '\n');
		cin >> response; 
	}
	cout << "Your total is $" << setprecision(2) << fixed << showpoint << total << endl; 
	cout << "You purchased " << num_of_items << " items " << endl; 
	cout << "The average price is " << total / num_of_items << endl; 
}