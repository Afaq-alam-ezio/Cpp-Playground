#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    map<string, int> map1; // it contains keys and values
    // to insert keys and values use the following method below; also it takes elements of string in a sorted form
    map1["sam"] = 100;
    map1["harry"] = 500;
    map1["gestapo"] = 1000;

    // shortcut to enter above values in one line is below;
    // map1.insert({{"gestapo", 1000}, {"harry", 500}, {"sam", 100}});

    // to print the values agai nyou need an iterator
    map<string, int> :: iterator iter = map1.begin();
    for(iter; iter != map1.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    return 0;
}