// Ques : print the given pattern
//       *
//       *
//   * * * * *
//       *
//       * 

// Star Plus Pattern
#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter nuber of rows : ";
    cin>>n;
    int mid = n/2 + 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==mid || j==mid) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}


// How
// Ques : print the given pattern
//  ******
//  *    *
//  *    *
//  ******


// Hollow Rectangle
// #include<iostream>
// using namespace std;
// int main(){
//     int rows, cols;
//     cout<<" Enter number of rows and columns : ";
//     cin>>rows>>cols;
//     for(int i=1; i<=rows; i++){
//         for(int j=1; j<=cols; j++){
//             if(i==1 || i==rows || j==1 || j==cols) cout<<"* ";
//             else cout<<"  ";
//         }
//         cout<<endl;
//     }
// }