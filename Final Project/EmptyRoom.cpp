#include <iostream>
#include "EmptyRoom.hpp"

EmptyRoom::EmptyRoom(int roomNumber)
{
	this->roomNumber = roomNumber;
}

EmptyRoom::~EmptyRoom()
{
}

EmptyRoom::solve()
{
	std::cout << "You enter a empty room...There is nothing in here\n";
}