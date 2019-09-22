#include "box.hpp"

int Box::getHeight() const {
	return _height;
}

Box::Box() : _height(1), _width(1) {}

Box::Box(int height, int width) : _height(height), _width(width) {}