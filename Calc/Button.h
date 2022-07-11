#pragma once
#include <iostream>
#include<SFML/Graphics.hpp>

class Button
{
private:
	sf::RectangleShape rectangle;
	sf::Font font;
	sf::Text text;
	int positionX = 0;
	int positionY = 0;
	bool status = false;
public:

	Button(float, float, std::string);
	void setPosition(float x, float y);
	sf::Text& getText();

	sf::RectangleShape& getButton();

};

