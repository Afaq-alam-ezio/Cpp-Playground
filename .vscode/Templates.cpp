#include<iostream>
using namespace std;

template <class T>
class Harry
{
    T a;
    T b;
    public:
        Harry(T x, T y)
        {
            a = x;
            b = y;
        }
        T display(T x, T y) // Function template 
        {
            // cout << "The sum is = " << a+b << endl;
            a = x;
            b = y;
            T c = a + b;
            return c;
        }
};


int main()
{
    Harry <int> obj(20, 30);
    int x = obj.display(30, 40);
    cout << x << endl;

    Harry <float> obj1(20.23, 30.66);
    float y = obj1.display(30.25, 20.25);
    cout << y;

    return 0;
}