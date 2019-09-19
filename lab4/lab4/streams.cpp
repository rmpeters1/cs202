#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <fstream>
using std::ifstream;
using std::ofstream;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;

int main() {
	ifstream fin("output.txt");
	string s1;
	fin >> s1;
	cout << s1 << endl;
	string words;
	cout << "Please type a string: " << endl;
	getline(cin, words);
	int wordamnt;
	cout << "Please type a number: " << endl;
	cin >> wordamnt;
	

}