// function Calling Itself
#include <iostream>
using namespace std;
void greet(){
    cout << "Hello, World!" << endl;
    greet(); // Recursive call
}
int main() {
    greet();
    return 0;
}