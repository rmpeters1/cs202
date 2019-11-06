/* boxes3.cpp
*  Rose Peters
* 11 November 2019
* Dr. Chris Hartman
*/
#include "boxes3.hpp"

void FilledBox::print(ostream& os)const {

	for (int border = 0; border < _width; border++) {
		if (_width != 1 && _height != 1) {
			os << "x";
		}
	}
	if (_width != 1 && _height != 1)
		os << endl;
	for (int line = 0; line < _height - 2; line++) {
		for (int col = 0; col < 1; col++) {
			os << "x";
		}
		for (int row = 0; row < _width - 2; row++) {

			os << "x";
		}
		for (int col = 0; col < 1; col++) {
			os << "x";
		}
		os << endl;
	}
	for (int border = 0; border < _width; border++) {
		os << "x";
	}
	os << endl;
}
string FilledBox::type() const { return "Filled"; }

void HollowBox::print(ostream& os)const {
	
	for (int border = 0; border < _width; border++) {
		if (_width != 1 && _height != 1) {
			os << "x";
			std::cout << "x";
		}
	}
	if (_width != 1 && _height != 1)
		os << endl;
	std::cout << endl;
	for (int line = 0; line < _height - 2; line++) {
		for (int col = 0; col < 1; col++) {
			os << "x";
			std::cout << "x";
		}
		for (int row = 0; row < _width - 2; row++) {

			os << "x";
			std::cout << " ";
		}
		for (int col = 0; col < 1; col++) {
			os << "x";
			std::cout << "x";
		}
		os << endl;
		std::cout << endl;
	}
	for (int border = 0; border < _width; border++) {
		os << "x";
		std::cout << "x";
	}
	os << endl;
	std::cout << endl;
}
string HollowBox::type() const { return "Hollow"; }

void CheckeredBox::print(ostream& os)const {
}
string CheckeredBox::type() const { return "Checkered"; }

unique_ptr<Box> boxFactory(char c, int w, int h) {
	unique_ptr<Box> P;
	return P;
}

ostream& operator<<(ostream& os, const Box& b)
{
	b.print(os);
	return os;
}