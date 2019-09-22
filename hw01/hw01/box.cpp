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

Box::Box() : _height(1), _width(1), _type(true) {}

Box::Box(int height, int width) : 
	_height(height), 
	_width(width), 
	_type(true) 
{}

Box::Box(int height, int width, bool type) :
_height(height),
_width(width),
_type(type)
{}

string Box::type() {
	string typeChecker;
	return typeChecker; 
}

void Box::print(ostringstream & ostream) {
	cout << ostream.str();
}