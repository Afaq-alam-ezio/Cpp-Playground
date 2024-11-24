#include<iostream>
using namespace std;

class Student
{
    public:
        double marks;
        Student(double m)
        {
            marks = m;
        }
};

void average(Student s1, Student s2)
{
    double avg =(s1.marks + s2.marks)/2;
    cout << "The average is = " << avg << endl;  
}


int main()
{
    Student s1(20.36), s2(30.23);
    average(s1, s2);
    return 0;
}