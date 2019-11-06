/* boxes3.cpp
*  Rose Peters
* 11 November 2019
* Dr. Chris Hartman
*/
#include "boxes3.hpp"

void FilledBox::print(ostream& os) const {}
string FilledBox::type(string boxType) const {}

void HollowBox::print(ostream& os) const {}
string HollowBox::type(string boxType) const {}

void CheckeredBox::print(ostream& os) const {}
string CheckeredBox::type(string boxType) const {}

unique_ptr<Box> boxFactory(char c, int w, int h) {}
