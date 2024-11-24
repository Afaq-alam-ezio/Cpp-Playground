#include<iostream>
using namespace std;

template <class T1 = char, class T2 = float, class T3 = char>
class Harry
{
    char a;
    int b, c;
    public:
        Harry(T1 x, T2 y, T3 z)
        {
            a = x;
            b = y;
            c = z;
        }
        void print()
        {
            cout << "A = " << a << endl << "B = " << b << endl << "C = " << c << endl;
        }
};

int main()
{
    Harry<> H(1, 3.12, 'A');
    H.print();
    cout << endl;
    Harry <char , char, int> o1('a', 'b', 97);
    o1.print();
    
    return 0;
}