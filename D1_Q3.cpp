//Print the given pattern
/*
        1
       1 2
      1 2 3
     1 2 3 4
    1 2 3 4 5
*/

#include<iostream>
using namespace std;

int main()
{
    int n, val;
    cout << "Enter the number of rows : ";
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        for(int s = 1; s <= (n-i); s++)
            cout << " ";
        val = 1;
        for(int j = 1; j <= i; j++)
        {
            cout << val << " ";
            val++;
        }
        cout << endl;
    }
    return 0;
}