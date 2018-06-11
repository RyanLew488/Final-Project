#pragma once
#include "Space.hpp"
class FreebieRoom : public Space
{
public:
	void displayRoom();
	void solve(bool& fSolved);
	FreebieRoom();
	~FreebieRoom();

};

