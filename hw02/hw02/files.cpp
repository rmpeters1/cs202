#include "files.hpp"


int getIdFromFile(const string & filename,
	istringstream & istream, ostringstream & ostream) {
	
	string text;
	std::ifstream fin(filename);
	//cout << istream.str();
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