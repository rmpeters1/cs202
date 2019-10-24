/**
* @file     money.cpp
* @author   Rose Peters
* @date     October 15, 2019
* Dr. Chris Hartman
*/
#ifndef MONEY_HPP_
#define MONEY_HPP_

#include <iostream>
using std::ostream;
#include <string>
using std::string;
#include <iomanip>

class Money {
public:
	Money();
	Money(int dollars, int cents);
	Money(double dollarsAndCents);

	//returns value of _dollars
	unsigned int getDollars() const;

	//returns value of _cents
	unsigned int getCents() const;

	//returns value of double _dollarAndCents
	double getDollarAndCents() const;

	//returns value of _neg
	bool isNegative() const;

	friend Money operator-(const Money&, const Money&);
	friend bool operator<(const Money&, const Money&);
	friend bool operator==(const Money&, const Money&);

	Money& operator+=(const Money&);
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

ostream& operator<<(ostream&, const Money&);

#endif //!MONEY_HPP_
