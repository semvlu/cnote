// Name: ªÂ¬f§g
// Date: Feb 17, 2022
// Last Update: Feb 17, 2022
// Problem statement: Each line represents an INPUT, the program continues to request input, and ends if EOF is read.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double r;
	double PI = 3.14159265358979323846;
	while (1)
	{
		cin >> r;
		double vol = (4 / 3) * PI * pow(r, 3);
		cout << fixed << precision(6) << vol;
	}
}