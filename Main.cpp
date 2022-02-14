#include <iostream>
#include <SDL.h>
#include "Game.h"
//TEXTURES ENGINE
Game* game = nullptr;


int main(int argc, char* args[])
{
	game = new Game();

	game->Init("CamsEngine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);

	while (game->Running())
	{
		game->HandleEvents();
		game->Update();
		game->Render();
	}

	game->Clean();
	return 0;
}

   

