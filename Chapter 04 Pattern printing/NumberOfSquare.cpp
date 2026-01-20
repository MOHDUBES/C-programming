//Ques: print the given pattern
//1 2 3 4 
//1 2 3 4
//1 2 3 4
//1 2 3 4


// Number Square 

#include <iostream>
using namespace std;    
int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

//HOW 
// Ques: print the given pattern
//1 1 1 1 
//2 2 2 2
//3 3 3 3
//4 4 4 4

// Number Square

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the size of the square: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             cout << i << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }