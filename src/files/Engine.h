#pragma once

#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>
#include<memory>

class Engine
{
	// Умный указатель на графическое окно 
	
    sf::RenderWindow window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}),
		L"Пчела на работе", sf::Style::Default);
	// Игровой фон в виде прямоугольника
	sf::RectangleShape background = sf::RectangleShape(sf::Vector2f(1280, 720));
	// Текстура прямоугольника
	sf::Texture background_texture;
	// Метод обработки событий 
	void input();
	// Метод обновления переменных, свойств и методов 
	void update(sf::Time const & deltaTime);
	// Метод отрисовки объектов в графическом окне
	void draw();

public:
	// Конструктор
	Engine(){};
	// Метод запуска игрового цикла
	void run(){};

};