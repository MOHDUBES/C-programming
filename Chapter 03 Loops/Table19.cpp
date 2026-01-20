// Ques: Print the table of 19.

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 19; i <= 190; i++)
//     {
//         if (i % 19 == 0)
//             cout << i << " ";
//     }
// }

// How
// Ques: Print the table of 'n'. Here 'n' is a integer which user will input.

// Ques: Display this AP-1,3,5,7,9..upto 'n' terms.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     // 1,3,5,7,9....
//     for(int i=1;i<=2*n-1;i+=2){
//         cout<<i<<" ";
//     }
// }
// How
// Ques: Display this AP-4,7,10,13,16..upto 'n' terms.

// Solve with maths

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     // 4,7,10,13,16....
//     for (int i = 4; i <= 3 * n + 1; i += 3)
//     {
//         cout << i << " ";
//     }
// }


// Solve without maths

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    // 4,7,10,13,16....
    int a = 4;
    for(int i = 1; i <=  n; i++)
    {
        cout<<a<<" ";
        a = a + 3;
    }
}

