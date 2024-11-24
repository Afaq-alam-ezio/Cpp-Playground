#include<iostream>
#include<list>
using namespace std;

void display(list <int> &l)
{
    list <int> :: iterator iter = l.begin();
    for(; iter != l.end(); iter++)
    {
        cout << *iter << endl;
    }
}

int main()
{
    list <int> l1;

    l1.push_back(4);
    l1.push_back(5);
    l1.push_back(6);
    l1.push_back(7);

    cout << "List elements are below = " << endl;

    display(l1);

    return 0;
}