#include <iostream> 
#include <string>
using namespace std; 

//declare a struct for an employee 
struct Employee {
	string fname; 
	string lname; 
	int emplid; 
	int age; 
	double salary; 
};

//Write the function prototype 
void printEmployeeInfo(Employee); 

//declare a Employee and change the first name to Tim
int main() {
	Employee bestEmployee; 

	//Declare an employee using an initialization list
	Employee anotherEmployee = { "John", "Smith", 10001, 34 ,25000 }; 

	//Can you use an initialization list and omit some of the data? YES but you can only omit data from the end
	Employee athirdemployee = { "John", "Smith" }; 

	bestEmployee.fname = "Tim"; 
	bestEmployee.lname = "Cook"; 
	

	
	//prompt the user to input the age of the employee; 
	cout << "Enter the age of the employee " << endl; 
	cin >> bestEmployee.age; 

	//print the employee's first and last name; 

	cout << bestEmployee.fname << " " << bestEmployee.lname << endl;
	cout << "The age of " << bestEmployee.fname << " is " << bestEmployee.age; 
	
	//create an array of employees and initialize the first index 
	const int NUM_EMPLOYEES = 10; 
	Employee team[NUM_EMPLOYEES]; 
	team[0].fname = "Fictor"; 
	
	//create an array of employees and initialize the second index using an initializatio nlist 
	team[1] = { "Tommy", "Hilfiger" }; 

	//Call printEmployeeInfo on the first index of the Employee array
	printEmployeeInfo(team[0]); 

	
	Employee team[] = { {} };


	//create an Employee pointer to bestEmployee; 
	Employee* bemp = &bestEmployee; 
	
	//Use the employee pointer to edit the age of bestEmployee; 
	(*bemp).age = 69; 
	//The parentheses is needed because the . operator takes preference over the * operator
	// 
	//What is an equivalent expression to the above? 
	bemp->age = 69; 


	return 0;
}

//build a function that can print out all the imformation of an employee struct

void printEmployeeInfo(Employee x) {
	cout << x.fname << " " << x.lname << endl; 
}

//Note that when you are defining a function with a struct/class, because by default you pass by value, and pass by value makes a copy of the argument, pass by value with a struct can be space intensive so it is a better practice to pass by reference and add const before it to prevent bugs 

//void printEmployeeInfo(const Employee& x); 
