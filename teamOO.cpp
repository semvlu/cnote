#include <iostream>
#include <string>
using namespace std;
class Team
{
    public:
        int budget; // attribute
        string name;
        int prize(int p); // class method

        Team(int a, string b) // constructor
        {
            budget = a;
            name = b;
        }
    
    private:
};

int Team::prize(int p)
{
    budget += p;
    return budget;
}

/*Team::f(int a, string b)
{
    budget = a;
    name = b;
}*/

int main()
{
    Team AM(10000000, "Aston Martin");
    AM.prize(10000);
    cout<< AM.name << ": " << AM.budget << endl;

    Team Merc(15000000, "Mercedes");
    
    cout<< Merc.name << ": " << Merc.budget;
}

