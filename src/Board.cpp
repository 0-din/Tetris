#include "../include/Board.hpp"

Board::Board(int width, int height)
    : width(width), height(height)
{
    grid.resize(height, std::vector<int>(width, 0));
    block.setSize(sf::Vector2f(30.f, 30.f));
    block.setFillColor(sf::Color::White);
}

void Board::draw(sf::RenderWindow &window)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (grid[i][j] != 0)
            {
                block.setPosition(j * 30.f, i * 30.f);
                window.draw(block);
            }
        }
    }
}