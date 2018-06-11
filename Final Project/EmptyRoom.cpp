#include <iostream>
#include "EmptyRoom.hpp"

void EmptyRoom::solve(bool& solved, std::vector<Object>* bag)
{
	std::cout << "You enter a empty room...There is nothing in here\n";
}

void EmptyRoom::displayRoom(int roomNum)
{
	switch (roomNum)
	{
		case 1:
		{
			std::cout << "Here is your location on the map\n";
			std::cout << "[x][ ][ ][ ]\n";
			std::cout << "[ ][ ][ ]   \n";
			std::cout << "[ ]         \n";
			break;
		}
		case 2:
		{
			std::cout << "Here is your location on the map\n";
			std::cout << "[ ][x][ ][ ]\n";
			std::cout << "[ ][ ][ ]   \n";
			std::cout << "[ ]         \n";
			break;
		}
		case 3:
		{
			std::cout << "Here is your location on the map\n";
			std::cout << "[ ][ ][x][ ]\n";
			std::cout << "[ ][ ][ ]   \n";
			std::cout << "[ ]         \n";
			break;
		}

	}
}

void EmptyRoom::displayRoom()
{
	//unused
}
EmptyRoom::EmptyRoom(int roomNumber)
{
	this->roomNumber = roomNumber;
}

EmptyRoom::~EmptyRoom()
{
}
