#include "chequeTools.h"
#include "chequeTools.h"
#include <string>
#include <ctime>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

string itoa(int i);

int main(int argc, char const *argv[])
{
	//Get student date
	string studtime = getDate();
	
	//Get actual date
	time_t now = time(0);
	struct tm * timeinfo;
	timeinfo = localtime(&now);
	char timestr[80];
	strftime(timestr, 80, "%F", timeinfo);
	string realtime = string(timestr);

	//Check
	if (studtime == realtime) {
		cout << "TimeCorrect" << endl;
	} else {
		cout << studtime << endl;
	}

	//Check numToString
	int tests[10] = {10000,5320,1000,814,100,76,20,14,5,0};
	for (int x = 0; x < 10; x++) {
		cout << numToString(tests[x]) << endl;
	}

	//Check getFacts
	ifstream iFile("chequeFacts.txt");
	string routing;
	string account;
	string chequeNumber;
	iFile >> routing;
	iFile >> account;
	iFile >> chequeNumber;
	iFile.close();

	string r;
	string a;
	string c;
	getChequeFacts(r, a, c);
	if (r == routing) 
		cout << "RoutingCorrect" << endl;
	else
		cout << r << endl;
	if (a == account) 
		cout << "AccountCorrect" << endl;
	else
		cout << account << endl;
	if (c == chequeNumber) 
		cout << "NumberCorrect" << endl;
	else
		cout << chequeNumber << endl;

	getChequeFacts(r, a, c);
	if (atoi(c.c_str()) == atoi(chequeNumber.c_str())+1) {
		cout << "IncrementCorrect" << endl;
	} else {
		cout << c << endl;
	}

}