#include <iostream>
#include <map>
#include <string>
using namespace std;
void printstuff(auto m)
{
    if (!m.empty())
    {
        int i = 0;
        for (auto mm : m)
        {
            cout << i<<". "<<mm.first << " - " << mm.second<<"\n";
            i++;
        }
    }
    else
    {
        cout << "map is empty so no\n";
    }
}

int main(void)
{
    map<string, float> pizzas = { { "pepperoni", 2.99 }, { "chicken", 3.49 } };
    printstuff(pizzas);
    return 0;
}
