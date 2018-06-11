#pragma once
#include "Space.hpp"

class ExitRoom :
	public Space
{
public:
	void solve(std::vector<Object> bag);
	ExitRoom();
	~ExitRoom();
};

