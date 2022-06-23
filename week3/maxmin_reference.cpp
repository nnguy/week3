#include <iostream>
using namespace std; 

void winnerloser(float, float, float&, float&); 

int main() {
	float p1, p2, winner, loser; 
	cout << "Input p1 and p2 scores " << endl; 
	cin >> p1 >> p2; 
	winnerloser(p1, p2, winner, loser);
	cout << "The winner's score was " << winner << " and the loser's score is " << loser << endl; 
	return 0; 
}

void winnerloser(float p1score, float p2score, float& winnerscore, float& loserscore) {
	if (p1score > p2score) {
		winnerscore = p1score;
		loserscore = p2score;
	}
	else {
		loserscore = p1score;
		winnerscore = p2score;
	}
}