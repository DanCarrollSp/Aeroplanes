//Name: Daniel Carroll
//Login: C00272187
//Date: 2/2/22
//Program: Airplane game
//Time taken: N/A
//Known bugs
// None


#ifndef GAME_HPP
#define GAME_HPP
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the endif at the bottom
#include <SFML/Graphics.hpp>

class Game
{
public:
	Game();
	~Game();
	/// main method for game
	void run();

private:

	void processEvents();
	void processKeys(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();
	
	void setupFontAndText();
	void setupSprite();

	sf::RenderWindow m_window; // main SFML window
	sf::Font m_ArialBlackfont; // font used by message
	sf::Text m_welcomeMessage; // text used for message on screen
	sf::Texture m_logoTexture; // texture used for sfml logo
	sf::Sprite m_logoSprite; // sprite used for sfml logo
	bool m_exitGame; // control exiting game

};

#endif // !GAME_HPP

