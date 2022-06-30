#include <iostream>
using namespace std; 

int main() {
	int x = 10; 
	int* y = &x; 
	int** z = &y; 
	int*** a = &z; 

	//stuff that prints the value 
	cout << *y << endl;
	cout << **z << endl; 
	cout << ***a << endl; 

	//assigning/copying stuff from a pointer

	int xx = *y; 
	int xy = **z; 
	int xz = ***a; 


	//changing the value of a variable using a pointer 
	*y = 5; 
	cout << *y << endl; //prints 5

	**z = 6; 
	cout << **z << endl; //prints 6

	***a = 7; 
	cout << ***a << endl; //prints 7 


	int num = 5; 
	int* ptr = &num; //this tells the pointer variable to point to num; without this statement, the pointer is not pointing at anything and line 35 won't work. 
	*ptr = num; //


	return 0; 
}