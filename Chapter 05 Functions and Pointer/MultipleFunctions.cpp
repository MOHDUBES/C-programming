#include<iostream>
using namespace std;
void usa(){
    cout<<"You are in USA"<<endl;
    return;
}
void India(){
    cout<<"You are in India"<<endl;
    usa();
}
int main(){
    cout<<"You are in main"<<endl;
    India();
    return 0;
}