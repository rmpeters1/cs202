#include "overloadop.hpp"

int House::getHeight() const {
	return _height;
}
void House::setHeight(int height) {
	_height = height;
}
House::House() : _height(0) {
	cout << "Default constructor for House." << endl;
}
House::House(int height) : _height(height) {
	cout << "Created a House." << endl;

}

House::House(const House& h2) : _height(h2._height) {
	cout << "Copied a House." << endl;
}


House::~House() {
	cout << "Destructed a House." << endl;
}

House operator+(House h1, const House& h2) {
	h1._height += h2._height;
	return h1;
}

std::ostream& operator<<(std::ostream& out, const House& h) {
	 out << "House with height: " << h.getHeight(); //_height
	 return out;
}