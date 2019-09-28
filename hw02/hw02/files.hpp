#ifndef FILES_HPP_
#define FILES_HPP_

#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <sstream>
using std::istringstream;
using std::ostringstream;
#include <fstream>

int getIdFromFile(const string & filename,
	istringstream & istream, ostringstream & ostream);

#endif //!FILES_HPP