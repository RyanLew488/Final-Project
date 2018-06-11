#pragma once
#include "Space.hpp"

class BunnyCaveRoom : public Space
{
public:
	void solve(bool& bSolved, std::vector<Object>* bag);
	BunnyCaveRoom();
	~BunnyCaveRoom();
};

