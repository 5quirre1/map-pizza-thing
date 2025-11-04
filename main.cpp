#include <iostream>
#include <map>
#include <string>
#include "question.hpp"
using namespace std;
void printstuff(auto m)
{
    if (!m.empty())
    {
        int i = 1;
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


void addstuff(auto &m, string first, float second)
{
    m[first] = second;
}
 
int main(void)
{
    map<string, float> pizzas = {};
    string first = question("put the first element: ", "put first");
    float second = stof(question("put the 2nd element: ", "please pt the 2nd"));
    addstuff(pizzas, first, second);
    printstuff(pizzas);
    return 0;
}
