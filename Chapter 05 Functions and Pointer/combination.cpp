// Ques : Combination and Permutation
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     int r;
//     cout<<"Enter r : ";
//     cin>>r;
//     int a = 1;
//     for(int i=1;i<=n;i++){
//         a *= i;
//     }
//     int b = 1;;
//     for(int i=1;i<=r;i++){
//         b *= i;
//     }
//     int c = 1;
//     for(int i=1;i<=n-r;i++){
//         c *= i;
//     }
//     cout<<a/(b*c);
// }


        //    or

#include<iostream>
using namespace std;
int factorial(int n){
    int f = 1;
    for(int i=1;i<=n;i++){
        f *= i;
    }
    return f;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int r;
    cout<<"Enter r : ";
    cin>>r;
    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n-r);
    cout<<a/(b*c);
}

// How
// Ques : Permutation
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     int r;
//     cout<<"Enter r : ";
//     cin>>r;
//     int a = 1;
//     for(int i=1;i<=n;i++){
//         a *= i;
//     }
//     int b = 1;;
//     for(int i=1;i<=n-r;i++){
//         b *= i;
//     }
//     cout<<a/b;
// }

        //    or

// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int f = 1;
//     for(int i=1;i<=n;i++){
//         f *= i;
//     }
//     return f;
// }
// int main(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     int r;
//     cout<<"Enter r : ";
//     cin>>r;
//     int a = factorial(n);
//     int b = factorial(n-r);
//     cout<<a/b;
// }