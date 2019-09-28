#include "files.hpp"


int getIdFromFile(const string & filename,
	istringstream & istream, ostringstream & ostream) {


	std::ifstream fin("filename", std::ios::binary);
	istream.seekg(sizeof(int));

	string username;
	int ID;
	fin.read(reinterpret_cast<char*>(&username, &ID), sizeof(int));
	ostream << username, ID;
	while (true) {
		if (!fin) {
			if (fin.eof()) {
				break;
			}
		}
	}

	return 0;
}

void numberChase(const string & filename, ostringstream & ostream) {
}