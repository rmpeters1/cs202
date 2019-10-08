#include "lab9.hpp"

int Stat::getNum() {
	return number;
}

int Stat::number = 10;

void stat() {
	static int x = 2;
	cout << x++ + 3 << std::endl;
}