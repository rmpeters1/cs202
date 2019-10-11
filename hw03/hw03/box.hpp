/**
* @file     box.cpp
* @author   Rose Peters
* @date     October 9, 2019
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
	enum Boxtype { FILLED, HOLLOW, CHECKERED };
	Box();
	Box(int width, int height);
	Box(int width, int height, Boxtype type);



	int getHeight() const;
	void setHeight(int height);
	int getWidth() const;
	void setWidth(int width);

	string type() const;
	static int howMany();

	//void print(ostringstream& ostream) const;

private:
	Boxtype _type;
	int _height;
	int _width;
	static int boxcount;
};

ostringstream& operator<<(ostringstream& out, const Box& b);

#endif //!BOX_HPP_