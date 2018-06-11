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

	virtual void solve(bool& solved, std::vector<Object>* bag) = 0;
	virtual void displayRoom() = 0;
	virtual void displayRoom(int type) = 0;
	void setPointers(Space* up, Space* down, Space* right, Space* left);
	Space();
	~Space();
};

