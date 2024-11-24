#include<iostream>
using namespace std;
int main()
{
    // int a = 40;
    // int *p = &a;
    int *p;
    p = new int [4];

    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;

    for (int i = 0; i < 4; i++)
    {   
        cout << "x = " << p[i] << endl;
    }

    delete p;
    for (int i = 0; i < 4; i++)
    {   
        cout << "x = " << p[i] << endl;
    }

    return 0;
}