#pragma once
#include "Space.hpp"

class EmptyRoom : public Space
{
private:
	int roomNumber;
public:
	EmptyRoom(int roomNumber);
	~EmptyRoom();
	void solve();
};

