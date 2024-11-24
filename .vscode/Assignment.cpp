#include<iostream>
using namespace std;

class Test
{
    public:
        Test(const Test &t)
        {
            cout << "Copy const. called" << endl;
        }
        Test & opeartor = (Test &t)
        {
            cout << "Assignment operator called." << endl;
            return *this;
        ;}
;};


int main()
{
    Test t1, t2;
    t2 = t1;

    Test t3 = t1;

    return 0;
}