#include <iostream>
#include "piglatin.h"

using namespace std;

int main()
{
	int caseNr;
	cin >> caseNr;
	switch(caseNr)
	{
		case 1 :
			cout << (isVowel('e') ? "e is a vowel" : "e is not a vowel") << endl; 
			cout << (isVowel('U') ? "U is a vowel" : "U is not a vowel") << endl; 
			cout << (isVowel('d') ? "d is a vowel" : "d is not a vowel") << endl; 
			cout << (isVowel('F') ? "F is a vowel" : "F is not a vowel") << endl;
			cout << (isVowel('3') ? "3 is a vowel" : "3 is not a vowel") << endl;
			break;
		case 2 :
			cout << (isVowel('y') ? "y is a vowel" : "y is not a vowel") << endl; 
			cout << (isVowel('Y') ? "y is a vowel" : "Y is not a vowel") << endl; 
			cout << (isVowel('\0') ? "Null is a vowel" : "Null is not a vowel") << endl;
	}
}

