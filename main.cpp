#include <iostream>
#include <SFML/Graphics.hpp>
#include "include/Board.hpp"
#include "include/Tetromino.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Tetris");

    Board board(10, 20);

    std::vector<Tetromino> figures =
        {
            Tetromino(sf::Color::Red, {{1, 1, 1, 1}}, 5, 0),
            Tetromino(sf::Color::Red, {{1, 1}, {1, 1}}, 5, 0),
            Tetromino(sf::Color::Red, {{0, 0, 1}, {1, 1, 1}}, 5, 0),
            Tetromino(sf::Color::Red, {{0, 1, 1}, {1, 1, 0}}, 5, 0),
            Tetromino(sf::Color::Red, {{1, 1, 1}, {0, 1, 0}}, 5, 0),
        };

    srand(time(NULL));
    int rndTetromino = rand() % 5 + 1;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            Tetromino tetromino = figures[rndTetromino];

            if (event.type == sf::Event::Closed)
                window.close();
            else if (event.type == sf::Event::KeyPressed)
            {
                if (event.key.code == sf::Keyboard::Left)
                {
                }
                else if (event.key.code == sf::Keyboard::Right)
                {
                }
                else if (event.key.code == sf::Keyboard::Up)
                {
                }
                else if (event.key.code == sf::Keyboard::Down)
                {
                }
            }
        }

        window.clear();
        board.draw(window);

        figures[fig].draw(window);

        window.display();
    }

    return 0;
}