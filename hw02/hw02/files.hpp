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
#include <vector>
using std::vector;

int getIdFromFile(const string & filename,
	istringstream & istream, ostringstream & ostream);

void numberChase(const string & filename, ostringstream & ostream);

#endif //!FILES_HPP