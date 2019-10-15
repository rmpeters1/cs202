#include "money.hpp"

Money::Money() : _dollars(0), _cents(0), _dollarAndCents(0) {}
Money::Money(int dollars, int cents) :
	_dollars(dollars),
	_cents(cents) {}
Money::Money(double dollarAndCents) :
	_dollarAndCents(dollarAndCents) {}
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

ostream& operator<<(ostream& out, const Money& m) {
	out << "$" << m.getDollars() << "." << m.getCents();
	return out;
}