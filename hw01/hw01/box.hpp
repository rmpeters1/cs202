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
	
	void getHeight(int height) const;
	int setHeight();
	void getWidth(int width) const;
	int setWidth();
private:
	int _width;
	int _height;
}