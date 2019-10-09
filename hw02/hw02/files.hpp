/**
* @file     files.hpp
* @author   Rose Peters
* @date     October 8, 2019
* Dr. Chris Hartman
*/

#ifndef FILES_HPP_
#define FILES_HPP_

#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::getline;
using std::string;
#include <sstream>
using std::istringstream;
using std::ostringstream;
#include <fstream>
#include <vector>
using std::vector;

/*
Reads file and searches it for the the string stored in istream
and if it exists, prints it to ostream.
@param string filename, name of file
@param istringstream istream stores a string to be compared with file
@param ostringstream ostream value printed if istream exists in file
*/
int getIdFromFile(const string & filename,
	istringstream & istream, ostringstream & ostream);
/*
Reads binary file of integers, reads the first integer to find the next
integers index, prints the index to ostream and 
repeats this process until it finds a negative integer 
@param string filename holds name of file
@param ostream used to print the index of the integers
*/
void numberChase(const string & filename, ostringstream & ostream);

#endif //!FILES_HPP