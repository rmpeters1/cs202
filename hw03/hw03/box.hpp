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
	Box(const Box& b);
	Box(int width, int height);
	Box(int width, int height, Boxtype type);
	~Box();


	int getHeight() const;
	void setHeight(int height);
	int getWidth() const;
	void setWidth(int width);

	/*
	* Reads a string from user input
	* @returns given string
	*/
	string type() const;

	/*
	* Gets the current amount of box objects that currently exist
	* @returns amount of box objects that currently exist
	*/
	static int howMany();


private:
	Boxtype _type;
	int _height;
	int _width;
	static int boxcount;
};

/*
* Draws the box to the ostream, prints newline at the end of each line
* @returns ostream output
*/
ostringstream& operator<<(ostringstream& out, const Box& b);

#endif //!BOX_HPP_