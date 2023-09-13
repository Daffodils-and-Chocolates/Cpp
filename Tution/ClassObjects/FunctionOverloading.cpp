#include <iostream>
#include <string.h>
using namespace std;

void sum(){
    cout<<"this is non-parameterized function\n";
}

void sum(int a,int b){
    int c;
    c=a+b;
    cout<<c<<endl;
}

void sum(char c){
    cout<<"Typecasting it : ";
    cout<<(int)c<<endl;
}

// int sum(){
//     cout<<"this is return type int sum function\n";
// }

int main(){
    sum();
    sum(3,7);
    sum('a');
    // int sum();
    return 0; 
}