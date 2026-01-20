// Ques : Write a program to store 10 at every index
// of a 2D matrix with and 5 rows and columns.

#include <iostream>
using namespace std;
int main()
{
    int arr[5][5];
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = 10;
        }
    }
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// How
// Ques: Write a program to add two matrices.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int r, c;
//     int A[10][10], B[10][10], sum[10][10];
//     cin >> r >> c;
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             A[i][j] = 20;
//         }
//     }
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             B[i][j] = 20;
//         }
//     }
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             sum[i][j] = A[i][j] + B[i][j];
//         }
//     }
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cout << sum[i][j] << " ";
//         }
//     }
//     cout << endl;
// }