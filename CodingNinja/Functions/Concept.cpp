#include <iostream>
using namespace std;

//changes to an argument in a function does not change value 
//of the argumet outside the code block

// void doubleValue(int a) {
//     a = a * 2;
//     cout<<a<<endl;
// }
// int main() {
//     int a = 8;
//     doubleValue(a);
//     cout << a;
// }

//does not change even if updates value is returned

int doubleValue(int a) {
    a = a * 2;
    return a;
}
int main() {
    int a = 8;
    doubleValue(a);
    cout << a;
}