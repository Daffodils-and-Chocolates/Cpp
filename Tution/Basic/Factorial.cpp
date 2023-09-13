// #include <iostream>
// using namespace std;

// int main(){
//     int n,f=1;
//     cout << "Enter a number" <<endl;
//     cin >> n;
//     for(int i= 1;i<=n;i++){
//         cout<< i<<" ";
//         f*=i;
//     }
//     cout<<"Factorial is: "<< f;
//     return 0; 
// }
#include <iostream>
using namespace std;

int factorial(int n){
    int p=1;
    for(int i=1;i<=n;i++){
        p*=i;
    }
    return p;
}

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    cout<<factorial(n);
    return 0; 
}