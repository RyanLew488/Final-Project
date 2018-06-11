#include <iostream>
#include "BunnyCaveRoom.hpp"


void BunnyCaveRoom::solve(bool& bSolved,std::vector<Object>* bag)
{
	if (bSolved)
	{
		int choice = 0;
		bool correctAnswer = false;
		std::cout << "You enter a room with a cave containing rabid white killer bunny!\n";
		std::cout << "A couple of priests approach you with a containing a golden hand grenade of Antioch\n";

		while (!correctAnswer)
		{
			std::cout << "You are handed the grenade and pull the pin\n";
			std::cout << "What do you count to?\n";
			std::cout << "1\n";
			std::cout << "1\n";
			std::cout << "3\n";
			std::cout << "4\n";
			std::cout << "5\n";
			choice = iRangeValid("", 1, 5);
			if (choice == 3)
			{
				std::cout << "You count to 3 and throw the grenade into the bunny's lair it explodes and kills the bunny!\n";
				bSolved = true;
				if (bag->size() < 2)
				{
					Object holyGrail(1, "The Holy Grail");
					bag->push_back(holyGrail);
					correctAnswer = true;
				}
				else
				{
					std::cout << "Your bag is full \n";
				}
			}
			else
			{
				std::cout << "The priests hurridly grab the grenade from your hands and replace the pin\n";
			}
		}
	}
}

BunnyCaveRoom::BunnyCaveRoom()
{
}


BunnyCaveRoom::~BunnyCaveRoom()
{
}
