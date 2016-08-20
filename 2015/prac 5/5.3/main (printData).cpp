#include <iostream>
#include <fstream>
#include "polynomials.h"
using namespace std;

int main()	{
	ifstream fAdd;
	
	fAdd.open("printData");
	int s1, s2, s3, s4, s5; 

	fAdd>>s1;
	int p[++s1];
	for(int x=0; x<s1; x++)	fAdd>>p[x];
	printPoly(p,s1);

	fAdd>>s2;
	int q[++s2];
	for(int x=0; x<s2; x++)	fAdd>>q[x];
	printPoly(q,s2);

	fAdd>>s4;
	int s[++s4];
	for(int x=0; x<s4; x++)	fAdd>>s[x];
	printPoly(s,s4);
		
	fAdd>>s3;
	int u[++s3];
	for(int x=0; x<s3; x++)	fAdd>>u[x];
	printPoly(u,s3);
	
	int v[0];
	printPoly(v,0);
	
	return 0;
}
