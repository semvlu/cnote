// Name: ªÂ¬f§g
// Date:Feb 17, 2022
// Last Update: Feb 17, 2022
// Problem statement: This C++ program is The Babylonian algorithm 
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double n;
	cin >> n;
	double guess = n / 2;
	double previousGuess;
	double r;
	while (1)
	{
		r = n / guess;
		previousGuess = guess;
		guess = (guess + r) / 2;
		if (previousGuess - guess <= 0.01)
		{
			break;
		}
	}
	cout << fixed << setprecision(2) << guess << endl;
}