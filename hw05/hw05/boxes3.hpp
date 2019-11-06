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
#include <memory>
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
	virtual string type() const = 0;

protected:
	int _height;
	int _width;
};

class FilledBox : public Box {
public:
	FilledBox() : Box(1, 1) {}
	FilledBox(int width, int height) :
		Box(width, height) {}
	void print(ostream& os) const override;
	string type() const override;

};

class HollowBox : public Box {
public:
	HollowBox() : Box(1, 1) {}
	HollowBox(int width, int height) :
		Box(width, height) {}
	void print(ostream& os)const override;
	string type() const override;

};

class CheckeredBox : public Box {
public:
	CheckeredBox() : Box(1, 1) {}
	CheckeredBox(int width, int height) :
		Box(width, height) {}
	void print(ostream& os)const override;
	string type() const override;

};
ostream& operator<<(ostream& os, const Box& b);

unique_ptr<Box> boxFactory(char c, int w, int h);
#endif //!BOXES3_HPP_