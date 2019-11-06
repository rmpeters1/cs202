/* boxes3.hpp
*  Rose Peters
* 11 November 2019
* Dr. Chris Hartman
*/
#ifndef BOXES3_HPP_
#define BOXES3_HPP_

#include <iostream>
using std::ostream;
#include <string>
using std::string;
using std::unique_ptr;
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

	virtual void print(ostream& os) const = 0;
	virtual string type(string boxType) const = 0;
	
protected:
	int _height;
	int _width;
};

ostream& operator<<(ostream& os, const Box& b) {
	b.print(os);
	return os;
}

#endif //!BOXES3_HPP_