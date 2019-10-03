#include "files.hpp"


int getIdFromFile(const string & filename,
	istringstream & istream, ostringstream & ostream) {


	std::ifstream fin("filename", std::ios::binary);
	auto names = istream.tellg();
	while (true) {
		string usernames;
		istream >> usernames;
		istream >> usernames;
		int ids;
		fin.read(reinterpret_cast<char*>(&ids), sizeof(int));
		vector<int> idvec;
		idvec.push_back(ids);
		for (auto numbers : idvec) {
			ostream << numbers << endl;
		}
	
		if (!fin) {
			if (fin.eof()) {
				break;
			}
		}
	}
	cout << ostream.str();
	return 0;
}

void numberChase(const string & filename, ostringstream & ostream) {
}