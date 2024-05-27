#ifndef TETROMINO_HPP
#define TETROMINO_HPP

#include <SFML/Graphics.hpp>
#include <vector>

class Tetromino {
public:
    Tetromino(sf::Color color, const std::vector<std::vector<int>>& shape);
    void draw(sf::RenderWindow& window);
    // Other member functions to handle movement, rotation, etc.

private:
    sf::Color color;
    std::vector<std::vector<int>> shape;
    sf::RectangleShape block;
};

#endif