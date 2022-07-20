// Write a C++ program to find and print all common elements in three sorted arrays of integers.

#include<iostream>
using namespace std;

int main()
{
    int a[10], b[10], c[10], n;
    cout << "Enter the number of elements : ";
    cin >> n;
    cout<< "Enter the elements of 1st array : "<<endl;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cout<< "Enter the elements of 2nd array : "<<endl;
    for(int i = 0; i < n; i++)
        cin >> b[i];
    cout<< "Enter the elements of 3rd array : "<<endl;
    for(int i = 0; i < n; i++)
        cin >> c[i];
    cout << "Common elements are : " << endl;
    for(int  i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            for(int k= 0; k < n; k++)
            {
                if(a[i]== b[j] && a[i] == c[k])
                    cout << a[i] << "\t";
            }
        }
    }
    return 0;
}