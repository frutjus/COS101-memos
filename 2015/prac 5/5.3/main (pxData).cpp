#include <iostream>
#include <fstream>
#include "polynomials.h"
using namespace std;

int main()	{
	ifstream fAdd;
	
	fAdd.open("pxData");
	int s1, s2, s3, s4, s5;

	fAdd>>s1;
	int p[++s1];
	for(int x=0; x<s1; x++)	fAdd>>p[x];
	cout<<evaluate(p,s1,0)<<endl;
	cout<<evaluate(p,s1,4)<<endl;
	cout<<evaluate(p,s1,-14)<<endl;

	fAdd>>s2;
	int q[++s2];
	for(int x=0; x<s2; x++)	fAdd>>q[x];
	cout<<evaluate(q,s2,10)<<endl;

	fAdd>>s4;
	int s[++s4];
	for(int x=0; x<s4; x++)	fAdd>>s[x];
	cout<<evaluate(s,s4,-10)<<endl;
		
	fAdd>>s5;
	int t[++s5];
	for(int x=0; x<s5; x++)	fAdd>>t[x];
	cout<<evaluate(t,s5,-10)<<endl;

	fAdd>>s3;
	int u[++s3];
	for(int x=0; x<s3; x++)	fAdd>>u[x];
	cout<<evaluate(u,s3,-10)<<endl;
	
	int v[0];
	cout<<evaluate(v,0, 9)<<endl;
	
	return 0;
}
