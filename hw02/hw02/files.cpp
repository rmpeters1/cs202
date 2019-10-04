#include "files.hpp"


int getIdFromFile(const string & filename,
	istringstream & istream, ostringstream & ostream) {
		
	std::ifstream fin(filename);
	string text;

	while (true) {
		fin >> text;
		
		if (!fin) {
			return -1;
			if (fin.eof()) {
				break;
			}
		}
	}
	
	return 0;
}

void numberChase(const string & filename, ostringstream & ostream) {
}