#ifndef PRINTVECTORANDRAII_HPP_
#define PRINTVECTORANDRAII_HPP_

#include<iostream>
using std::endl;
#include<vector>
using std::vector;
#include <sstream>
using std::ostringstream;

template<typename T>
class RAIIPtr {
public:
	RAIIPtr(const T* &val);
private:
	T _val;
};
template<typename T>
RAIIPtr<T>::RAIIPtr(const T*& val): _val(val) {}

template<typename P>
void printVector(ostringstream &os, vector<P> v) {
	for (auto i : v) {
		os << v << endl;
	}
}


#endif // !PRINTVECTORANDRAII_HPP_
