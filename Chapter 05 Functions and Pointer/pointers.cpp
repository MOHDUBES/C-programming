// *Pointers
// Access the value of the variable whors address is in the pointer -> using
// dereference/ & operator

#include<iostream>
using namespace std;
int main(){
    int x = 3;
    int* p = &x;
    cout<<&x<<endl;
    cout<<p<<endl;
}