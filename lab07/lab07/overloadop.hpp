#pragma once
#ifndef OVERLOADOP_HPP_
#define OVERLOADOP_HPP_

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

	friend House operator+(House h1, const House& h2);

	
private:
	int _height;
};
std::ostream& operator<<(std::ostream& out, const House& h);


#endif /* OVERLOADOP_HPP_ */