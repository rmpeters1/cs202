#include "box.hpp"

int Box::getHeight() const {
	return _height;
}

void Box::setHeight(int height) {
	_height = height;
}

int Box::getWidth() const {
	return _width;
}

void Box::setWidth(int width) {
	_width = width;
}

Box::Box() : _height(1), _width(1) {}

Box::Box(int height, int width) : _height(height), _width(width) {}

Box::Box(int height, int width, bool type) {}

string type(string typeChecker) { return typeChecker; }

ostringstream print(ostringstream & ostream) {}