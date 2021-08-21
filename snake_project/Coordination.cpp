#include "Coordination.h"

CoordSnake& CoordSnake::operator +=(const CoordSnake& op) {
    x += op.x;
    y += op.y;
    return *this;
}

CoordSnake operator +(const CoordSnake& op1, const CoordSnake& op2) {
    return CoordSnake(op1.x + op2.x, op1.y + op2.y);
}

bool operator ==(const CoordSnake& op1, const CoordSnake& op2) {
    return op1.x == op2.x && op1.y == op2.y;
}