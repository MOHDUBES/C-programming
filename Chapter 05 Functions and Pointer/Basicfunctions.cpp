#include<iostream>
using namespace std;
void usa(){
    cout<<"You are using USA function"<<endl;
    return;  // return ho te he khatam ho jaata hai yeh function
}
void india(){
    cout<<"You are using India function"<<endl;
    return;
}
int main(){
    usa();
    cout<<"You are in main function"<<endl;
    india();
}