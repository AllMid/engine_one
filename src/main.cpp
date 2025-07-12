#include "files/Engine.h"
#include <iostream>

using namespace sf;

int main()
{
    // Создаём объект игровой движок
    Engine myGame;
    // Запускаем игровой движок
    myGame.run();
    std::cout << "end!";
    return 0;
}