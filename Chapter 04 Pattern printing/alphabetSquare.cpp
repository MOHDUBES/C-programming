// Ques: print the given pattern
// A B C D
// A B C D
// A B C D
// A B C D

// Alphabet Square/

#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter side of square : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=0; j<n; j++){
            char ch = 'A' + j;
            cout<<ch<<" ";
        }
        cout<<endl;

    }
}



// HOW
// Ques: print the given pattern    
// A A A A
// B B B B  
// C C C C
// D D D D

// Ques: print the given pattern
// a b c d
// a b c d  (n=3)
// a b c d