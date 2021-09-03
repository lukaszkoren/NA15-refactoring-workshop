#pragma once

#include <utility>
#include "SnakePosition.hpp"

namespace Snake
{

class Dimension{
    public:
    int x;
    int y;
    Dimension(int x, int y): x(x), y(y){};
};

class World
{
public:
    World(Dimension dimension, Position food);

    void setFoodPosition(Position position);
    Position getFoodPosition() const;

    bool contains(Position) const;

private:
    Position m_foodPosition;
    Dimension m_dimension;
};

} // namespace Snake
