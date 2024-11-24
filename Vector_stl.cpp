#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v)
{

    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    vector<int> :: iterator iter = v.begin(); // vector<int> :: iterator iter = reference; also its a pointer, 
                                              // also compulsory to access the elements inside vector.
    v.insert(iter+3, 3, 40);
    cout << endl;

    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    // vector<int> vec1;
    // int element;
    // int size;
    // cout << "Enter the size of vector = ";
    // cin >> size;
    // for(int i = 0; i < size; i++)
    // {
    //     cout << "Enter the element = ";
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // // vec1.pop_back();   // to delete the last element 
    // display(vec1);

    int len;
    cout << "Enter the length = ";
    cin >> len;
    int ele;
    vector<int> vec2(len);
    for(int i = 0; i < vec2.size(); i++)
    {
        cout << "Enter the value = ";
        cin >> ele;
        vec2[i] = ele;
        cout << vec2[i] << " " << endl;
    }

    vector<int> vec3(vec2);
    for(int i = 0; i < vec3.size(); i++)
    {
        cout << vec3[i] << " " << endl;
    }

    return 0;
}