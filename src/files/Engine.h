#pragma once

#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>
#include<memory>
#include <iostream>
#include "Asset_manager.h"

class Engine
{

	Asset_manager manager;      // Менеджер ресурсов
	// Умный указатель на графическое окно 
	
    sf::RenderWindow window = sf::RenderWindow(sf::VideoMode({1024u, 768u}),
		L"first_engine_title", sf::State::Windowed);
	// Игровой фон в виде прямоугольника
	sf::RectangleShape background = sf::RectangleShape(sf::Vector2f(1280, 720));
	// Текстура прямоугольника
	sf::Texture background_texture;
	void player_input();
	// Метод обработки событий 
	void input();
	// Метод обновления переменных, свойств и методов 
	void update(sf::Time const & deltaTime);
	// Метод отрисовки объектов в графическом окне
	void draw();

public:
	// Конструктор
	Engine();
	// Метод запуска игрового цикла
	void run();

};