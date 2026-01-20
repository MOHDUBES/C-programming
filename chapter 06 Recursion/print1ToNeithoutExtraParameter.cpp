// Ques: print 1 to n( without extra parameter)
#include <iostream>
using namespace std;
void print(int n){
    if(n==0) return;  // base case
     cout<<n<<endl;   //  call
    print(n-1);      // work
    // cout<<n<<endl;   //  call
}
int main(){
    int n;
    cout<<" Enter n : ";
    cin>>n;
    print(n);
}


// How
// Ques : print sum from 1 to n (parameterised)

// #include <iostream>
// using namespace std;
// int print(int n){
//     if(n==0) return 0;  // base case
//      return n + print(n-1);      // work + recursive call
// }
// int main(){
//     int n;
//     cout<<" Enter n : ";
//     cin>>n;
//     int sum = print(n);
//     cout<<" Sum is : "<<sum<<endl;
// }
