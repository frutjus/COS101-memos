#include <iostream>
#include <fstream>
#include <string>
#include "vowels.h"

using namespace std;

int main()	{
    int vowelCnt = 0;
    ifstream in;
    in.open("testfile1");
    string test = "Enter a Series of characters";
    char A='A', c='C', u='u', tt=':';
    cout<<isVowel(A)<<" "<<isVowel(c)<<" "<<isVowel(u)<<" "<<isVowel(tt)<<endl;
    cout<<isVowel(' ')<<" "<<isVowel('t')<<" "<<isVowel('\t')<<endl;
    for(int i = 0; i < test.size(); i++)
       	if(isVowel(test[i]))	{
       	   cout << test[i] <<" ";
            vowelCnt++;
   	}
   cout <<vowelCnt<<endl;
   test=""; vowelCnt=0;
   string testBuilder="";
   getline (in, testBuilder);
   test+=testBuilder;
   for(int i = 0; i < test.size(); i++)
       if(isVowel(test[i]))
           vowelCnt++;
    cout<<vowelCnt<<endl;
    return 0;
}
