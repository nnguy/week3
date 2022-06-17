#include <iostream>
using namespace std; 

int main() {
	float quiz_grade = 0, total_grade = 0; 
	int num_of_quizzes = 0; 
	char response; 

	cout << "Enter your quiz grade and input -1 to end quiz input "; 
	cin >> quiz_grade; 
	while (quiz_grade != -1) {
		total_grade += quiz_grade;
		num_of_quizzes++;
		cout << "Input your next quiz grade or input -1 to end quiz input ";
		cin >> quiz_grade; 
	}
	cout << "Your total grade of " << num_of_quizzes << " quizzes is "<< total_grade << endl; 
	cout << "Your quiz average is " << total_grade / num_of_quizzes << endl;
	
	num_of_quizzes = 0, total_grade = 0;

	cout << "Do you want to enter a quiz grade? (Y or N) "; 
	cin >> response; 
	while (response == 'Y' || response == 'y') {
		cout << "Input your quiz grade "; 
		cin >> quiz_grade; 
		num_of_quizzes++; 
		cout << "Do you want to input another quiz grade? (Y or N) "; 
		cin >> response; 
	}

	cout << "Your total grade of " << num_of_quizzes << " quizzes is " << total_grade << endl;
	cout << "Your quiz average is " << total_grade / num_of_quizzes << endl;
}