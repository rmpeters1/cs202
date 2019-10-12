/**
* @file     box.cpp
* @author   Rose Peters
* @date     October 9, 2019
* Dr. Chris Hartman
*/

#include "box.hpp"

int Box::boxcount = 0;

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

Box::Box() : _height(1), _width(1), _type(FILLED) {
	boxcount++;
}

Box::Box(int width, int height) :
	_height(height),
	_width(width)
{
	boxcount++;
}

Box::Box(int width, int height, Boxtype type) :
	_height(height),
	_width(width),
	_type(type)
{
	boxcount++;
}
Box::Box(const Box& b) :
	_width(b._width),
	_height(b._height),
	_type(b._type)
{
	boxcount++;
}
Box::~Box() {
	boxcount = 1;
}

string Box::type() const {
	if (FILLED) {
		return "FILLED";
	}
	else if (HOLLOW) {
		return "HOLLOW";
	}
	else if (CHECKERED) {
		return "CHECKERED";
	}

}

int Box::howMany() {
	return boxcount;
}

ostringstream& operator<<(ostringstream& out, const Box& b) {

	for (int border = 0; border < b.getWidth(); border++) {
		if (b.type() == "CHECKERED") {
			out << "a" << endl;
		}
		if (b.getWidth() != 1 && b.getHeight() != 1) {
			out << "x";

		}
		//If border == 1, out << x, if border == 2, out " "
	}

	if (b.getWidth() != 1 && b.getHeight() != 1) out << endl;
	for (int line = 0; line < b.getHeight() - 2; line++) {
		for (int col = 0; col < 1; col++) {
			out << "x";
		}
		for (int row = 0; row < b.getWidth() - 2; row++) {
			if (b.type() == "FILLED") {
				out << "x";
			}
			else if (b.type() == "HOLLOW") {
				out << " ";
			}
		}
		for (int col = 0; col < 1; col++) {
			out << "x";
		}
		out << endl;
	}
	for (int border = 0; border < b.getWidth(); border++) {
		out << "x";
	}
	out << endl;
	cout << out.str();
	return out;
}

//void Box::print(ostringstream& ostream) const {

	//for (int border = 0; border < _width; border++) {
	//	if (_width != 1 && _height != 1) {
	//		ostream << "x";
	//	}
	//}
	//if (_width != 1 && _height != 1) ostream << endl;
	//for (int line = 0; line < _height - 2; line++) {
	//	for (int col = 0; col < 1; col++) {
	//		ostream << "x";
	//	}
	//	for (int row = 0; row < _width - 2; row++) {
	//		if (_type == FILLED) {
	//			ostream << "x";
	//		}
	//		/*else if (_type) {
	//			ostream << "x";
	//		}*/
	//		else {
	//			ostream << " ";
	//		}
	//	}
	//	for (int col = 0; col < 1; col++) {
	//		ostream << "x";
	//	}
	//	ostream << endl;
	//}
	//for (int border = 0; border < _width; border++) {
	//	ostream << "x";
	//}
	//ostream << endl;

	////cout << ostream.str();

//}