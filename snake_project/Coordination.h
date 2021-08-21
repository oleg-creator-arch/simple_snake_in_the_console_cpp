#pragma once

struct CoordSnake {
	int x, y;
	CoordSnake() : x(0), y(0) {}
	CoordSnake(int _x, int _y) : x(_x), y(_y) {}
	CoordSnake& operator +=(const CoordSnake& op);
};

CoordSnake operator +(const CoordSnake& op1, const CoordSnake& op2);
bool operator ==(const CoordSnake& op1, const CoordSnake& op2);