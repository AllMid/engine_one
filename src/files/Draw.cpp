#include "Engine.h"
 
void Engine::draw()
{
    // Стираем предыдущий кадр
    m_Window.clear(Color::White);
 
    // Отрисовываем фон
    m_Window.draw(m_BackgroundSprite);
    // И Боба
    m_Window.draw(m_Man.getSprite());
 
    // Отображаем все, что нарисовали
    m_Window.display();
}