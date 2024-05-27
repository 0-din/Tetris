#include <SFML/Graphics.hpp>
#include "include/Board.hpp"
#include "include/Tetromino.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Tetris");

    Board board(10, 20);
    Tetromino tetromino(sf::Color::Red, {{1, 1, 1, 1}});


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        board.draw(window);
        tetromino.draw(window);
        window.display();
    }

    return 0;
}