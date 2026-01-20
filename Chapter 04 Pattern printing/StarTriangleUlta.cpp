// Ques: print the given pattern
// ****
// ***
// **
// *

// Star Triangle Ulta
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter number of the rows : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<"* ";
        }  
        cout<<endl;     
    }

}

// HOW
// Ques: print the given pattern
// 1234   or    //1111     or   //4  
// 123          //222           //43
// 12           //33            //432
// 1            //4             //4321  

// Number Triangle Ulta


// Ques: print the given pattern
// ABCD    
// ABC      
// AB       
// A

// Alphabet Triangle Ulta