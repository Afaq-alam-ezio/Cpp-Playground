#include<iostream>
#include<vector>
using namespace std;
// sequence associative derived

void display(vector <int> &v)
{
    vector <int> :: iterator iter = v.begin();
    for (iter = v.begin(); iter != v.end(); iter++)
    {
        cout << *iter << endl;
    }
}


int main()
{
    vector <int> v1;
    int element;
    for(int i = 0; i < 4; i++)
    {
        cout << "Enter the element = ";
        cin >> element;
        v1.push_back(element);
    }
    display(v1);

    // v1.pop_back();
    // cout << "element deleted from back = " << v1[4] << endl;
    // v1.front();
    // cout << "element deleted from front = " << v1[4] << endl;
    return 0;
}