/*
Write a C++ program to rearrange a given sorted array of positive integers.
Note : In final result, first element shoud be maximum value, second minimum value, third second maximum value,
fourth second minimum value, fifth third maximum and so on.
*/

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[20], n;
    cout << "Enter the number of elements : ";
    cin >> n;
    cout << "Input the elements :" << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++)
    {
        cout << *max_element(arr+i, arr+n) << "\t";
        if(i == (n-1))
        {
            exit(0);
        }
        else
            cout << *min_element(arr+i, arr+n) << "\t";
        n--;
    }
    return 0;
}