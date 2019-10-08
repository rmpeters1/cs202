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

	vector<string> fileNamesVec;
	vector<string> fileIdsVec;

	while (fin) {
		fin >> filetext;
		fileNamesVec.push_back(filetext);
		fin >> filetext;
		fileIdsVec.push_back(filetext);

		if (fin.eof()) {
			break;
		}
	}

/
	while (getline(istream, inputName)) {

		for (auto i = 0; i < fileNamesVec.size(); i++) {
			if (inputName == fileNamesVec[i]) {
				cout << fileIdsVec[i] << endl;
				ostream << fileIdsVec[i] << endl;
			}
			//else if(inputName != fileNamesVec[i]) {
			//	cout << "error" << endl;
			//	break;
			//}
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

		//cout << numberIndex << endl;
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