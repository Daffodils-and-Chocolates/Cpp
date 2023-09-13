#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i,a;
    cout << "Enter a number" <<endl;
    cin >> n;
    a =n;
    while(a>0){
        a/=10;
        i++;
    }
    int j=pow(10.0,i);
    cout<<(n%j)<<" ";
    return 0; 
}