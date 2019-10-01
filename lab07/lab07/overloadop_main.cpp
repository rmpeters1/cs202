#include "overloadop.hpp"

int main() {
	const House h{ 2 };

	cout << h << endl;

	House h2{ 3 };

	cout << h + h2 << endl;
}
