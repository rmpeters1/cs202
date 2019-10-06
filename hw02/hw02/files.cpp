#include "files.hpp"


int getIdFromFile(const string & filename,
	istringstream & istream, ostringstream & ostream) {
	
	std::ifstream fin(filename);
	//for (auto i : istream.str()) {
	//	cout << i;
	//}
	string filetext;
	
	while (true) {
		getline(fin, filetext);

		if (istream.str().size() > 0) {
			for (auto i = 0; i < istream.str().size(); i++) {
				if (istream.str()[i] == filetext[i]) {

}
			}
		}
		



		//for (auto i = 0; i < v.size(); i++) {
		//	//cout << v[i];
		//	if (filetext[i] == names[i]) {
		//		fin >> filetext;
		//		ostream << filetext << "\n";
		//	}
		//	else {
		//		ostream << "error\n";
		//	}
		//}
		//
		if (!fin) {
			return -1;
			if (fin.eof()) {
				break;
			}
		}
		//cout << ostream.str();
		return 0;

	}
	return 0;
}

void numberChase(const string & filename, ostringstream & ostream) {
}