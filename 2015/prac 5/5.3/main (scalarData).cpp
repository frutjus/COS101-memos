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
	
	fAdd.open("scalarData");
	int s1, s2, s3, s4, s5;

	fAdd>>s1;
	int p[++s1], a[s1];
	for(int x=0; x<s1; x++)	fAdd>>p[x];
	multiplyPoly(p,s1,22,a);
	print(a,s1);
	multiplyPoly(p,s1,-2,a);
	//multiply(const int p[], int s1, int scalar, int r[])
	print(a,s1);
	multiplyPoly(p,s1,0,a);
	print(a,s1);

	fAdd>>s2;
	int q[++s2], b[s2];
	for(int x=0; x<s2; x++)	fAdd>>q[x];
	multiplyPoly(q,s2,-1,b);
	print(b,s2);

	fAdd>>s4;
	int s[++s4], c[s4];
	for(int x=0; x<s4; x++)	fAdd>>s[x];
	multiplyPoly(s,s4,3,c);
	print(c,s4);
	
	int v[0], e[0];
	multiplyPoly(v,0,-11,e);
	print(e,0);
	
	fAdd>>s3;
	int u[++s3], d[s3];
	for(int x=0; x<s3; x++)	fAdd>>u[x];
	multiplyPoly(u,s3,5,d);
	print(d,s3);
	
	return 0;
}
