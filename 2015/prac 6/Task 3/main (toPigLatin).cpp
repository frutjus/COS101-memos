#include <iostream>
#include <cstring>
#include "piglatin.h"

using namespace std;

int main()
{	
	char inWord[50];
	char pWord[55];
	char eWord[10];
	
	for(int i = 0; i < 4; i++)
	{
		cin >> inWord;	
		if(strcmp(inWord,"empty") != 0)
		{
			toPigLatin(inWord, pWord);
			cout << pWord << endl;
		}
		else
		{
			toPigLatin(eWord, pWord);
			cout << "---" << pWord << "+++\n";
		}
	}
}

