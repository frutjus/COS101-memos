#include <iostream>
#include <fstream>
#include "arrayReverse.h"
using namespace std;


int main()	{
	int size=0;
	ifstream f, g, h;
	char elements[500];
	f.open("data01");	//67 68 69 70 71 72 73 74 75 76
	readElements(elements, size, f);
	cout<<size<<endl;
	print(elements, size);
	reverseArray(elements, size);
	print(elements, size);

	g.open("data02");	//97 66 99 69 116 102 122 121 71
	size=0;
	readElements(elements, size, g);
	cout<<size<<endl;
	reverseArray(elements, size);
	print(elements, size);

	h.open("data03");	//97 5 66 96 99 69 116 93 102 64 122 200 121 123 104 71
	size=0;
	readElements(elements, size, h);
	cout<<size<<endl;
	reverseArray(elements, size);
	print(elements, size);
	return 0;
}
