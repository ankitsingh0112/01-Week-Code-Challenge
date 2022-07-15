/*
Determine if the sum of two integers is equal to a given value

Problem Statement : Given an array of integers and a value, determine if there any two integers in the array whose sum
is equal to the given value. Return true if the sum exists, and false if if does not. Consider the following array and its target sums:

5 7 1 2 8 4 3
Target sum = 10 : 7+3 = 10, 2+8 = 10
Target sum = 19 : No two values sum up to 19
*/

#include<iostream>
using namespace std;

int main()
{
    int arr[10], n, sum;
    cout << "Enter the number of elements : ";
    cin >> n;
    cout << "Input " << n << " elements of the array :"<<endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter the target sum : ";
    cin >> sum;
    bool check = true;
    // logic
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[i]+arr[j] == sum){
                cout << arr[i] << " + " << arr[j] << " = " << sum << endl;
                check = false;
                break;
            }
        }
    }
    if(check == true)
        cout << "No two values sum up to "<< sum;
    return 0;
}