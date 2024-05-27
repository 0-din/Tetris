#ifndef BOARD_HPP
#define BOARD_HPP

#include <SFML/Graphics.hpp>
#include <vector>

class Board
{
public:
    Board(int width, int height);
    void draw(sf::RenderWindow &window);

private:
    int width, height;
    std::vector<std::vector<int>> grid;
    sf::RectangleShape block;
};

#endif