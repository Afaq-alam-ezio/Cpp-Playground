#include<iostream>
using namespace std;

class Employee
{
     int id;
     static int count;
     public:
        void set()
        {
            cout << " id = ";
            cin >> id;
        }

        void get()
        {
            count++;
            cout << "Employee no = " << count << " has id = " << id << endl;
        }
};

int Employee :: count = 0;

int main()
{
    Employee o1, o2, o3;
    o1.set();
    o1.get();

    o2.set();
    o2.get();

    o3.set();
    o3.get();

    return 0;
}