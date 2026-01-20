#include <iostream>
using namespace std;
int main(){
    int x = 4534563;
    string s = to_string(x);
    s = s + "dd";
    cout<<s;
}

// Ques : Return the total number of digits in a number without using any loop.

// Hint : try using inbuilt to_string() function.

#include <iostream>
using namespace std;
int main(){
    int x = 4534563;
    string s = to_string(x);
    cout<<s.length();
}