// Ques: Find the maximum element in a given matrix.

// #include <iostream>
// #include <climits>
// #include <algorithm>
// using namespace std;
// int main(){
//     int arr[4][2] = {{76,81},{13,76},{82,91},{88,91}};
//     int mx = INT_MIN;
//     for(int i=0;i<4;i++){
//         for(int j=0;j<2;j++){
//             mx = max(mx,arr[i][j]);
//         }
//     }
//     cout<<mx;
// }

// How
// Ques: Given a matrix 'a' of dimension n x m and 2 coordinates (l1,r1)
// and (l2,r2). Return the sum of the rectangle from (l1,r1) to (l2,r2).
// #include <iostream>
// using namespace std;

// int main() {
//     int n, m, a[10][10];
//     int l1, r1, l2, r2;
//     int sum = 0;

//     cin >> n >> m;

//     for(int i=0;i<n;i++)
//         for(int j=0;j<m;j++)
//             cin >> a[i][j];

//     cin >> l1 >> r1 >> l2 >> r2;

//     for(int i=l1;i<=l2;i++)
//         for(int j=r1;j<=r2;j++)
//             sum += a[i][j];

//     cout << "Rectangle sum = " << sum;
//     return 0;
// }

