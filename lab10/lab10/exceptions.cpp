#include "exceptions.hpp"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <stdexcept>
using std::runtime_error;

void functionC() {
	throw runtime_error("Error");
}

void functionB() {
	House h;
	cout << "Starting functionB()" << endl;
	functionC();
	cout << "Ending functionB()" << endl;
}

void functionA() {
	try {
		functionB();
	}
	catch (const std::exception& e) {
		cout << "Caught an exception: " << e.what() << endl;
	}
	
	
}
int main() {
	cout << "Starting main()" << endl;
	functionA();
	cout << "Ended normally." << endl;
	return 0;
}