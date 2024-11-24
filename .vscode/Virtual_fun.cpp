#include<iostream>
using namespace std;

class A
{
    public:
        virtual void display()
        {
            cout << "a = 10" <<  endl;
        }
};

class B : public A
{
    public:
        void display()
        {
            cout << "a = 20" <<  endl;
        }
};


int main()
{
    A *a;
    B b;
    a = &b;
    a->display();
    return 0;
}
