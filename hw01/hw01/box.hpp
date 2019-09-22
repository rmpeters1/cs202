#ifndef BOX_HPP_
#define BOX_HPP_

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;

class Box {
public:
	Box();
	Box(int height, int width);
	Box(int height, int width, bool type);
	


	int getHeight() const;
	void setHeight(int height);
	int getWidth() const;
	void setWidth(int width);
	bool type(string typeChecker);
private:
	int _height;
	int _width;

};

#endif // !BOX_HPP_
