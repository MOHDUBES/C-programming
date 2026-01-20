// Ques: find the product of all elements in a given matrix.
#include <iostream>
using namespace std;

int main() {
    int r, c, a[10][10];
    long long product = 1;

    cin >> r >> c;

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++) {
            cin >> a[i][j];
            product *= a[i][j];
        }

    cout << "Product of elements = " << product;
    return 0;
}