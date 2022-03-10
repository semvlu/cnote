// Name: 祁柏君
// Date: Mar 10, 2022
// Last Update: Mar 10, 2022
// Problem statement: This C++ program do the Collatz Conjecture task
#include <iostream>
using namespace std;

int collatzConj(int a, int b)
{
	// set an array as the cycle counter for each number between a & b
	int len = abs(a - b) + 1;
	int* cycle;
	cycle = new int[len];
	for (int i = 0; i < len; i++) // set every element in the array to 1
		cycle[i] = 1;

	// get the temporary variable a1 & a2, if a > b, swap them
	int a1 = a;
	int b1 = b;
	if (a1 > b1)
	{
		int temp = a1;
		a1 = b1;
		b1 = a1;
	}
		
	for (int i = a1; i <= b1; i++)
	{
		// calculate the Collatz Conjecture
		while (i != 1)
		{
			if (i % 2 == 0)
				i /= 2;
			else
				i = i * 3 + 1;
			cycle[i - a1]++;
		}
	}

	// find the maximum cycle
	int cycleMax = cycle[0];
	for (int i = 0; i < len - 1; i++)
	{
		if (cycle[i + 1] > cycle[i])
			cycleMax = cycle[i + 1];
	}
	return cycleMax;
}

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		cout << a << " " << b << " " << collatzConj(a, b) << endl;
	}
}