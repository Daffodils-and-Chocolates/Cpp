// #include <iostream>
// using namespace std;

// int main(){
//     char n;
//     cout << "Enter the characters" <<endl;
//     while (cin>>n){
//         cout<< n << " " << ":" << " "<< (int)n << endl;
//     }
//     return 0; 
// }
#include <iostream>
using namespace std;

void ASCIIcode(char a){
    cout<< (int)a;
}
int main(){
    char n;
    cout << "Enter a character" <<endl;
    cin >> n;
    ASCIIcode(n);
    return 0; 
}