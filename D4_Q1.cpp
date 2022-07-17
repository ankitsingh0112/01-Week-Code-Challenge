/*
Problem Name: Binary To Decimal
Problem Difficulty: None
Problem Constraints: 0 < N <= 1000000000
Problem Description:
Take N (number in binary format). Write a function
that converts it to decimal format and Print the value returned.
Input Format:
Sample Input: 101010
Output Format:
Sample Output: 42
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    unsigned long int dec = 0, bin;
    int r;
    cin >> bin;
    for (int i = 0; bin != 0; i++)
    {
        r = bin % 10;
        dec = dec + r * (pow(2, i));
        bin /= 10;
    }
    cout << dec;
    return 0;
}