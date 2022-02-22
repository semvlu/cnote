// Name:ªÂ¬f§g
// Date:Feb 17, 2022
// Last Update: Feb 17, 2022
// Problem statement: Each line represents an INPUT, the program continues to request input, and ends if EOF is read.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int input;
	while (cin >> input)
	{
		if (input >= 1000000000 ) // equal or more than 10 digits
		{
			cout << input << endl;
		}
		else // less than 10 digits
		{
			cout << setw(10) << input << endl;
		}
	}
}