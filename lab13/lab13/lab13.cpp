#include<iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

template<typename T>
T twice(T x) {
	return x + x;
}
string twice(const char*x) {
	string a(x);
	return a+a;
}


int main() {
	cout << twice(2) << endl;
	cout << twice(2.3) << endl;
	cout << twice(string("Hello")) << endl;
	const char* x = "world";
	cout << twice(x) << endl;
}