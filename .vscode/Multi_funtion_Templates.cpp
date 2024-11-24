#include<iostream>
using namespace std;

template <class t1, class t2>
class Myclass
{
    t1 data1, data3;
    t2 data2, data4;
    public:
        Myclass(t1 x, t2 y)
        {
            data1 = x;
            data2 = y;
        }
        void display(t1 x, t2 y)
        {
            data3 = x;
            data4 = y;
            cout << this->data1 + this->data3 << endl;
            cout << this->data2 + this->data4 << endl;
        }
};

int main()
{
    Myclass <int, float> obj(30, 30.56);
    obj.display(20, 20.50);
    
    return 0;
}