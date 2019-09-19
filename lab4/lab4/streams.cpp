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
	ofstream fout("output.txt");
	fout << "Hello";
	fout.close();
	ifstream fin("output.txt");
	string s1;
	fin >> s1;
	cout << s1 << endl;
	string words;
	cout << "Please type a string: " << endl;
	getline(cin, words);
	cout << words;
	int wordamnt;
	cout << "Please type a number: " << endl;
	cin >> wordamnt;
}