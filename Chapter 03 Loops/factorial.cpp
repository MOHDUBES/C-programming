// Ques: Print the factorial of a given number 'n'.

#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int fact = 1;
    for (int i=1; i<=n; i++){
        fact *= i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact;
}

// HOW 
// 1 Ques:  print the factorials of first 'n' natural numbers.

// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"Enter a Number : ";
//     cin>>n;
//     for (int i=1; i<=n; i++){
//         int fact = 1;
//         for (int j=1; j<=i; j++){
//             fact *= j;
//         }
//         cout<<"Factorial of "<<i<<" is "<<fact<<endl;
//     }
// }

// Ques: Write a program to print all the ASCII values and their equivalent characters of 26 alphabets. using a while loop. 

// #include<iostream>
// using namespace std;
// int main (){
//     char ch = 'A';
//     while (ch <= 'Z'){
//         int ascii = ch;
//         cout<<"Character: "<<ch<<" ASCII Value: "<<ascii<<endl;
//         ch++;
//     }
// }