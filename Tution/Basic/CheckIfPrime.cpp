#include <iostream>
using namespace std;

void checkPrime(int n){
    bool prime=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime = false;
            break;
        }
    }
    if(prime==1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    checkPrime(n);
    return 0; 
}