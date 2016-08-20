#include "reduce.h"

#include <iostream>
using namespace std;

void displayFraction(int a, int b) {
	cout << b << ',' << a;
}

int gcd(int a, int b) {
	if(a <= 0 || b <= 0) {
		return -1;
	}
	return a + b;
}

bool reduceFraction(int& num, int& denom) {
	if(num <= 0 || denom <= 0) {
		num = -1;
		denom = -2;
		return false;
	}
	num = 1;
	denom = 2;
	return true;
}
