/*
WAP in cpp to store 10 marks of type float, store them in array, then the program will determine the number of marks greater than the average.
*/

#include <iostream>
using namespace std;

int main()
{
    float marks[10];
    float sum = 0;
    cout << "Input the marks of 10 students : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> marks[i];
        sum += marks[i];
    }
    float avg = sum / 10.0;
    cout << "Average : " << avg << endl;
    int count = 0;
    for (int i = 0; i < 10; i++)
        if (marks[i] > avg)
            count++;
    cout << "Number of students got more than the average : " << count << endl;
    return 0;
}