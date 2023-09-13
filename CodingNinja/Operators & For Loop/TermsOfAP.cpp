// Write a program to print first x terms of the series 3N + 2 which are not multiples o
#include <iostream>
using namespace std;

int main(){
    int n,a,count;
    cout << "Enter a number" <<endl;
    cin >> n;
    for(int i=1;count<n;i++){
        a=3*i+2;
        if(a%4!=0){
            cout<<a<<" ";
            count++;
        }
    }
        return 0; 
}