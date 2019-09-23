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

Box::Box(int width, int height, bool type) :
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
	for (int border = 0; border < _width; border++) {
		ostream << "x";
	}
	ostream << endl;
	for (int line = 0; line < _height - 2; line++) {

		for (int col = 0; col < 1; col++) {
			ostream << "x";
		}
		for (int row = 0; row < _width - 2; row++) {
			if (_type == true) {
				ostream << "x";
			}
			else {
				ostream << " ";
			}
		}
		for (int col = 0; col < 1; col++) {
			ostream << "x";
		}
		ostream << endl;
	}
	for (int border = 0; border < _width; border++) {
		ostream << "x";
	}
	ostream << endl;

	cout << ostream.str();
}