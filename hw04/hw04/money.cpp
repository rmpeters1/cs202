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
int Money::getDollars() const {
	return _dollars;
}
void Money::setDollars(int dollars) {
	_dollars = dollars;
}
int Money::getCents() const {
	return _cents;
}
void Money::setCents(int cents) {
	_cents = cents;
}
double Money::getDollarAndCents() const {
	return _dollarAndCents;
}
void Money::setDollarAndCents(double dollarAndCents) {
	_dollarAndCents = dollarAndCents;
}
bool Money::isNegative() const {
	return _neg;
}
ostream& operator<<(ostream& out, const Money& m) {
	if (m.getDollarAndCents() > 0) {

		out << "$" << m.getDollarAndCents();
		std::cout << "$" << m.getDollarAndCents();
	}
	else if (m.getDollars() >= 0 || m.getCents() > 0) {
		if (m.getCents() < 10) {
			std::cout << "$" << m.getDollars() << ".0" << m.getCents();
			out << "$" << m.getDollars() << ".0" << m.getCents();
		}
		else {
			out << "$" << m.getDollars() << "." << m.getCents();
		}
	}
	return out;
}


Money operator+(const Money& lhs, const Money& rhs) {
	int addedDollars = lhs.getDollars() + rhs.getDollars();
	if (lhs.isNegative())
		addedDollars *= -1;
	int addedCents = lhs.getCents() + rhs.getCents();
	if (lhs.isNegative())
		addedDollars *= -1;
	std::cout << addedDollars << " " << addedCents << "HERE";
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
	return *this;
}
Money operator/(Money lhs, const Money& rhs) {
	return lhs /= rhs;
}
Money& Money::operator/=(const Money& rhs) {
	return *this;
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