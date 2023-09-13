#include <iostream>
using namespace std;
int n;
int main(){
    cout << "Enter a number" <<endl;
    cin >> n;
    if(n!=0){
        int n = 12;
        cout<<"Global"<< ::n;
        cout<<endl<<"Local" <<n;
    }
    return 0; 
}

// to be noted, if-else do not change the scope of the variable for example
// the following code will give error

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter a number" <<endl;
//     cin >> n;
//     if(n!=0){
//         int n = 12;
//         cout<<"Global"<< ::n;
//         cout<<endl<<"Local" <<n;
//     }
//     return 0; 
// }

// only functions or loops can change the scope of a varible and in the first example int main() is considered a function