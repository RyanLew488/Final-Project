#include "Game.hpp"

void Game::play()
{
	QuizRoom* qRoom = new QuizRoom();
	BunnyCaveRoom* bRoom = new BunnyCaveRoom();
	FreebieRoom* fRoom = new FreebieRoom;
	EmptyRoom* eRoom1 = new EmptyRoom(1);
	EmptyRoom* eRoom2 = new EmptyRoom(2); 
	EmptyRoom* eRoom3 = new EmptyRoom(3);
	ExitRoom* exitRoom = new ExitRoom(); 

}

Game::Game()
{
}

Game::~Game()
{
}
