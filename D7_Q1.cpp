/*
Write a C++ program to find the most occuring element in an array of integers.
Input Format :
Enter the number of elements : 5
Enter the elements of the array :
2
3
5
3
4
Output Format :
Most Occured Element : 3
*/

#include<iostream>
using namespace std;

int main()
{
    int arr[20], n;
    cout << "Enter the number of elements : ";
    cin >> n;
    cout << "Enter the elements of the array :" <<endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int c = 1;
    int most_occuring;
    for(int i = 0; i < n; i++)
    {
        int count = 1;
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count > c)
        {
            c = count;
            most_occuring = arr[i];
        }
    }
    cout << "Most Occured Element : " << most_occuring << endl;
    return 0;
}