#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Box {
public:
	Box();
	Box(int width, int height);
	Box(const Box & height, const Box & width);
	~Box();
	void type();
	
	int getHeight(int height) const;
	void setHeight();
	int getWidth(int width) const;
	void setWidth();
private:
	int _width;
	int _height;
};