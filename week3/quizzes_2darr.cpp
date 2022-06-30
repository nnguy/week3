#include <iostream> 
using namespace std; 

const int STUDENTS = 5; 
const int QUIZZES = 4; 
const int COLS = 4; 

void print2darr(int[][COLS], int); 

int main() {
	int quizGrades[STUDENTS][QUIZZES]; 
	for (int i = 0; i < STUDENTS; i++) {
		for (int j = 0; j < QUIZZES; j++){
			cout << "Enter the grade of the quiz " << j + 1 << " for student " << i + 1 << " ";
			cin >> quizGrades[i][j]; 
		}
		 
	}
	print2darr(quizGrades, STUDENTS);
	return 0; 
}

void print2darr(int arr [][COLS], int rows) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < COLS; j++)
			cout << arr[i][j]; 
		cout << endl; 
	}

}