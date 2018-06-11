#pragma once
#include "Space.hpp"

class BunnyCaveRoom : public Space
{
public:
	void solve(bool& bSolved, std::vector<Object>* bag);
	void displayRoom();
	void displayRoom(int type);
	BunnyCaveRoom();
	~BunnyCaveRoom();
};

