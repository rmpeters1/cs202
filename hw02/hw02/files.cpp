/**/
#include "files.hpp"


int getIdFromFile(const string& filename,
	istringstream& istream, ostringstream& ostream) {

	std::ifstream fin(filename);
	if (!fin) {
		return -1;
	}
	string inputName;
	string id;
	string filetext;
	string usernameInFile;
	vector<string> namesVec;
		namesVec.push_back(istream.str());
		

	while (getline(fin, filetext)) {
		istringstream is(filetext);
		is >> usernameInFile >> id;



		//cout << usernameInFile << "," << id<< endl;
		//for (auto i : inputName) {
		//	if (usernameInFile == inputName) {
		//		cout << id << endl;
		//		ostream << id << endl;
		//	}
		//	else {
		//		//cout << "error" << endl;
		//		ostream << "error" << endl;
		//	}
		//}


		if (fin.eof()) {
			break;
		}
	}
	return 0;
}

void numberChase(const string& filename, ostringstream& ostream) {
	std::ifstream fin(filename);

	int numberInFile;
	int numberIndex = 0;
	vector<int> numbersVec;

	while (true) {

		fin.read(reinterpret_cast<char*>(&numberInFile), sizeof(int));


		numbersVec.push_back(numberInFile);


		//	cout << number << endl;
		if (!fin) {
			if (fin.eof()) {
				break;
			}
		}
	}

	int copyCount = 0;
	while (numberIndex >= 0) {
		numberIndex = numbersVec[numberIndex];

		cout << numberIndex << endl;
		ostream << numberIndex << endl;

		if (numberIndex >= numbersVec.size()) {
			break;
		}
		if (numberIndex == numbersVec.back()) {
			if (copyCount == 0) {
				copyCount++;
				continue;
			}
			else if (copyCount > 0) {
				break;
			}
		}

	}



}