#include "box.hpp"

int Box::getHeight() const {
	return _height;e
}

void Box::setHeight(int height) {
	_height = height;
}

Box::Box() : _height(1), _width(1) {}

Box::Box(int height, int width) : _height(height), _width(width) {}