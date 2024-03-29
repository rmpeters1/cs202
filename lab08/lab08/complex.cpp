#include "complex.hpp"
using std::ostream;
Complex::Complex() : _real(0), _complex(0) {}
Complex::Complex(double real) : _real(real), _complex(0) {}
Complex::Complex(double real, double complex=0) : 
	_real(real), 
_complex(complex) {}

double Complex::getReal() const {
	return _real;
}
double Complex::getComplex() const {
	return _complex;
}
Complex& Complex::operator+=(const Complex& rhs) {
	_real += rhs._real;
	_complex += rhs._complex;
	return *this;
}

ostream& operator<<(ostream& out, const Complex& c) {
	out << c.getReal() << "+" << c.getComplex() << "i";
	return out;
}


Complex operator+(const Complex& lhs, const Complex& rhs) {
	Complex temp(lhs);
	temp += rhs;
	return temp;
}