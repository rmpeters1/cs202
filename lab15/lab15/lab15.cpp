#include <numeric>
#include<iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <algorithm>
using std::unique;
#include<deque>
using std::deque;
int main() {
vector<int> v{ 1,3,3,2,1,4,2,3,4,1,2,1,4 };
	std::sort(v.begin(),v.end());
	auto finish = std::unique(v.begin(), v.end());
	v.erase(finish, v.end());
	cout << "The unique elements in v are ";
	for (auto i : v) {
		cout << i<<" ";
	}
	cout << endl;
	vector<int> v1{ 1,2,1 };
	vector<int> v2{ 2,2,2 };

	int ip = std::inner_product(v1.begin(), v1.end(), v2.begin(), 0);
	cout << "the inner product of v1,v2 is " << ip;
}