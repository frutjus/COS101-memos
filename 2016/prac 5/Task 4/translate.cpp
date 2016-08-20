#include "translate.h"

#include <string>
using namespace std;

string translate(const string& word) {
	return "{W" + word + "}";
}

string translate(int number) {
	return "{I" + to_string(number) + "}";
}

string translate(double number) {
	return "{R" + to_string(number) + "}";
}
