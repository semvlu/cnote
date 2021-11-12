#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int a = 5;
    string fn = "Noah";
    string ln = "Troop";
    string full = fn.append(ln);
    full[0] = 'B'; 
    cout << full << "\n" << full.size() << std::endl;

    string shut;
    cout << "type your name: " << endl;
    getline(cin, shut);
    string* s = &shut;
    cout<< *s;
}