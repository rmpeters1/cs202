/*
printVectorAndRAIIptr.hpp
Rose Peters
5 Dec 2019
Dr. Chris Hartman
*/

#ifndef PRINTVECTORANDRAIIPTR_HPP_
#define PRINTVECTORANDRAIIPTR_HPP_


#include<iostream>
using std::endl;
#include<vector>
using std::vector;
#include <sstream>
using std::ostringstream;

template<typename T>
class RAIIPtr {
public:
	RAIIPtr(T* val);
	RAIIPtr* operator->() {
		return &RAIIPtr;
	}
	const T& operator*() {
		return *_val;
	}
private:
	T* _val;
};

template<typename T>
RAIIPtr<T>::RAIIPtr(T* val) :_val(val) {
}


/*
Outputs the contents of a given vector to an ostream.
@param os prints contents of given vector
@param vec vector of items to be printed
*/
template<typename T>
void printVector(ostringstream& os, vector<T> vec) {
	for (auto i : vec) {
		os << vec << endl;
	}
}

#endif // !PRINTVECTORANDRAIIPTR_HPP_
