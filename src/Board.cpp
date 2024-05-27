#include "../include/Board.hpp"

Board::Board(int width, int height)
    : width(width), height(height)
{
    grid.resize(height, std::vector<int>(width, 0));
    block.setSize(sf::Vector2f(30.f, 30.f));
    block.setFillColor(sf::Color::Black);
}

void Board::draw(sf::RenderWindow &window)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            block.setPosition(j * 30.f, i * 30.f);
            block.setOutlineThickness(1.f);
            block.setOutlineColor(sf::Color::White);
            window.draw(block);
        }
    }
}