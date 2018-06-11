#pragma once
#include "Space.hpp"

class ExitRoom :
	public Space
{
public:
	void solve(bool& solved, std::vector<Object>* bag);
	void displayRoom();
	void displayRoom(int type);
	ExitRoom();
	~ExitRoom();
};

