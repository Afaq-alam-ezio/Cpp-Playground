#include<iostream>
using namespace std;

class Add
{
    int a = 10;
    public:
        void operator --(int)
        {
            a--;
            cout << "a = " << a << endl;
        }
};

int main()
{
    Add o;
    o--;
    return 0;
}