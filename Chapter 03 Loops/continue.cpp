// non-continue;

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=20;i++){
//         cout<<i<<" ";
//     }
// }

// continue;
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=20;i++){
        if(i==2) continue; 
        if(i==12) continue; 
        cout<<i<<" ";
    }
}
        //How
// Ques: WAp to print odd number from 1 to 100. using continue