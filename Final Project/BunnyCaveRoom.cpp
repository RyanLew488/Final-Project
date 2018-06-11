#include <iostream>
#include "BunnyCaveRoom.hpp"


void PuzzleRoom::solve(bool& bSolved)
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
			if (choice == 3)
			{
				std::cout << "You count to 3 and throw the grenade into the bunny's lair it explodes and kills the bunny!\n";
				bSolved = true;
			}
			else
			{
				std::cout << "The priests hurridly grab the grenade from your hands and replace the pin\n";
			}
		}
	}
}

PuzzleRoom::PuzzleRoom()
{
}


PuzzleRoom::~PuzzleRoom()
{
}
