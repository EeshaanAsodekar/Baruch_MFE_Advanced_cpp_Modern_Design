#include "C.h"
#include <iostream>
using namespace std;

// destructor
C::~C() {}

// print the contents of the vector<int> vec data member
void C::print() noexcept {
	//cout << "\nprinting the vec (vector<int>) data member of the C object" << endl;
	//cout << "vec.size():" << vec.size() << endl;
	for (auto itr = vec.begin();itr != vec.end();itr++) {
		cout << *itr << " ";
	}
	cout << endl;
}

// double the values of the vector<int> vec data member
void C::scale_to_double() noexcept {
	cout << "\inside the scale_to_double() of the C object" << endl;
	for (auto itr = vec.begin();itr != vec.end();itr++) {
		(*itr) *= 2;
	}
}