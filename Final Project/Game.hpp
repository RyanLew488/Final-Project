#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "BunnyCaveRoom.hpp"
#include "EmptyRoom.hpp"
#include "ExitRoom.hpp"
#include "FreebieRoom.hpp"
#include "QuizRoom.hpp"
#include "Object.hpp"

class Game
{
private:
	std::vector<Object> bag;
public:
	play();
	Game();
	~Game();
};

