#include<iostream>
using namespace std;

class Base
{
    int a;
    int b;
    public:
        void show()
        {
            cout << "A = " << a << endl << "B is = " << b;
        }
};


int main()
{
    Base obj;
    obj.show();
    return 0;
}