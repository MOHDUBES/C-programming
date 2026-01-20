// Ques: print the given pattern
//      *
//     **
//    ***
//   ****
//  *****

// Star Triangle Reverse

#include <iostream> 
using namespace std;
int main(){
    int n;
    cout<<" Enter number of rows : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


// How
// Ques : print the given pattern
//       1
//      12
//     123
//    1234

// Number Triangle Reverse


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<" Enter number of rows : ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         for(int j=1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }


// How
// Ques : print the given pattern
//      A
//     AB
//    ABC
//   ABCD
//  ABCDE

// Alphabet Triangle Reverse

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<" Enter number of rows : ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         for(char ch='A'; ch<='A'+i-1; ch++){
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
// }

// How
// Ques : print the given pattern
//        ****
//      ****
//    ****
//  ****


// Rhombus Star Pattern

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<" Enter number of rows : ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         for(int j=1; j<=n; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }