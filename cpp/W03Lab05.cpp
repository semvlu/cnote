// Name: ªÂ¬f§g
// Date: Mar 3, 2022
// Last Update: Mar 3, 2022
// Problem statement: This C++ program do the Simple Drawing task

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cassert>
#include <cmath>
using namespace std;
char type;
typedef struct Square
{
	int w, x, y;
}S;

typedef struct IsoscelesRightTriangle
{
	int w, x, y;
	char face[3] = "";
}T;

typedef struct Line
{
	int x1, y1, x2, y2;
}L;

constexpr unsigned int str2int(const char* str, int h = 0)
{
	return !str[h] ? 5381 : (str2int(str, h + 1) * 33) ^ str[h];
}

void draw(vector<vector<char> > map)
{
	for (int i = 0; i < map.size(); i++)
	{
		for (int j = 0; j < map[i].size(); j++)
			cout << map[i][j];
		cout << endl;
	}
}

int main()
{
	int m, n;
	cin >> m >> n;
	vector <vector <char> > map(m, vector<char>(n, '*'));

	while (cin >> type)
	{
		T t;
		switch (type)
		{
		case ('S'):
			S s;
			cin >> s.w >> s.x >> s.y;
			if (s.w == 1)
			{
				map[s.y][s.x] = 'X';
				draw(map);
			}
			else if (s.x >= n || s.y >= m || s.x + s.w - 1 >= n || s.y + s.w - 1 >= m || s.w > m || s.w > n)
				cout << "Out of range." << endl;
			else
			{
				for (int i = s.y; i < s.y + s.w; i++)
				{
					map[i][s.x] = 'X';
					map[i][s.x + s.w - 1] = 'X';
				}
				for (int i = s.x; i < s.x + s.w; i++)
				{
					map[s.y][i] = 'X';
					map[s.y + s.w - 1][i] = 'X';
				}
				draw(map);
			}
			break;
		case ('T'):
			cin >> t.w >> t.x >> t.y;
			cin >> t.face;

			if (t.w == 1)
			{
				map[t.y][t.x] = 'X';
				draw(map);
			}
			else if (t.w > m || t.w > n || t.x > n - 1 || t.y > m - 1)
				cout << "Out of range." << endl;
			else
			{
				switch (str2int(t.face))
				{
				case str2int("LU"):
					if (t.x - t.w + 1 < 0 || t.y - t.w + 1 < 0)
						cout << "Out of range." << endl;
					else
					{
						for (int i = t.y; i > t.y - t.w; i--)
						{
							map[i][t.x] = 'X';
							for (int j = t.x - t.w + 1; j <= t.x; j++)
							{
								if (j + i == t.x + t.y - t.w + 1)
								{
									map[i][j] = 'X';
								}
							}
						}
						for (int i = t.x; i > t.x - t.w; i--)
						{
							map[t.y][i] = 'X';
						}
					}
					break;
				case str2int("LD"):
					if (t.x - t.w + 1 < 0 || t.y + t.w + 1 > m)
						cout << "Out of range." << endl;
					else
					{
						for (int i = t.y; i < t.y + t.w; i++)
						{
							map[i][t.x] = 'X';
							for (int j = t.x - t.w + 1; j <= t.x; j++)
							{
								if (i - j == t.y - t.x + t.w - 1)
								{
									map[i][j] = 'X';
								}
							}
						}
						for (int i = t.x; i > t.x - t.w; i--)
						{
							map[t.y][i] = 'X';
						}
					}
					break;
				case str2int("RU"):
					if (t.x + t.w + 1 > n || t.y - t.w + 1 < 0)
						cout << "Out of range." << endl;
					else
					{
						for (int i = t.y; i > t.y - t.w; i--)
						{
							map[i][t.x] = 'X';
							for (int j = t.x + t.w - 1; j >= t.x; j--)
							{
								if (i - j == t.y - t.x - t.w + 1)
								{
									map[i][j] = 'X';
								}
							}
						}
						for (int i = t.x; i < t.x + t.w; i++)
						{
							map[t.y][i] = 'X';
						}
					}
					break;
				case str2int("RD"):
					if (t.x + t.w + 1 > n || t.y + t.w + 1 > m)
						cout << "Out of range." << endl;
					else
					{
						for (int i = t.y; i < t.y + t.w; i++)
						{
							map[i][t.x] = 'X';
							for (int j = t.x; j <= t.x + t.w; j++)
							{
								if (j + i == t.x + t.y + t.w - 1)
								{
									map[i][j] = 'X';
								}
							}
						}
						for (int i = t.x; i < t.x + t.w; i++)
						{
							map[t.y][i] = 'X';
						}
					}
					break;
				default:
					break;
				}
				draw(map);
			}
			break;
		case ('L'):
			L l;
			cin >> l.x1 >> l.y1 >> l.x2 >> l.y2;

			if (l.x1 >= n || l.x2 >= n || l.y1 >= m || l.y2 >= m ||
				abs(l.x1 - l.x2) >= n || abs(l.y1 - l.y2) >= m)
				cout << "Out of range." << endl;
			else
			{
				if (l.x2 > l.x1)
				{
					if (l.y2 > l.y1)
					{
						for (int i = l.y1; i <= l.y2; i++)
						{
							for (int j = l.x1; j <= l.x2; j++)
							{
								if (j == i)
									map[i][j] = 'X';
							}
						}
					}
					else if (l.y2 < l.y1)
					{
						for (int i = l.y2; i >= l.y1; i--)
						{
							for (int j = l.x1; j <= l.x2; j++)
							{
								if (j == i)
									map[i][j] = 'X';
							}
						}
					}
					else // y2 = y1
					{
						for (int i = l.x1; i <= l.x2; i++)
						{
							map[l.y1][i] = 'X';
						}
					}
				}
				else if (l.x2 < l.x1)
				{
					if (l.y2 > l.y1)
					{
						for (int i = l.y1; i <= l.y2; i++)
						{
							for (int j = l.x1; j >= l.x2; j--)
							{
								if (j == i)
									map[i][j] = 'X';
							}
						}
					}
					else if (l.y2 < l.y1)
					{
						for (int i = l.y2; i >= l.y1; i--)
						{
							for (int j = l.x1; j <= l.x2; j++)
							{
								if (j == i)
									map[i][j] = 'X';
							}
						}
					}
					else // y2 = y1
					{
						for (int i = l.x1; i <= l.x2; i++)
						{
							map[l.y1][i] = 'X';
						}
					}
				}
				else // x1 = x2
				{
					if (l.y2 > l.y1)
					{
						for (int i = l.y1; i <= l.y2; i++)
						{
							map[i][l.x1] = 'X';
						}
					}
					else if (l.y2 < l.y1)
					{
						for (int i = l.y2; i >= l.y1; i--)
						{
							map[i][l.x1] = 'X';
						}
					}
					else // y2 = y1
					{
						map[l.y1][l.y2] = 'X';
					}
				}
				draw(map);
			}
			break;
		default:
			break;
		}
	}
}