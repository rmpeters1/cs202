#include "files.hpp"


int getIdFromFile(const string & filename,
	istringstream & istream, ostringstream & ostream) {
	
	std::ifstream fin("filename", std::ios::binary);
	fin.seekg(sizeof(int));
	while (true) {
		if (!fin) {
		if (fin.eof()) {
			break;
		}
	}
	}
	
	return 0;
}

