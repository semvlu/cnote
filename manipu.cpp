#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream atext("test.txt"); // ofstream creates file
    atext << "I know!!";
    atext.close();

    string read;
    ifstream file("test.txt"); // ifstream reads file
    while (getline(file, read))
    {
        cout << read;
    }
    file.close();
}