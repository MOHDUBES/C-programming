// Ques: Display this GP-1,2,4,8,16,32,..upto 'n' trems.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    // 1,2,4,8,16,32,..
    int a = 1;
    for(int i = 1; i <=  n; i++)
    {
        cout<<a<<" ";
        a = a * 2;
    }
}

    // How 
//Ques: Display this GP-3,12,48,.. upto 'n' trems.