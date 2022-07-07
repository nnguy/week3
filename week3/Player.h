#ifndef PLAYER_H
#define PLAYER_H

#include <string> 
#include <iostream>

using namespace std; 

class Player {
private:
	string name;
	int score;

public:
	void setName(std::string);
	void setScore(int);
	string getName()const;
	int getScore()const;

};

#endif // !PLAYER_H


