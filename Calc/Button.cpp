#include "Button.h"
#include "Calculator.h"
Button::Button(float width, float height, std::string name)
	:rectangle(sf::Vector2f(width, height))
{
    if (!font.loadFromFile("C:\\Users\\Взрослая академия\\Desktop\\Востриков\\Calc\\Calc\\resourses\\fonts\\arial.ttf"))
    {
        std::cout << "font not found";
    }
    text.setString(name);
    text.setFont(font);
    text.setFillColor(sf::Color::White);
    text.setCharacterSize(40);
    rectangle.setOutlineColor(sf::Color(20, 20, 20));
    rectangle.setOutlineThickness(6);
    rectangle.setFillColor(sf::Color(40, 40, 40));
}

void Button::setPosition(float x, float y)
{
    rectangle.setPosition(x, y);
    text.setPosition(x + 38, y + 22);

}

sf::Text& Button::getText()
{
    return text;
    // TODO: вставьте здесь оператор return
}



sf::RectangleShape& Button::getButton()
{
    return rectangle;
}
