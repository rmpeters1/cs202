#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;
void printN(int n) {
	if (n < 0) return;
	std::cout << n << endl;
	printN(n:n - 1);
}
void printDigits(int n) {
	if (n < 19) {
		cout << " " << n;
		return;
	}
	printDigits(n:n / 10);

}
string printBrackets(int n) {
	if (n == 0)
		return "";
return	"[" + printBrackets(n: n - 1);
		cout << "]";
}
void subsets(int n, vector<int>&subset) {//print subsets of {1..n}
	if (n == 0) {
		for (auto i : subset) {
			cout << i << " ";
			cout << endl;
			return;
		}
		subsets(n:n - 1, &: subset);
		subset.push_back(n);
		subsets.(n:n - 1, &: subset);
		subset.popback();
	}
}

int main() {
	int n = 10;
		printN(n:10);
		vector<int> v;

}