#include<iostream>
using namespace std;

class Base
{
    public:
        int a = 10;
};

class Der1 : virtual public Base
{
    public:
        int b = 20;
};

class Der2 : virtual public Base
{
    public:
        int c = 30;
};

class Der3 : public Der1, public Der2
{
    public:
        int d = 40;
        void show()
        {
            cout << a << endl << b << endl << c << endl << d;
        }
};

int main()
{
    Der3 obj;
    obj.show();
    return 0;
}