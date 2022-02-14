#pragma once

#include <iostream>
#include <SDL.h>
#include <SDL_image.h>

class Game 
{
public:
	Game();
	~Game();

	void Init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen);
	
	void HandleEvents();
	void Update();
	void Render();
	void Clean();

	bool Running() { return isRunning; }

private:
	int cnt = 0;
	bool isRunning;
	SDL_Window* Window;
	SDL_Renderer* renderer;
};
