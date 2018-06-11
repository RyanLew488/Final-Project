#pragma once
#include "Space.hpp"

class FreebieRoom : public Space
{
public:
	void displayRoom();
	void solve(bool& solved, std::vector<Object>* bag);
	void displayRoom(int type);
	FreebieRoom();
	~FreebieRoom();

};

