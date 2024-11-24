#include<iostream>
using namespace std;

class Emp
{
    int id;
    char name[30];
    public:
        void setdata();
        void showdata();
};

void Emp :: setdata()
{
    cout << " Enter id = ";
    cin >> id;
    cout << " Enter name = ";
    cin >> name;
}

void Emp :: showdata()
{
    cout << "Id is = " << id << endl << "Name is = " << name << endl;
}

int main()
{
    cout << "Below the inputs :" << endl;
    Emp obj1[5];
    for (int i = 0; i < 5; i++)
    {
        obj1[i].setdata();
    }

    cout << "Below the outputs :" << endl;
    for (int i = 0; i < 5; i++)
    {
        obj1[i].showdata();
    }

    return 0;
}