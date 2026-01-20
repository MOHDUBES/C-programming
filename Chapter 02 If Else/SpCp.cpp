#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter cost price : ";
    cin>>cp;
    int sp;
    cout<<"Enter selling price : ";
    cin>>sp;
    if(sp>cp){
        cout<<"profit is "<<sp-cp;
    }
    else if(sp<cp){
        cout<<"loss is "<<cp-sp;
    }
    else{
        cout<<"no profit no loss";
    }

}

// how : Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle than its perimeter.