#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int seed;
	cout << "Enter a seed: ";
	cin >> seed;
	
	int total;
	cout << "How many questions: " ;
	cin >> total;
	
	srand(seed);
	
	int num1 = 0, num2 = 0, correct = 0;
	for (int i = 1; i <= total; i++)
	{
		num1 =  rand() % 90 + 10;
		num2 =  rand() % 90 + 10;
		
		cout << i << ". "  <<  num1;
		cout << " + "  << num2;
		cout << " = ";
		
		int answer;
		cin >> answer;
		
		if(answer == (num1 + num2))
		{
			correct++;
			cout << "Yes. Your answer is correct" << endl;
		}
		else
		{
			cout << "No. Your answer is " << answer;
			cout << ". The correct answer is " << num1 + num2 << endl;
		}
	}
	cout << "-------------------------------------------\n";
	cout << " You scored " << correct << " / " << total << endl;
	return 0;
}