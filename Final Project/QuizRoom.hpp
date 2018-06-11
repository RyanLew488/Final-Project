#pragma once
#include "Space.hpp"

class QuizRoom : public Space
{
public:
	void solve(bool& Solved, std::vector<Object>* bag);
	QuizRoom();
	~QuizRoom();
};

