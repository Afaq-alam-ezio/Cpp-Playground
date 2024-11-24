#include<iostream>
using namespace std;

class Const
{
    int a;
    public:
        Const(){};
        Const(int x) // formal arguments
        {
            a = x;
            cout << "The value of a = " << a << endl;
        }

        ~Const()
        {
            cout << "Destructor called" << endl;
        }
        void show()
        {
            cout << "Hello world " << a << endl;
        }
};


int main()
{
    Const obj1(25);// actual parameters
    Const obj2(obj1);
    obj2.show();
    return 0;
}