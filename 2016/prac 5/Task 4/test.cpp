#include <cctype>
#include <iostream>
#include <string>
using namespace std;

#include "translate.h"

void test(const string& letters) {
	for(char letter : letters) {
		cout << translate((char) toupper(letter) + string("xYz")) << ',';
	}
	cout << '\n';
	for(char letter : letters) {
		cout << translate((char) tolower(letter) + string("XyZ")) << ',';
	}
	cout << '\n';
}

int main() {
	test("aeiou");
	test("bfjpv");
	cout << translate("a") << ',' << translate("b") << '\n';

	cout << translate(48879) << '\n';
	cout << translate(123.45) << '\n';
	return 0;
}
