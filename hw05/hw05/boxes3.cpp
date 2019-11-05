/* boxes3.cpp
*  Rose Peters
* 11 November 2019
* Dr. Chris Hartman
*/
#include "boxes3.hpp"

class Filled : public Box {
public:

	void print(ostream& os) const override {}
	string type(string boxType) const override {}

};

class Hollow : public Box {
public:
	void print(ostream& os) const override {}
	string type(string boxType) const override {}
};

class Checkered : public Box {
public:
	void print(ostream& os) const override {}
	string type(string boxType) const override {}
};