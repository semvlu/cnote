// Name: ªÂ¬f§g
// Date:Feb 17, 2022
// Last Update: Feb 22, 2022
// Problem statement: This C++ program is The Babylonian algorithm 
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	long double n;
	cin >> n; 
	long double guess = n / 2;
	long double previousGuess;
	long double r;
	r = n / guess;
	previousGuess = guess;
	guess = (guess + r) / 2;
	while (previousGuess - guess > 0.01) // run the Babylonian algorithm
	{
		r = n / guess;
		previousGuess = guess;
		guess = (guess + r) / 2;
	}
	cout << fixed << setprecision(2) << guess << endl;
}