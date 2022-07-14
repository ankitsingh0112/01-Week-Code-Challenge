/*
WAP to print the given pattern

        1
       232
      34543
     4567654
    567898765
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin >> n;
    //for row
    for (int i = 1; i <= n; i++)
    {
        //for spaces
        for (int space = (n-i); space >= 1; space--)
        {
            cout << " ";
        }
        int count = i;
        for (int j = 1; j <= i; j++)
        {
            cout << count;
            count++;
        }
        count = count - 2;
        for (int k = 1; k <= i-1; k++)
        {
            cout << count;
            count--;
        }
        cout << endl;
    }
    
    return 0;
}