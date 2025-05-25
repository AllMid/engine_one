#include "Engine.h"
#include <SFML/Window.hpp>
#include <SFML/Window/Keyboard.hpp>
 
void Engine::input()
{
    // Обрабатываем нажатие Escape
    if (Keyboard::isKeyPressed(Keyboard::Key::Escape))
    {
        m_Window.close();
    }
 
    // Обрабатываем нажатие клавиш движения
    if (Keyboard::isKeyPressed(Keyboard::Key::A))
    {
        m_Man.moveLeft();
    }
    else
    {
        m_Man.stopLeft();
    }
 
    if (Keyboard::isKeyPressed(Keyboard::Key::D))
    {
        m_Man.moveRight();
    }
    else
    {
        m_Man.stopRight();
    }                       
 
}