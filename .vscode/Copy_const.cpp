#include<iostream>
using namespace std;

class Student
{
    int roll;
    string name;
    int fees;
    public:
        Student(int, string, int);
        Student(Student &t)
        {
            roll = t.roll;
            name = t.name;
            fees = t.fees;
        }
        void display();
};

Student :: Student(int x, string y, int z)
{
    roll = x;
    name = y;
    fees = z;
}
 void Student :: display()
 {
    cout << roll << endl << name << endl << fees << endl;
 }

int main()
{
    Student s(101, "afaq", 1000);
    s.display();
    
    cout << endl;

    Student afaq(s);
    afaq.display();
    
    return 0;
}