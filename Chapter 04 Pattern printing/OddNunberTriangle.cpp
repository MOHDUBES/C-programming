// Ques : print the given pattern
// 1
// 13
// 135
// 1357


// Odd Number Triangle
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter number of the rows : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        int odd = 1;
        for(int j=1; j<=i; j++){
            cout<<odd<<" ";
            odd += 2;
        }
        cout<<endl;
    }
}

// HOW
// Ques : print the given pattern
// 2
// 24
// 246
// 2468

// Even Number Triangle

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<" Enter the number of the rows : ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         int even = 2;
//         for(int j=1; j<=i; j++){
//             cout<<even<<" ";
//         even += 2;
//             }
//             cout<<endl;
//     }
// }