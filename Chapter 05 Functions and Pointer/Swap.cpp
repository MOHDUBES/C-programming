// Ques : Swap 2 numbers
#include<iostream>
using namespace std;
int main(){
    int x = 2;
    int y = 5;
    cout<<x<<" "<<y<<endl;
    x = y;
    y = x;
    cout<<x<<" "<<y<<endl;
}



// Ques : Swap 2 numbers method 1
// #include<iostream>
// using namespace std;
// int main(){
//     int x = 2;
//     int y = 5;
//     cout<<x<<" "<<y<<endl;
//     int temp = x;  // temp variable
//     x = y;
//     y = temp;
//     cout<<x<<" "<<y<<endl;
// }


// Ques : Swap 2 numbers method 2
// #include<iostream>
// using namespace std;
// int main(){
//     int x = 2;
//     int y = 5;
//     cout<<x<<" "<<y<<endl;
//     x = x + y;  // x now becomes 7
//     y = x - y;  // y becomes 2
//     x = x - y;  // x becomes 5
//     cout<<x<<" "<<y<<endl;
// }