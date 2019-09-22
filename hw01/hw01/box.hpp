#ifndef BOX_HPP_
#define BOX_HPP_

#include <iostream>

class Box {
public:
	Box();
	Box(int height, int width);
	Box(int height, int width, bool type);

	int getHeight() const;
	void setHeight(int height);
	int getWidth() const;
	void setWidth(int width);
private:
	int _height;
	int _width;

};

#endif // !BOX_HPP_
