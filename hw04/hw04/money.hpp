#ifndef MONEY_HPP_
#define MONEY_HPP_

#include <iostream>
using std::ostream;
#include <iomanip>

class Money {
public:
	Money();
	Money(int dollars, int cents);
	Money(double dollarsAndCents);

	unsigned int getDollars() const;
	unsigned int getCents() const;
	double getDollarAndCents() const;
	bool isNegative() const;

	friend Money operator-(const Money&, const Money&);
	friend bool operator<(const Money&, const Money&);
	friend bool operator==(const Money&, const Money&);

	Money& operator+=(const Money& rhs);
	Money& operator-=(const Money&);
	Money& operator*=(const Money&);
	Money& operator/=(const Money&);

private:
	bool _neg;
	unsigned int _dollars;
	unsigned int _cents;
	double _dollarAndCents;
};



bool operator!=(const Money&, const Money&);
bool operator<=(const Money&, const Money&);
bool operator>=(const Money&, const Money&);


Money operator+(const Money&, const Money&);
bool operator>(const Money&, const Money&);
Money operator*(Money, const Money&);
Money operator/(Money, const Money&);

ostream& operator<<(ostream& out, const Money& m);

#endif //!MONEY_HPP_
