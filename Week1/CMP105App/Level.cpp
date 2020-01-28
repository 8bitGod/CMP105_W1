#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	

	// initialise game objects
	rect.setSize(sf::Vector2f(100, 100));
	rect.setPosition(100, 100);
	rect.setFillColor(sf::Color::Red);

	rect2.setSize(sf::Vector2f(80, 80));
	rect2.setPosition(110, 110);
	rect2.setFillColor(sf::Color::Green);

	rect3.setSize(sf::Vector2f(60, 60));
	rect3.setPosition(120, 120);
	rect3.setFillColor(sf::Color::Blue);


	//
	/*
	font.loadFromFile("arial.ttf");

	title.setCharacterSize(20);
	title.setString("Hello World!");
	title.setPosition(300, 60);
	title.setFillColor(sf::Color::Red);
	title.setFont(font);
	title.setStyle(sf::Text::Bold | sf::Text::Underlined); */
}

Level::~Level()
{

}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	sf::Vector2u pos =	window->getSize();
	rect3.setPosition((pos.x - 300), (pos.y - 400));
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(rect);
	window->draw(rect2);
	window->draw(rect3);
	//window->draw(title);
	
	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}