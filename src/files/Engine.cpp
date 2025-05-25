#include "Engine.h"
Engine::Engine()
{
    // Получаем разрешение экрана, создаем окно SFML и View
    /*Vector2f resolution;
    resolution.x = VideoMode::getDesktopMode().width;
    resolution.y = VideoMode::getDesktopMode().height;*/
 
    m_Window.create(sf::VideoMode::VideoMode({1024u, 768u}),
        "Simple Game Engine",
        State::Fullscreen);
    /*auto window = sf::RenderWindow(sf::VideoMode({1024u, 768u}), "CMake SFML Engine");*/
    m_Window.setFramerateLimit(144);
    // Загружаем фон в текстуру
    // Подготовьте изображение под ваш размер экрана в редакторе
    m_BackgroundTexture.loadFromFile("Background_one.jpg");
 
    // Связываем спрайт и текстуру
    m_BackgroundSprite.setTexture(m_BackgroundTexture);
 
}
 
void Engine::start()
{
    // Расчет времени
    Clock clock;
 
    while (m_Window.isOpen())
    {
        // Перезапускаем таймер и записываем отмеренное время в dt
        Time dt = clock.restart();
 
        float dtAsSeconds = dt.asSeconds();
 
        input();
        update(dtAsSeconds);
        draw();
    }
}