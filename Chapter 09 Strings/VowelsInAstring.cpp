#include <iostream>
using namespace std;
int main(){
    string s = "cow is an animal with four legs";
    int count = 0;
    for (int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count++;
        }
    }
    cout<<count;
}
// How
// Ques: input a string of size n and update all the even positions in 
// the string to character 'a'. consider 0-based indexing.
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string s;
//     cin >> s;   // input string
//     for (int i = 0; i < s.length(); i++) {
//         if (i % 2 == 0) {   // even index (0-based)
//             s[i] = 'a';
//         }
//     }
//     cout << s;
// }