#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

int main() {
double total = 0;
int sum = 0;
double average;
	std::ifstream fin("data.dat", std::ios::binary);
	
		fin.seekg(sizeof(int));
		
		while (true) {
			int x;
		fin.read(reinterpret_cast<char*>(&x), sizeof(int));
		cout << x << endl;
		sum += x;
		total++;
		
		if (!fin) {
			if (fin.eof()) {
				break;

			}
		}
		
	}
		 
		average = sum / total;
		cout << "the total # of integers is " << total << endl;
		cout << "the sum of the numbers is " <<  sum << endl;
		cout << "the average of the numbers is " << average;
	return 0;
}