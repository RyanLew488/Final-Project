#pragma once
#include "Space.hpp"

class EmptyRoom : public Space
{
private:
	int roomNumber;
public:
	EmptyRoom(int roomNumber);
	~EmptyRoom();
	void displayRoom(int type);
	void displayRoom();
	void solve(bool& solved, std::vector<Object>* bag);
};

