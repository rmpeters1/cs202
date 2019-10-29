//: Person(a) //initializer
//class Building {
//public:
//	House() : _height(0) {}
//};
///*seboth(int _age =age; int _amnt = amnt; */
//class Mansion : public Building {
//
//};

#include <iostream>

class Person
{
public:

	Person() : _age(0)
	{
		std::cout << "Made a person with age " << _age << std::endl;
	}

	Person(int age) : _age(age)
	{
		std::cout << "Made a person with age " << _age << std::endl;
	}

	~Person()
	{
		std::cout << "Got rid of a person" << std::endl;
	}

	int getAge()
	{
		return _age;
	}

	void setAge(int age)
	{
		_age = age;
	}


protected:
	int _age;
};

class Cashier : public Person {
public:
	Cashier() : _totalSales(0) {
		std::cout << "Made a cashier with sales totaling " << _totalSales << std::endl;
	}
	Cashier(int age, int totalSales) :
		Person(age),
		_totalSales(totalSales) {
		std::cout << "Made a cashier with total sales " << _totalSales;
		std::cout << " age is " << _age << std::endl;
	}
	~Cashier() {
		std::cout << "Got rid of a cashier" << std::endl;
	}
private:
	int _totalSales;
};

int main()
{
	Person p(20);
	Cashier c;
	Cashier c1{ 33,900 };
}
