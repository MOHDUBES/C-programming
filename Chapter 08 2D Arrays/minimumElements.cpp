// Ques: Find the minimum element in a given matrix.
#include <iostream>
using namespace std;

int main() {
    int r, c, a[10][10];
    cin >> r >> c;

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin >> a[i][j];

    int min = a[0][0];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(a[i][j] < min)
                min = a[i][j];

    cout << "Minimum element = " << min;
    return 0;
}