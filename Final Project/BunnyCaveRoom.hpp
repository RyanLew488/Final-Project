#pragma once
#include "Space.hpp"
class PuzzleRoom :
	public Space
{
public:
	void solve(bool& bSolved);
	PuzzleRoom();
	~PuzzleRoom();
};

