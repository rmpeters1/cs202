/* boxes3.cpp
*  Rose Peters
* 11 November 2019
* Dr. Chris Hartman
*/
#include "boxes3.hpp"

void FilledBox::print(ostream& os)const {
}
string FilledBox::type() const { return "Filled"; }

void HollowBox::print(ostream& os)const {
}
string HollowBox::type() const { return "Hollow"; }

void CheckeredBox::print(ostream& os)const {
}
string CheckeredBox::type() const { return "Checkered"; }

unique_ptr<Box> boxFactory(char c, int w, int h) {
	unique_ptr<Box> P;
	return P;
}

ostream& operator<<(ostream& os, const Box& b)
{
	b.print(os);
	return os;
}