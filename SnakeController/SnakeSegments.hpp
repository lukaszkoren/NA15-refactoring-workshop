#pragma once

#include <list>

#include "SnakeInterface.hpp"
#include "SnakePosition.hpp"

namespace Snake
{

class Segments
{
public:
    Segments(Direction direction);

    void addSegment(Position);
    bool isCollision(Position) const;
    void addHead(Position);
    Position nextHead() const;
    Position removeTail();
    void updateDirection(Direction newDirection);
private:
    Direction m_headDirection;
    std::list<Position> m_segments;
};

} // namespace Snake
