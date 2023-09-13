// Given a number N, find its square root. You need to find and print only the integral part of square root of N.
// For eg. if number given is 18, answer is 4.
#include <iostream>
using namespace std;

int main(){
    int n,k,i;
    cout << "Enter a number" <<endl;
    cin >> n;
    for(i =1;k<n;i++){
        k=i*i;
        // cout<<k<<endl;
    }
    if(k==n){
        cout<<(i-1);
    }
    else{
        cout<<(i-2);
    }
    return 0; 
}