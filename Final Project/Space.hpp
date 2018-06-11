#pragma once
#include <string>
class Space
{
protected:
	Space* up;
	Space* down;
	Space* left;
	Space* right;

public:

	virtual void pickUp() = 0;
	virtual void solve() = 0;
	virtual void displayRoom() = 0;
	Space();
	~Space();
};

