//See header file for function descriptions
//Implement your functions here
#include "chequeTools.h"
#include <sstream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

string digitToStr(int digit);
string digitsToTeen(int digits);
string digitsToTen(int digits);
string digitsToHundred(int digits);
string digitsToThousand(int digits);

string numToString(int amount) {
	return string("numtostring");
}

string getDate() {
	return string("getdate");
}

void getChequeFacts(string &routing, string &account, string &chequeNumber) {
	static string count = "";
	routing = "routing";
	account = "account";
	chequeNumber = "cnumber" + count;
	count += "no";
}