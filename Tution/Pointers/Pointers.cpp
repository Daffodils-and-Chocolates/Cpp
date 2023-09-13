#include <iostream>
using namespace std;

int main(){
    int a,*p;
    p = &a;
    cout<<a<<"\t"<<p<<"\t"<<*p;
    return 0; 
}