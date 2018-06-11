#include <iostream>
#include "FreebieRoom.hpp"

void FreebieRoom::displayRoom
{
	std::cout << "Here is your location on the map\n";
	std::cout << "[ ][ ][ ][ ]\n";
	std::cout << "[ ][ ][x]   \n";
	std::cout << "[ ]         \n";

}
void FreebieRoom::solve(std::vector<Object>* bag)
{
	bool coconutFound = false;
	if (!coconutFound)
	{
		std::cout << "On the ground you find two coconut halves, you pick them up\n";
		Object coconuts(2, "Two Coconut halves");
		bag->push_back(coconuts);
		coconutFound = true;
	}
	else
	{
		std::cout << "There is nothing in this room\n";
	}
}

FreebieRoom::FreebieRoom()
{

}

FreebieRoom::~FreebieRoom()
{

}
