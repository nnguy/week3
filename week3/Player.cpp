#include <iostream>
#include <string>
#include "Player.h"

using namespace std; 

void Player::setName(string player_name) {
	name = player_name; 
}

void Player::setScore(int player_score) {
	score = player_score; 
}

string Player::getName()const {
	return name; 
}

int Player::getScore() const {
	return score; 
}