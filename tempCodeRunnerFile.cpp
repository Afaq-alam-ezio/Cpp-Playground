#include<iostream>
using namespace std;

class Const
{
    int a;
    public:
        Const(int x) // formal arguments
        {
            a = x;
            cout << "The value of a = " << a << endl;
        }
};


int main()
{
    Const obj(20);// actual parameters
    return 0;
}