#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{

    int arr[] = {1, 2, 5, 4, 3, 9};
    // sort(arr, arr+6); // ascending order sort
    sort(arr, arr+6, greater<int>()); // descending order sort
    for(int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}