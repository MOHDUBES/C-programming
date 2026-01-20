// Ques: Find the sum of all elements in a given matrix.
#include <iostream>
using namespace std;

int main() {
    int r, c, a[10][10], sum = 0;
    cin >> r >> c;

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++) {
            cin >> a[i][j];
            sum += a[i][j];
        }

    cout << "Sum of elements = " << sum;
    return 0;
}