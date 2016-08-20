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
	 
	fAdd.open("addData");
	int s1, s2, s3, s4, s5;

	fAdd>>s1;
	int p[++s1], a[s1];
	for(int x=0; x<s1; x++)	fAdd>>p[x];

	fAdd>>s2;
	int q[++s2];
	for(int x=0; x<s2; x++)	fAdd>>q[x];
	addPoly(p,s1,q,s2,a,s1);
	print(a,s1);
	
	fAdd>>s4;
	int s[++s4], b[s4];
	for(int x=0; x<s4; x++)	fAdd>>s[x];
	addPoly(p,s1,s,s4,b,s4);
	print(b,s4);
	
	//int v[0], e[0];
	//add(v,0,q,s2,e,s2);
	//print(e,0);
	
	fAdd>>s3;
	int u[++s3], d[s3];
	for(int x=0; x<s3; x++)	fAdd>>u[x];
	addPoly(u,s3,p,s1,d,s3);
	print(d,s3);
	addPoly(q,s2,u,s3,d,s3);
	print(d,s3);

	return 0;
}
