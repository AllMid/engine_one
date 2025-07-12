#include "Man.h"

Man::Man()
{
    // Вписываем в переменную скорость Боба
    m_Speed = 200;
 
    // Связываем текстуру и спрайт
    m_Texture.loadFromFile("Man_image.png");
    m_Sprite.setTexture(m_Texture);     
 
    // Устанавливаем начальную позицию Боба в пикселях
    m_Position.x = 300;
    m_Position.y = 300;
}

// Делаем приватный спрайт доступным для функции draw()
Sprite Man::getSprite()
{
    return m_Sprite;
}
 
void Man::moveLeft()
{
    m_LeftPressed = true;
}
 
void Man::moveRight()
{
    m_RightPressed = true;
}
 
void Man::stopLeft()
{
    m_LeftPressed = false;
}
 
void Man::stopRight()
{
    m_RightPressed = false;
}
 
// Двигаем Боба на основании пользовательского ввода в этом кадре,
// прошедшего времени и скорости
void Man::update(float elapsedTime)
{
    if (m_RightPressed)
    {
        m_Position.x += m_Speed * elapsedTime;
    }
 
    if (m_LeftPressed)
    {
        m_Position.x -= m_Speed * elapsedTime;
    }
 
    // Теперь сдвигаем спрайт на новую позицию
    m_Sprite.setPosition(m_Position);   
 
}