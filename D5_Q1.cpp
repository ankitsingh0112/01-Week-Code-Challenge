<<<<<<< HEAD
/*
Problem Name: Arrays-Target Sum Pairs
Problem Difficulty: None
Problem Constraints: Length of the arrays should be between 1 and 1000.
Problem Description:
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a function which prints all pairs of numbers which sum to target.
Input Format: The first line contains input N. Next N lines contains the elements of array and (N+1)th line contains target number.
Sample Input: 5
1
3
4
2
5
5
Output Format: Print all the pairs of numbers which sum to target. Print each pair in increasing order.
Sample Output: 1 and 4
2 and 3
*/

#include <iostream>
using namespace std;

int main()
{
    int n, target, arr[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> target;
    int left = 0;
    int right = (n - 1);
    while(left < right)
    {
        if(arr[left] + arr[right] == target)
        {
            cout << arr[left] << " and " << arr[right]<<endl;
            left++;
            right--;
        }
        else if(arr[left] + arr[right] > target)
            right--;
        else
            left++;
    }
    return 0;
=======
/*
Problem Name: Arrays-Target Sum Pairs
Problem Difficulty: None
Problem Constraints: Length of the arrays should be between 1 and 1000.
Problem Description:
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a function which prints all pairs of numbers which sum to target.
Input Format: The first line contains input N. Next N lines contains the elements of array and (N+1)th line contains target number.
Sample Input: 5
1
3
4
2
5
5
Output Format: Print all the pairs of numbers which sum to target. Print each pair in increasing order.
Sample Output: 1 and 4
2 and 3
*/

#include <iostream>
using namespace std;

int main()
{
    int n, target, arr[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> target;
    int left = 0;
    int right = (n - 1);
    while(left < right)
    {
        if(arr[left] + arr[right] == target)
        {
            cout << arr[left] << " and " << arr[right]<<endl;
            left++;
            right--;
        }
        else if(arr[left] + arr[right] > target)
            right--;
        else
            left++;
    }
    return 0;
>>>>>>> abb61edf47b58597a6ee5d735774b57802bcd1b7
}