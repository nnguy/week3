#ifndef PLAYER_H
#define PLAYER_H

#include <string> 
#include <iostream>

class Player {
private:
	std::string name;
	int score;

public:
	void setName(std::string);
	void setScore(int);
	std::string getName();
	int getScore();

};

#endif // !PLAYER_H


