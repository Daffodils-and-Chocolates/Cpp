#include <iostream>
using namespace std;

void checkFibo(int n){
    bool fibo=false;
    int a,b,c;
    a=0;b=1;
    if(n==0 || n==1){
        fibo=true;
    }
    else{
        for(c=a+b;c<=n;){
            // cout<<"[ "<<a<<b<<c<<" ]\t";
            if(c==n){
                fibo=true;
                break;
            }
            c = a + b;
            a=b;
            b=c;
            // cout<<"[ "<<a<<b<<c<<" ]\t";
        }
    }
    if(fibo){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    checkFibo(n);
    return 0; 
}