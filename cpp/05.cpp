// Name: ªÂ¬f§g
// Date: Feb 24, 2022
// Last Update: Feb 24, 2022
// Problem statement: This C++ program do the Adding Large Numbers task
#include <iostream>
#include <cctype>
#include <iomanip>
#include <cstdio>
using namespace std;
typedef struct BigInt
{
	string digits;
}big;

BigInt Add(const BigInt a, const BigInt b)
{
	big c;
	c.digits = "";
	int bit = -1; // in or not, -1 is not
	int len_a = a.digits.length() - 1;
	int len_b = b.digits.length() - 1;

	while (len_a != -1 && len_b != -1)
	{
		int t1 = a.digits[len_a] - 48;
		int t2 = b.digits[len_b] - 48;

		if (bit == -1)
		{
			if (t1 + t2 >= 10)
			{
				int d = (t1 + t2) % 10;
				c.digits.insert(0, 1, d + 48);
				bit = (t1 + t2) / 10;
			}
			else
			{
				c.digits.insert(0, 1, t1 + t2 + 48);
			}
		}

		else
		{
			if (t1 + t2 + bit >= 10)
			{
				int d = (t1 + t2 + bit) % 10;
				c.digits.insert(0, 1, d + 48);
				bit = (t1 + t2 + bit) / 10;
			}
			else
			{
				c.digits.insert(0, 1, t1 + t2 + bit + 48);
				bit = -1;
			}
		}
		len_a--;
		len_b--;
	}

	while (len_a == -1 && len_b != -1)
	{
		int t2 = b.digits[len_b] - 48;
		if (bit == -1)
		{
			c.digits.insert(0, 1, b.digits[len_b]);
		}
		else
		{
			if (t2 + bit >= 10)
			{
				int d = (t2 + bit) % 10;
				c.digits.insert(0, 1, d + 48);
				bit = (t2 + bit) / 10;
			}
			else
			{
				c.digits.insert(0, 1, t2 + bit + 48);
				bit = -1;
			}
		}
		len_b--;
	}

	while (len_a != -1 && len_b == -1)
	{
		int t1 = a.digits[len_a] - 48;
		if (bit == -1)
		{
			c.digits.insert(0, 1, a.digits[len_a]);
		}
		else
		{
			if (t1 + bit >= 10)
			{
				int d = (t1 + bit) % 10;
				c.digits.insert(0, 1, d + 48);
				bit = (t1 + bit) / 10;
			}
			else
			{
				c.digits.insert(0, 1, t1 + bit + 48);
				bit = -1;
			}
		}
		len_a--;
	}

	if (bit != -1)
	{
		c.digits.insert(0, 1, bit + 48);
	}
	bit = -1;
	return c;
}

bool isNumber(const string& s)
{
	for (char const& ch : s) {
		if (std::isdigit(ch) == 0)
			return false;
	}
	return true;
}
int main()
{
	big a, b;
	while (cin >> a.digits >> b.digits)
	{
		if ( isNumber(a.digits) == false || isNumber(b.digits) == false)
		{
			cout << "Not a valid number, please try again." << endl;
		}
		else
		{
			big c = Add(a, b);
			cout << c.digits << endl;
		}
	}
	
}