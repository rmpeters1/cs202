#ifndef EXCEPTIONS_HPP_
#define EXCEPTIONS_HPP_

#include <iostream>
using std::cout;
using std::endl;

class House {
public:
	House();
	House(int height);
	House(const House& h2);
	~House();
	int getHeight() const;
	void setHeight(int height);
private:
	int _height;
};
#endif /* EXCEPTIONS_HPP_ */