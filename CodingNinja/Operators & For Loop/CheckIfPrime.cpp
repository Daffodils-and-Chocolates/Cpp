// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     bool Prime = true;
//     cout << "Enter a number" << endl;
//     cin >> n;
//     for (int d=2; n>d;d++) {
//         if(n%d==0){
//             cout<< "Not Prime";
//             Prime = false;
//             break;
//         }
//     }
//     if (Prime){
//         cout << "prime";
//     }
//     return 0; 
// }
#include <iostream>
using namespace std;

bool checkPrime(int n){
    bool prime=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=false;
            break;
        }
    }
    return prime;
}

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    if (checkPrime(n)){
        cout<<"is Prime";
    }
    else{
        cout<<" not Prime";
    }
    return 0; 
}