/*
C++ program to convert number into word.
Input : 1455
Output : one four five five
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int num, r;
    string word[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << "Enter the number : ";
    cin >> num;
    int sum = 0;
    while (num != 0)
    {
        sum = (sum*10) + (num%10);
        num /= 10;
    }
    
    for(int i = 0; sum != 0; i++)
    {
        r = sum % 10;
        r--;
        sum /= 10;
        cout << word[r] << "\t";
    }
    return 0;
}