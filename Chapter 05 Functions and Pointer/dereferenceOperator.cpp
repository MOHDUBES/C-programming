#include<iostream>
using namespace std;
int main(){
    int x = 12;
    int* ptr = &x;
    cout<<x<<endl;       // prints value of x
    cout<<ptr<<endl;     // prints address of x
}