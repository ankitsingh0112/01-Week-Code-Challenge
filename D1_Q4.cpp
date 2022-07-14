#include<iostream>
using namespace std;

int main()
{
    int n, val;
    cout << "Enter the number of rows : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for(int s = 1; s <= (n-i); s++)
            cout << " ";
        val = i;
        for(int j = 1; j <= i; j++)
            cout << val--;
        val += 2; // every time value of val become zero so we have to increse it by 2
        for(int k = 1; k <= i-1; k++)
            cout<<val++;
        cout << endl;
    }
    
    return 0;
}