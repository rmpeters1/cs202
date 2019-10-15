#ifndef MONEY_HPP_
#define MONEY_HPP_

class Money {
public:
	Money();

	int	getDollars() const;
	void setDollars();
	int getCents() const;
	void setCents();
	int getDollarAndCents();
	void setDollarAndCents();
private:
	int _dollars;
	int _cents;
	double _dollarAndCents;
};

#endif //!MONEY_HPP_
