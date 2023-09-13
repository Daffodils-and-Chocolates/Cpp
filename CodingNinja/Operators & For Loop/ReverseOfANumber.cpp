// Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
// Note : If a number has trailing zeros, then its reverse will not include them. 
// For e.g., reverse of 10400 will be 401 instead of 00401.
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    if(n==0){
        cout<<"0";
    }
    else{
        while(n%10==0){
            n/=10;
        }
        for(;n>0;n/=10){
            cout<<(n%10);
        }
    }
    return 0; 
}