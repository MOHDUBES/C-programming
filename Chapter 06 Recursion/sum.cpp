// Ques : print sum from 1 to n (Return type)

#include<iostream>
using namespace std;
int sum (int n){
    if(n==1) return 1;  // base case
    return n + sum(n-1);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<sum(n);
}