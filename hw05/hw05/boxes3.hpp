/* boxes3.hpp
*  Rose Peters
* 11 November 2019
* Dr. Chris Hartman
*/
#include <iostream>
using std::ostream;
#ifndef BOXES3_HPP_
#define BOXES3_HPP_
class Box {
public:
	Box(int width, int height) :
		_height(height),
		_width(width)
	{}
	int getWidth() const {
		return _width;
	}
	void setWidth(int width) {
		_width = width;
	}
	int getHeight() const {
		return _height;
	}
	void setHeight(int height) {
		_height = height;
	}

	ostream print(ostream& os) const {
		return os;
	}
private:
	int _height;
	int _width;
};

#endif //!BOXES3_HPP_