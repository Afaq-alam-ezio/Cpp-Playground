#include<iostream>
#include<list>
using namespace std;


void display(list<int> &list1)
{
    list<int> :: iterator lt = list1.begin(); // an iterator is compulsory till now to access the elements inside list
    for(lt = list1.begin(); lt != list1.end(); lt++)
    {

        cout << *lt << " ";
    }
    cout << endl;
}



int main()
{
    list<int> list1;
    list<int> list2;

    // list1.insert(it, 4);

    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(1);

    cout << "list1 items below :" << endl;
    display(list1);
    
    // for(it = list1.begin(); it != list1.end(); it++)
    // {

    //     cout << *it << " ";
    // }

    list1.sort();
    cout << "sorted list1 items below :" << endl;
    display(list1);
    // for(it = list1.begin(); it != list1.end(); it++)
    // {

    //     cout << *it << " ";
    // }

    list2.push_back(6);
    list2.push_back(4);
    list2.push_back(5);

    cout << "list2 items below :" << endl;
    display(list2);
    list2.sort();
    cout << "sorted list2 items below :" << endl;
    display(list2);


    list1.merge(list2); // all the output from here will be in sorted format as the input lists were in sorted format ,
                        // if it was not in sorted format then the elements will be just concatenated , 
                        // to see that just comment out the call of sort and display function.
    cout << "list1 items below after merging :" << endl;
    display(list1);



    return 0;
}