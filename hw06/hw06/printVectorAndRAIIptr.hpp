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
	RAIIPtr(const T* val);
private:
	T* _val;
};
template<typename T>
RAIIPtr<T>::RAIIPtr(const T* val) :_val(val) {}

template<typename U>
RAIIPtr<U>& operator*(const U&val) {
	return val;
}
template<typename T>
void printVector(ostringstream& os, vector<T> v) {
	for (auto i : v) {
		os << v << endl;
	}
}

#endif // !PRINTVECTORANDRAIIPTR_HPP_
