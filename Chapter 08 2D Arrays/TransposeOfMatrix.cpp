// Ques: Write a program to print the transpose of the matrix entered by the user.
#include <iostream>
using namespace std;

int main()
{
    int r, c;
    int a[10][10], t[10][10];
    cin >> r;
    cin >> c;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            t[j][i] = a[i][j];
        }
    }
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
} 