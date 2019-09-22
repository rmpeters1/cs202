#ifndef BOX_HPP_
#define BOX_HPP_

#include <iostream>

class Box {
public:
	Box();
	Box(int height, int width);


	int getHeight() const;
	void setHeight();
	int getWidth() const;
	void setWidth();
private:
	int _height;
	int _width;

};

#endif // !BOX_HPP_
