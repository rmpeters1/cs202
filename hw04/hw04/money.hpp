#ifndef MONEY_HPP_
#define MONEY_HPP_

class Money {
public:
	Money();
	Money(int dollars, int cents);
	Money(double dollarsAndCents);

	int	getDollars() const;
	void setDollars(int dollars);
	int getCents() const;
	void setCents(int cents);
	int getDollarAndCents() const;
	void setDollarAndCents(int dollarAndCents);


private:
	int _dollars;
	int _cents;
	double _dollarAndCents;
};

#endif //!MONEY_HPP_
