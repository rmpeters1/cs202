#include "files.hpp"


int getIdFromFile(const string & filename,
	istringstream & istream, ostringstream & ostream) {
	
	std::ifstream fin(filename);
	string names;
	getline(istream, names);
	vector<string> v;
	v.push_back(names);
	string filetext;

	while (true) {
		
		getline(fin, filetext);
		for (auto i = 0; i < v.size(); i++) {
			//cout << v[i];
			if (filetext[i] == names[i]) {
				getline(fin, filetext);
				cout << filetext << "\n";
			}
			else cout << "error\n";
		}
		
		if (!fin) {
			return -1;
			if (fin.eof()) {
				break;
			}
		}
		return 0;

	}
	
}

void numberChase(const string & filename, ostringstream & ostream) {
}