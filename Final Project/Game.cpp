#include "Game.hpp"

Game::play()
{
	qRoom = new QuizRoom();
	bRoom = new BunnyCaveRoom();
	fRoom = new FreebieRoom;
	eRoom1 = new EmptyRoom(1);
	eRoom2 = new EmptyRoom(2); 
	eRoom3 = new EmptyRoom(3);
	exitRoom = new ExitRoom(); 

}

Game::Game()
{
}

Game::~Game()
{
}
