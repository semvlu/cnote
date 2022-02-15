#include <iostream>
#include "fstream"
#include "cstring"
using namespace std;
int main()
{
    // data type conversion
    int b = static_cast <int> (2.5);
    fstream input;
    char a[10] = "helllo";
    input.open("test.txt", ios::out | ios::trunc);
    input.write(a, 10);
    input.close();
}
