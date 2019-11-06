/* boxes3.cpp
*  Rose Peters
* 11 November 2019
* Dr. Chris Hartman
*/
#include "boxes3.hpp"

class Filled : public Box {
public:
	Filled() : Box(1, 1) {}
	Filled(int width, int height) :
		Box(width, height) {}
	void print(ostream& os) const override {}
	string type(string boxType) const override {}
	unique_ptr<Box> boxFactory(char c, int w, int h) {}
};

class Hollow : public Box {
public:
	Hollow() : Box(1, 1) {}
	Hollow(int width, int height) :
		Box(width, height) {}
	void print(ostream& os) const override {}
	string type(string boxType) const override {}
	unique_ptr<Box> boxFactory(char c, int w, int h) {

	}

};

class Checkered : public Box {
public:
	Checkered() : Box(1, 1) {}
	Checkered(int width, int height) :
		Box(width, height) {}
	void print(ostream& os) const override {}
	string type(string boxType) const override {}
	unique_ptr<Box> boxFactory(char c, int w, int h) {}

};