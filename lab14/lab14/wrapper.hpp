#ifndef WRAPPER_HPP_
#define WRAPPER_HPP_

#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

template<typename Wrap>
class Wrapper {
	template<typename W>
	friend std::ostream& operator<<(std::ostream&, const Wrapper<W>&);
public:
	Wrapper(const Wrap& val);
private:
	Wrap _val;
};
template<typename Wrap>
Wrapper<Wrap>::Wrapper(const Wrap& val) :
	_val(val)
{}
template<typename W>
std::ostream& operator<<(std::ostream&os, const Wrapper<W>&W) {
	os << W._val;
	return os;
}


#endif // !WRAPPER_HPP_
