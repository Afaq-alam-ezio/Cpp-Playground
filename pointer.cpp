#include<iostream>
using namespace std;

class Myclass
{
    int num;
    public:
        void set(int x)
        {
            num = x;
        }
        void show();
};

void Myclass :: show()
{
    cout << "Value of num = " << num << endl;
}

int main()
{
    Myclass s1, *p;
    cout << "Using objects : " << endl;
    s1.set(10);
    s1.show();
    cout << "Using pointer : " << endl;
    p = &s1;
    // p -> set(30);
    p -> show();

    return 0;
}