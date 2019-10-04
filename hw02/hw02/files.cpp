#include "files.hpp"


int getIdFromFile(const string & filename,
	istringstream & istream, ostringstream & ostream) {
	
	
	std::ifstream fin("filename");
	
	
	cout << istream.str();
	while (true) {
		fin >> ids;
		vector<int> idVec;
		idVec.push_back(ids);
		//for loop for names, search number in names
		fin >> usernames;
		for (auto numbers : idVec) {
			if (usernames == istream.str())
				cout << idVec[numbers];
		 }
		
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