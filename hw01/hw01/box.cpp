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

Box::Box(int width, int height) :
	_height(height),
	_width(width)
{}

Box::Box( int width, int height, bool type) :
	_height(height),
	_width(width),
	_type(type)
{}

string Box::type() const {
	if (_type == true) {
		return "Filled";
	}
	else if (_type == false) {
		return "Hollow";
	}
	else {
		return "Hollow";
	}

}

void Box::print(ostringstream & ostream) const {
}