#ifndef BOXES3_HPP_
#define BOXES3_HPP_
class Box {
public:
	Box(int width, int height) :
		_height(height),
		_width(width)
	{}
	int getWidth() const {
		return _width;
	}
	void setWidth(int width) {
		_width = width;
	}
	int getHeight() const {
		return _height;
	}
	void setHeight(int height) {
		_height = height;
	}
private:
	int _height;
	int _width;
};
#endif //!BOXES3_HPP_