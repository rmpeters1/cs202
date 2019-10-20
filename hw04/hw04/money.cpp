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
//Rational operator+(const Rational& lhs, const Rational& rhs) {
//	int firstPart = lhs.getNumerator() * rhs.getDenominator();
//
//	if (lhs.isNegative())
//		firstPart *= -1;
//
//	int secondPart = lhs.getDenominator() * rhs.getNumerator();
//
//	if (rhs.isNegative())
//		secondPart *= -1;
//
//	return Rational{
//		firstPart + secondPart,
//		static_cast<int>(lhs.getDenominator() * rhs.getDenominator()) };
//}
Money operator+(const Money& lhs, const Money& rhs) {
	int addedDollars = lhs.getDollars() + rhs.getDollars();

	int addedCents = lhs.getCents() + rhs.getCents();
	return Money{ addedDollars, addedCents };
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