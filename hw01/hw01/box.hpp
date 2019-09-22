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
	Box(int height, int width);
	Box(int height, int width, bool type);
	


	int getHeight() const;
	void setHeight(int height);
	int getWidth() const;
	void setWidth(int width);
	string type(string typeChecker);
	ostringstream print(ostringstream & ostream);

private:
	int _height;
	int _width;

};

#endif // !BOX_HPP_
