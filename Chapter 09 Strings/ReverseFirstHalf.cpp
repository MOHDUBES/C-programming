// Ques: Input a string of even length and reverse the first half of the string.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s = "Ubes";
    cout<<s<<endl;
    int n = s.length(); // n = 4
    reverse(s.begin(),s.begin()+n/2);
    // int i = 0;
    // int j = n/2 - 1;
    // while(i<j){
    //     char temp = s[i];
    //     s[i] = s[j];
    //     s[j] = temp;
    //     i++;
    //     j--;
    // }
    cout<<s<<endl;
}

// How
// Ques: input a string of length greater than 5 and reverse the 
// substring from position 2 to 5 using inbuilt functions.