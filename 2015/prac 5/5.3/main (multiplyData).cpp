#include <iostream>
#include <fstream>
#include "polynomials.h"
using namespace std;

void print(const int v[], unsigned size)	{
	for(unsigned x=0; x<size; x++)	cout<<v[x]<<" ";
	cout<<endl;
}

int main()	{
	ifstream fAdd;
	
	fAdd.open("multiplyData");
	int s1, s2, s3, s4, s5, s6, s7;

	fAdd>>s1;
	int p[++s1];
	for(int x=0; x<s1; x++)	fAdd>>p[x];

	fAdd>>s2;
	int q[++s2];
	for(int x=0; x<s2; x++)	fAdd>>q[x];

	s6=s1+s2-1;
	int a[s6];
	multiplyPoly(p,s1,q,s2,a,s6);
	print(a,s6);
	
	fAdd>>s4;
	int s[++s4];
	s7=s1+s4-1;
	int b[s7];
	for(int x=0; x<s4; x++)	fAdd>>s[x];
	multiplyPoly(p,s1,s,s4,b,s4);
	print(b,s4);
	
	fAdd>>s3;
	int u[++s3];
	int s8=s3+s1-1;
	int d[s8];
	for(int x=0; x<s3; x++)	fAdd>>u[x];
	multiplyPoly(u,s3,p,s1,d,s8);
	print(d,s3);
	multiplyPoly(p,s1,u,s3,d,s8);
	print(d,s3);

	return 0;
}
