#include "reduce.h"

#include <iostream>
using namespace std;

int main() {
	int a = 1, b = 2;
	displayFraction(a, b);
	displayFraction(a);
	displayFraction();

	gcd(a, b);
	reduceFraction(a, b);
	return 0;
}

void displayFraction(int a, int b) {
	cout << a << ',' << b << '\n';
}

int gcd(int a, int b) {
	return 0;
}

bool reduceFraction(int& num, int& denom) {
	return false;
}
