// Ques: Make a function which calculates 'a' raised to the power 'b' using recursion.
#include <iostream>
using namespace std;
int power(int a, int b){
    if(b==0) return 1; // base case
    return a * power(a,b-1); // work + recursive call
}
int main(){
    int a;
    cout<<"Enter base : ";
    cin>>a;
    int b;
    cout<<"Enter power : ";
    cin>>b;
    cout<<power(a,b);
    
}