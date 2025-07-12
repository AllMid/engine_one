#include <iostream>
#include <SFML/Window.hpp>
#include "Engine.h"

void Engine::input()
{
	// Объект события
	//sf::Event event_play;
	//Engine::player_input();

	while (const std::optional event = window.pollEvent())  // Присвоение отловленного события, объекту событий event_play
	{
		// Обработка события нажатия на клавишу Esc
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
        //(event_play.key.code == sf::Keyboard::Key::Escape) 
            { window.close(); }
        else if (event->is<sf::Event::Closed>()) 
            { window.close(); }
	}
}

void Engine::update(sf::Time const& deltaTime)
{

}

void Engine::draw()
{
	// Очистка графического окна
	window.clear(sf::Color::Black);
	// Отрисовка фона в графическом окне
	window.draw(background);
	// Вывод объектов в графическом окне
	window.display();
}

Engine::Engine()
{
	// Загрузка текстуры
	// background_texture.loadFromFile("../../../src/files/background_one.jpg");
	// Получение ссылки на текстуру для прямоугольника 
	// background.setTexture(&background_texture);

	background.setTexture(&Asset_manager::GetTexture("../../../src/files/background_one.jpg"));
}

void Engine::run()
{
	// Объявление переменной часы
	sf::Clock clock;
	// Цикл работает пока окно открыто
	while (window.isOpen())
	{
		// Текущее время присваиваем переменной времени dt
		sf::Time dt = clock.restart();  

		input();
		update(dt);
		draw();
	}
}