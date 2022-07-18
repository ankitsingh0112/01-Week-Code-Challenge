/*
Write a C++ program to find k largest elements in a given array of integers.
Output Formate :
Original array: 4 5 9 12 9 22 45 7
Largest 4 Elements: 45 22 12 9
take k = 4;
*/

#include <iostream>
using namespace std;

void sortArray(int arr[], int n);
void printArray(int arr[], int n);

int main()
{
    int n, arr[10], k;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // for number of largest elements
    cin >> k;
    cout << "Original Array : ";
    printArray(arr, n);
    sortArray(arr, n);
    cout << endl;
    cout << "Largest " << k << " elements : ";
    for (int i = 0; i < k; i++)
        cout << arr[i] << " ";
    // printArray(arr, k);

    return 0;
}

void sortArray(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}