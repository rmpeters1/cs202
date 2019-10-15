#ifndef MONEY_HPP_
#define MONEY_HPP_

#include <iostream>
using std::ostream;

class Money {
public:
	Money();
	Money(int dollars, int cents);
	Money(double dollarsAndCents);

	int	getDollars() const;
	void setDollars(int dollars);
	int getCents() const;
	void setCents(int cents);
	double getDollarAndCents() const;
	void setDollarAndCents(double dollarAndCents);

	Money& operator==(const Money&);
	Money& operator!=(const Money&);
	Money& operator<=(const Money&);
	Money& operator>=(const Money&);
	Money& operator+=(const Money&);
	Money& operator-=(const Money&);
	Money& operator*=(const Money&);
	Money& operator/=(const Money&);
private:
	int _dollars;
	int _cents;
	double _dollarAndCents;
};



Money& operator<(const Money&, const Money&);
Money& operator>(const Money&, const Money&);
Money& operator+(const Money&, const Money&);
Money& operator-(const Money&, const Money&);
Money& operator*(const Money&, const Money&);
Money& operator/(const Money&, const Money&);

ostream& operator<<(ostream& out, const Money& m);

#endif //!MONEY_HPP_
