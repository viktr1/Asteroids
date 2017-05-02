#pragma once

#include <SFML/Graphics.hpp>

class Game {
public:
	Game();
	~Game();
	int run();
	void quit();

private:
	void createWindow();
	sf::RenderWindow window;
	bool running;
	int lives;
};
