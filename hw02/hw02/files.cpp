#include "files.hpp"


int getIdFromFile(const string& filename,
	istringstream& istream, ostringstream& ostream) {
	
	std::ifstream fin(filename);
	string inputName;
	string id;
	string filetext;
	string usernameInFile;

	while (getline(fin, filetext)) {
		getline(istream, inputName);
		istringstream is(filetext);
		is >> usernameInFile >> id;
		if (usernameInFile == inputName) {
			cout << id;
			ostream << id;
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

void numberChase(const string& filename, ostringstream& ostream) {
}