#include <iostream>
#include <string>
#include "Player.h"

void Player::setName(std::string player_name) {
	name = player_name; 
}

void Player::setScore(int player_score) {
	score = player_score; 
}

std::string Player::getName() {
	return name; 
}

int Player::getScore() {
	return score; 
}