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
	out << "$" << m.getDollars() << "." << m.getCents();
	return out;
}


Money operator+(const Money& lhs, const Money& rhs) {
	int addedDollars = lhs.getDollars() + rhs.getDollars();
	int addedCents = lhs.getCents() + rhs.getCents();
	return Money{ addedDollars, addedCents };
}
Money operator-(const Money& lhs, const Money& rhs) {
	auto negRhs{ rhs };
	negRhs._neg = !negRhs._neg;
	return lhs + negRhs;
}
Money operator*(Money lhs, const Money& rhs) {
	return lhs *= rhs;
}
Money operator/(Money lhs, const Money& rhs) {
	return lhs /= rhs;
}

bool operator<(const Money& lhs, const Money& rhs) {
	if (lhs._neg)
		lhs.getDollars *= -1;
	if (rhs._neg)
		rhs.getDollars *= -1;
	return lhs < rhs;
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