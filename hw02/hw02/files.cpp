#include "files.hpp"


int getIdFromFile(const string & filename,
	istringstream & istream, ostringstream & ostream) {
	int ids;
	
	std::ifstream fin("filename");
	cout << istream.str() << endl;
	
	while (true) {
	
		if (!fin) {
			if (fin.eof()) {
				return -1;
			}
		}
	}
	return 0;
}

void numberChase(const string & filename, ostringstream & ostream) {
}