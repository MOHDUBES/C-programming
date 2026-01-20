#include <iostream>
using namespace std;
int main(){
    string s = "Ubes";
    cout<<s<<" "<<s.length()<<endl;
    // s = s + " Malik";
    s = "Malik" + s;
    cout<<s<<" "<<s.length()<<endl;
}