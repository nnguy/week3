#include <iostream>
#include <string> 
#include "Player.h"
using namespace std; 

void printPlayerInfo( Player& ); 
Player createPlayer(string name, int score); 
Player* createPlayer_ptr(string name, int score); 

int main() {
	Player player1; 
	player1.setName("Syed"); 
	player1.setScore(50); 
	printPlayerInfo(player1); 

	Player* player2 = nullptr; 
	player2 = new Player;
	(*player2).setName("Ken"); 
	player2->setScore(51); 
	printPlayerInfo(*player2); 

	delete player2;

	Player* player3 = nullptr; 
	player3 = createPlayer_ptr("Tom", 52); 
	
	//how do you call printplayerinfo on player3? - You need to dereference player3

	printPlayerInfo(*player3);

	delete player3;

	return 0; 

}

//when I remove const, it works but if I add const it doesn't work?
void printPlayerInfo( Player& p ) {
	cout << "Player name " << p.getName() << endl; 
	cout << "Player score " << p.getScore() << endl; 
}

void changePlayer(Player& p, string newName, int newScore) {
	p.setName(newName); 
	p.setScore(newScore);
}

Player createPlayer(string name, int score) {
	Player p; 
	p.setName(name); 
	p.setScore(score); 
	return p; 
}

Player* createPlayer_ptr(string name, int score) {
	Player* p = new Player; 
	p->setName(name); 
	p->setScore(score); 
	return p; 

}

//void printPlayerInfo(const Player& p) {
//	std::cout << "Player name " << p.getName() << std::endl;
//	std::cout << "Player score " << p.getScore() << std::endl;
//}

