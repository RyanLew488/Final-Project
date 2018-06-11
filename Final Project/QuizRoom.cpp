#include <iostream>
#include "QuizRoom.hpp"
#include "helperFunctions.hpp"

QuizRoom::QuizRoom()
{
}

void QuizRoom::solve(bool& qSolved, std::vector<Object>* bag)
{
	if (!qSolved)
	{
		bool correctAnswer = false;
		std::cout << "-----------------------------------------------\n";
		std::cout << "In front of you lies a console with a screen\n";
		std::cout << "The screen has a question with 4 answers on it\n";
		std::cout << "Below the screen are 4 buttons\n";
		std::cout << "-----------------------------------------------\n\n";
		while (!correctAnswer)
		{
			int choice = 0;
			std::cout << "How do you know she is a witch?\n\n";
			std::cout << "1: Throw her into the pond and see if she floats\n";
			std::cout << "2: See if she weighs as much as a duck\n";
			std::cout << "3: Sprinkle holy water on her\n";
			std::cout << "4: Ask her to cast a spell\n";
			std::cout << "TA HINT: It's answer 2 if you haven't watched Monty Python and the holy grail\n";
			std::cout << "After some deliberation you choose to hit button: ";
			choice = iRangeValid("",1, 4);

			if (choice == 2)
			{
				std::cout << "\nThe screen flashes green and a compartment opens up\n";
				std::cout << "You grab the duck\n";
				Object duck(3, "A duck");
				correctAnswer = true;
			}
			else
			{
				std::cout << "\nThe screen flashes red";
			}
		}
	}
	else
	{
		std::cout << "You have already solved this room \n";
	}
}

QuizRoom::~QuizRoom()
{
}
