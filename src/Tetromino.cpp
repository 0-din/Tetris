#include "../include/Tetromino.hpp"

Tetromino::Tetromino(sf::Color color, const std::vector<std::vector<int>>& shape)
    : color(color), shape(shape) {
    block.setSize(sf::Vector2f(30.f, 30.f));
    block.setFillColor(color);
}

void Tetromino::draw(sf::RenderWindow &window)
{
    for (size_t i = 0; i < shape.size(); i++)
    {
        for (size_t j = 0; j < shape[i].size(); j++)
        {
            if(shape[i][j] != 0)
            {
                block.setPosition(j * 30.f, i * 30.f);
                window.draw(block);
            }
        }
    }
}