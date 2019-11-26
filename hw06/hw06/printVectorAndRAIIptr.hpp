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
	RAIIPtr(const T& val);
	~RAIIPtr();

	RAIIPtr &operator->();
private:
	T _val;
};
template<typename T>
RAIIPtr<T>::RAIIPtr(const T& val) : _val(val) {}
template<typename T>
void printVector(ostringstream& os, vector<T> v) {
	for (auto i : v) {
		os << v << endl;
	}
}
template<typename A>
RAIIPtr<A> operator*(RAIIPtr<A> lhs, const RAIIPtr<A>& rhs) {
	return lhs *= rhs;
}

#endif // !PRINTVECTORANDRAII_HPP_
