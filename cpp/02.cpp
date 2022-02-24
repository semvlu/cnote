// Name: ªÂ¬f§g
// Date: Feb 24, 2022
// Last Update: Feb 24, 2022
// Problem statement: This C++ program sorts
#include <iostream>
#include <fstream>
#include <string>
#
using namespace std;

void getHighScores(string name[], unsigned long long score[], int n); // n indicates # on the list

int main()
{
	string name[5];
	unsigned long long score[5];

	ifstream f("scores.txt");
	for (int i = 0; i < 5; i++)
	{
		//getline(f, name[i]);
		f >> name[i] >> score[i];
	}	

	getHighScores(name, score, 5);
	cout << name[0] << endl << score[0] << endl << name[1] << endl << score[1] << endl
		<< name[2] << endl << score[2] << endl;

	f.close();
}

void getHighScores(string name[], int score[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (score[i] < score[j])
			{
				unsigned long long temp = score[i]; // store the data temporarily for swapping
				string temp4Name = name[i]; // store the data temporarily for swapping
				score[i] = score[j];
				name[i] = name[j];
				score[j] = temp;
				name[j] = temp4Name;
			}
		}
	}
}