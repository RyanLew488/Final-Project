#include <iostream>
#include "FreebieRoom.hpp"

FreebieRoom::solve(bool &fSolved)
{
	if (!fSolved)
	{
		std::cout << "On the ground you find two coconut halves, you pick them up\n";
		fSolved = true;
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
