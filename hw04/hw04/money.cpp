/**
* @file     money.cpp
* @author   Rose Peters
* @date     October 15, 2019
* Dr. Chris Hartman
*/
#include "money.hpp"

Money::Money() : _dollars(0), _cents(0), _dollarAndCents(0) {}
Money::Money(int dollars, int cents) :
	_dollars(dollars),
	_cents(cents) {
}
Money::Money(double dollarAndCents) :
	_dollarAndCents(dollarAndCents) {
	if (dollarAndCents < 0) {
		_dollarAndCents = -dollarAndCents;
		_neg = true;
	}
	else {
		_dollarAndCents = dollarAndCents;
		_neg = false;
	}
}
unsigned int Money::getDollars() const {
	return _dollars;
}
unsigned int Money::getCents() const {
	return _cents;
}
double Money::getDollarAndCents() const {
	return _dollarAndCents;
}
bool Money::isNegative() const {
	return _neg;
}
ostream& operator<<(ostream& out, const Money& m) {
	if (m.getDollarAndCents() > 0) {
		if (m.isNegative()) {
			out << "-";
		}
		out << "$" << std::setprecision(3) << m.getDollarAndCents();
	}
	else if (m.getDollars() >= 0 || m.getCents() > 0) {
		if (m.getCents() < 10) {

			out << "$" << m.getDollars() << ".0" << m.getCents();
		}
		else {
			out << "$" << m.getDollars() << "." << m.getCents();
		}
	}
	return out;
}

Money operator+(const Money& lhs, const Money& rhs) {
	int firstPart = lhs.getDollars() + rhs.getDollars();
	int secondPart = lhs.getCents() + rhs.getCents();
	return { firstPart,secondPart };
}
Money& Money::operator+=(const Money& rhs) {
	return *this = *this + rhs;
}
Money operator-(const Money& lhs, const Money& rhs) {
	auto negRhs{ rhs };
	negRhs._neg = !negRhs._neg;
	return lhs + negRhs;
}
Money& Money::operator-=(const Money& rhs) {
	return *this = *this - rhs;
}
Money operator*(Money lhs, const Money& rhs) {
	return lhs *= rhs;
}
Money& Money::operator*=(const Money& rhs) {
	return *this = rhs._dollars * rhs._cents;
}
Money operator/(Money lhs, const Money& rhs) {
	return lhs /= rhs;
}
Money& Money::operator/=(const Money& rhs) {
	return *this = rhs._dollars / rhs._cents;
}
bool operator<(const Money& lhs, const Money& rhs) {
	return lhs.getDollars() < rhs.getDollars();
}

bool operator>(const Money& lhs, const Money& rhs) {
	return rhs < lhs;
}
bool operator<=(const Money& lhs, const Money& rhs) {
	return !(rhs < lhs);
}
bool operator>=(const Money& lhs, const Money& rhs) {
	return !(lhs < rhs);
}

bool operator==(const Money& lhs, const Money& rhs) {
	return lhs._dollars == rhs._dollars &&
		lhs._cents == rhs._cents &&
		lhs._neg == rhs._neg;
}
bool operator!=(const Money& lhs, const Money& rhs) {
	return !(lhs == rhs);
}