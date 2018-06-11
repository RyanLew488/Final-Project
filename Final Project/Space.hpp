#pragma once
#include <string>
#include <vector>
#include "helperFunctions.hpp"
#include "Object.hpp"
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
	void setPointers(Space* up, Space* down, Space* right, Space* left);
	Space();
	~Space();
};

