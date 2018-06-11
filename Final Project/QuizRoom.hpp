#pragma once
#include "Space.hpp"

class QuizRoom : public Space
{
public:
	void solve(bool& solved, std::vector<Object>* bag);
	void displayRoom();
	void displayRoom(int type);
	QuizRoom();
	~QuizRoom();
};

