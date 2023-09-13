// Write a program that takes a character as input and prints either 1, 0 or -1 according to the following rules.
// 1, if the character is an uppercase alphabet (A - Z)
// 0, if the character is a lowercase alphabet (a - z)
// -1, if the character is not an alphabet

// #include <iostream>
// using namespace std;
// int main(){
//     char n;
//     cout << "enter a character to check it's Case" << endl;
//     cin>>n;
//     if (n>='A' && n<='Z'){
//         cout << "Capital case";
//     }
//     else if (n>='a' && n<='z'){
//         cout << "Small case";
//     }
//     else {
//         cout << "invalid ";
//     }
// }
#include <iostream>
using namespace std;

void checkCase(char a){
    if(a>='a' && a<='z'){
        cout << "Lower Case";
    }
    else if(a>='A' && a<='Z'){
        cout<< "Capital Case";
    }
    else{
        cout<<"Invalid";
    }
}

int main(){
    char n;
    cout << "Enter a character" <<endl;
    cin >> n;
    checkCase(n);
    return 0; 
}