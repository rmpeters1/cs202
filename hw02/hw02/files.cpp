#include "files.hpp"


int getIdFromFile(const string & filename,
	istringstream & istream, ostringstream & ostream) {
	string usernames;
	int ids;
	
	
	std::ifstream fin("filename");
	
	vector<int> idVec;
	fin >> ids;
	idVec.push_back(ids);
	for (auto n = 0; n < idVec.size(); n++) {
		cout << n << endl;
	}
	cout << istream.str();
	while (true) {
		
		
		//for loop for names, search number in names
		fin >> usernames;
	/*	for (auto names : usernames) {
			for (auto numbers : idVec) {
				if (names) {
					cout << numbers[names];
				}
			}
		}*/
		
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