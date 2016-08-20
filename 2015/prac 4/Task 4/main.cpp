#include <iostream>
#include <string>
#include "caesar.h"

using namespace std;

int main() {
	string message = "I Love COS132!!! I Just KnoW IT! #-myName is abyzmn...";
	int StrShiftKey []= {0, 5, -5, 100, -100, 1};
	char characters []= {'B', 'B', 'B', 'B', 'B', 'z', 'a', 'z', 'Y',  'u' };
	int charShiftKeys[] = {10, 30, -5, 0, 1, 26, -26, -1, -98, 100};
	char special []= {'.', '*', '@', '$', '%', '^', '(', '{', '"'};
	
	for (size_t i = 0; i < 10; i++ ){
		cout << shift(charShiftKeys[i], characters[i]) << endl;
	}
	for (size_t i = 0; i < 9; i++ ){
		cout << shift(5, special[i]);
	}
	cout <<endl;

	for (size_t i = 0; i < 6; i++){
		cipher(StrShiftKey[i], message);
		cout << message << endl;
	}
	
	return 0;
}
