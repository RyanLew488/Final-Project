#pragma once
#include "Space.hpp"

class FreebieRoom : public Space
{
public:
	void displayRoom();
	void solve(std::vector<Object>* bag);
	FreebieRoom();
	~FreebieRoom();

};

