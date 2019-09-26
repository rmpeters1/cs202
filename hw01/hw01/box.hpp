/**
* @file     box.hpp
* @author   Rose Peters
* @date     September 26, 2019
* Dr. Chris Hartman
*/

#ifndef BOX_HPP_
#define BOX_HPP_

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
#include <sstream>
using std::ostringstream;

class Box {
public:
	Box();
	Box( int width, int height);
	Box( int width, int height, bool type);
	


	int getHeight() const;
	void setHeight(int height);
	int getWidth() const;
	void setWidth(int width);
	string type() const;
	void print(ostringstream & ostream) const;

private:
	int _height;
	int _width;
	bool _type;
};

#endif // !BOX_HPP_
