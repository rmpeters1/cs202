#include "complex.hpp"

int main() {
	std::cout << 1 << "+" << Complex(2, 3) << std::endl;
	Complex c1{ 2,0 };
	Complex c2{ 2,0 };
	std::cout << c1 + c2;
}