#include<iostream>
using namespace std;

class Over
{
    int len;
    int bre;
    int hei;
    public:
        void set(int x, int y, int z)
        {
            len = x;
            bre = y;
            hei = z;
        }
        void vol()
        {
            int v = len*bre*hei;
            cout << v << endl;
        }
        Over operator +(const Over &d)
        {
            Over o3;
            o3.len = this->len + d.len;                           // c = a + b
            o3.bre = this->bre + d.bre;                           // c = a + b
            o3.hei = this->hei + d.hei;                           // c = a + b
            return o3;                                           
        }
};


int main()
{
    Over o1, o2, o3;
    o1.set(1, 2, 3);
    o1.vol();

    o2.set(1, 2, 3);
    o2.vol();

    o3 = o1 + o2;
    o3.vol();
    return 0;
}