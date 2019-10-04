#ifndef COMPLEX_HPP_
#define COMPLEx_HPP_

#include <iostream>
class Complex {
public:
	Complex();
	Complex(double,double);
	double getReal() const;
	double getComplex() const;
	Complex& operator+=(const Complex& rhs);
private:
	double _real;
	double _complex;
};
std::ostream& operator<<(std::ostream&, const Complex&);
Complex operator+(const Complex&, const Complex&);
#endif //COMPLEX_HPP_